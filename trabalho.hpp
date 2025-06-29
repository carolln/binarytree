#include <bits/stdc++.h>
using namespace std;

#ifndef _TRAB_
#define _TRAB_

// --- Estrutura para representar os pares ordenados de inteiros ---
struct OrderedPair {
    int first;
    int second;
};

// --- Estrutura para os nodos da Árvore Binária de Busca ---
struct Node {
    int key;            
    OrderedPair data;   
    Node* left;  
    Node* right; 
};

// -- função que implementa a soma de uma pa (utilizada no método de cantor)
int somapa (int a) {
    return ((1+a)*a) / 2;
}

// --- Função que gera chaves para os pares ordenados
int createKey(OrderedPair pair) {

    return somapa(pair.first+pair.second) + pair.second;
}

// --- Função para criar um novo nodo ---
Node* createNode(int key, OrderedPair data) {
    Node * eu = new Node;
    eu->key = key;
    eu->data.first = data.first;
    eu->data.second = data.second;
    eu->left = nullptr;
    eu-> right = nullptr;
    return eu;
}




// funcao adicional que ajuda na insercao

Node * encontrarLugar(Node * pai, int chave) {

    if (pai->left == nullptr && pai ->right == nullptr) { // se chegamos numa folha, vamos inserir a partir dela
        return pai;
    }

    if (chave > pai->key) { 
        if (pai->right != nullptr) {
            return encontrarLugar(pai->right, chave);
        }
        return pai;
    }

    if (chave < pai->key) {
        if (pai->left != nullptr){
            return encontrarLugar(pai->left, chave);
        }
    }

    return pai;


}


/*
primeiro comparamos com a key
se for menor ou maior, a gente checa o filho pra ver se ta vazio e insere



*/

// --- Função para inserir um nodo ---
Node* insert(Node* root, int key, OrderedPair data) {

    int mykey = createKey(data);
   
    Node* seta = encontrarLugar(root, mykey);
   
   if (mykey == seta->key) {
       return seta;
    }

    Node * aa = createNode(mykey, data);

    if (mykey > seta->key) {
        seta->right = aa;
    }

    else { //  mykey < seta->key
        seta->left = aa;
    }

    return aa;

    /*if (mykey == key) return root; //ja existe a chave bb
    bool r

    /*if (mykey > key) {
        if (root->right != nullptr) {
            seta = root->right;
        }
        r = true;
    }

    else {
        if (root->left != nullptr) {
            seta = root->left;
        }
        r = false;
    }

    while (seta != nullptr) { // this is actually fake cause like. eu to sempre checando se o next eh null antes de avancar
        if (mykey == seta->key) return seta; //ja existe a chave bb

        else if (mykey > seta->key){
            r = true;
            if (seta->right != nullptr) {
                seta = seta->right;
            }
            else {
                break;
            }
        }

        else {
            r = false;
            if (seta->left != nullptr) {
                seta = seta->left;
            }
            else {
                break;
            }
        }
    }

    if (r) {
        seta->right = aa;
    }
    else {
        seta->left = aa;
    }

    return aa;*/

}

// --- Função para buscar a informação de um nodo (sem remover o nodo) ---
OrderedPair* search(Node* root, int key) {

    OrderedPair nulo;
    nulo.first = -1;
    nulo.second = -1;
    Node * backup = root;
    
    while (root->key != key) {
        if (key > root->key) {
            if (root->right == nullptr) { // a key eh diferente e nao existe.... to retornando nulo
                cout << "a chave passada não está presente na árvore. o par raiz será retornado o simbolocamente\n";
                return &(backup->data);
            }
            root = root->right;
        }

        else if (key < root->key) {
            if (root->left == nullptr) {
                cout << "a chave passada não está presente na árvore. so par raiz erá retornado simbólicamente\n";
                return &(backup->data);
            }
            root = root->left;
        }

        else { // eh igual
            return &root->data;
        }
    }

    return &root->data;
}


Node * tanaarvore (Node * pai, int chave, Node * avo = NULL) { // retorna o pai do nó com o valor que eu to procurando
    if (pai->key == chave) {
        return pai;
    }

    if (chave > pai->key) {
        if (pai->right != NULL) {
            return tanaarvore(pai->right, chave, pai);
        }
        return NULL;
    }

    // o valor vai ser menor que o do pai atual

    if (pai->left != NULL) {
        return tanaarvore(pai->left, chave, pai);
    }

    return NULL;
}

// so vamos chamar quando SABEMOS que ta na arvore
Node * findPai(Node * root, int obj) {
    Node * eu = root;
    Node * eu2 = NULL;

    while (eu->key != obj) {
        eu2 = eu;

        if (eu->key < obj) {
            eu = eu->right;
        }

        else {
            eu = eu->left;
        }
    }

    return eu2;
}

std::pair<Node *, Node *> findAnteante(Node * obj) {

    Node * antecessor = obj;
    Node * anteante = NULL;

    if (antecessor->left != NULL) {
        anteante = antecessor;
        antecessor = antecessor->left;

        while (antecessor->right != NULL) {
            anteante = antecessor;
            antecessor = antecessor->right;
        }
    }

    return make_pair(anteante, antecessor);
}


// funcoes acessorias à delecao

// --- Função para remover um nodo ---
Node* deleteNode(Node* &backup, int key) { // retorna um ponteiro pro pai?

    Node * root = backup;
    
    Node * eu = tanaarvore(root, key); // aqui eu to retornando o avo for some reason???

    // checa se eh folha nehn

    if (eu == NULL) {
        if (root->key != key) {
            //nao existe
            return root;
        }
        // se nao, eh a root e vai se encaixar em algum dos outros casos
    }

    Node * pai = findPai(root, key);
    std::pair<Node *, Node *> temp = findAnteante(eu);
    Node * anteante = temp.first;
    Node * goal = temp.second;

    Node * lastfilho = goal;

    // o pai eh null!!!!!! caso for repetifo

    if (eu->right == nullptr && eu->left == nullptr) { // eh uma folha
        if (pai != nullptr) { // nao to terminando de remover a arvore
            
            if (pai->right == eu) {
                pai->right = nullptr;
            }
            else if (pai->left == eu) {
                pai->left = nullptr;
            }

        }

        else {
            backup = nullptr;
        }

        
    }

    else if (anteante == NULL) { // nao ha filhos a esquerda
        if (eu == root) {
            root = root->right;
        }

        else {
            pai->right = eu->right;
        }
    }



    else if (eu->left == goal) { // o que vamos substituir eh o primeiro a esquerda
        goal->right = eu->right;

        if (eu == root) {
            backup = goal;
            delete eu;
            return backup;
        }

        else {
            if (pai->right == eu) {
                pai->right = goal;
            }
            else if (pai->left == eu) {
                pai->left = goal;
            }
            else {
                cout << "algo deu errado aqui mana\n";
            }
        }
    }

    else {

        while (lastfilho->left != NULL) { // what am i doing here again
            lastfilho = lastfilho->left;
        }

        lastfilho->left = eu->left;
        goal->right = eu->right;

        anteante->right = NULL;

        if (eu == root) { // to removendo a raiz!
            backup = goal;
            delete eu;
            return backup;
        }
        else {
            if (pai->right == eu) {
                pai->right = goal;
            }
            else if (pai->left == eu) {
                pai->left = goal;
            }
        }
    }


    delete eu;

    return pai;

    // eu checo se eh a raiz; se nao, nao existe na arvore


}


void print_tree (Node * root, string s = "\t↳", int a = 0) {

    if (a == 0) {
        cout << "\t>>> imprimindo árvore...\n\n";

    }

    //cout << s << " " << raiz->value;
    cout << "\n" << s << " ( " << root->data.first << ", " << root->data.second << " )";

    if (a == 1) {
        cout << " ( L )";
    }

    else if (a == 2) {
        cout << " ( R )";
    }

    else {
        cout << " - ( ROOT )";
    }

    cout << "       / key = " << root->key;
    
    cout << "\n";

    if (root->right != NULL) {
        print_tree(root->right, '\t' + s, 2);
    }

    if (root->left != NULL) {
        print_tree(root->left, '\t' + s, 1);
    }


}


#endif