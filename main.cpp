#include <bits/stdc++.h>

#include "trabalho.hpp"
using namespace std;

int main () {


    OrderedPair raiz;

    raiz.first = 4;
    raiz.second = 6;

    OrderedPair trestres;
    OrderedPair doisdois;
    OrderedPair doistres;
    OrderedPair tresdois;
    OrderedPair quatroquatro;
    OrderedPair seisseis;
    OrderedPair setesete;
    OrderedPair dezdez;
    OrderedPair trezetreze;

    trestres.first = 3;
    trestres.second = 3;

    doisdois.first = 2;
    doisdois.second = 2;

    doistres.first = 2;
    doistres.second = 3;

    tresdois.first = 3;
    tresdois.second = 2;

    quatroquatro.first = 4;
    quatroquatro.second = 4;

    seisseis.first = 6;
    seisseis.second = 6;

    setesete.first = 7;
    setesete.second = 7;

    dezdez.first = 10;
    dezdez.second = 10;

    trezetreze.first = 13;
    trezetreze.second = 13;

    char s;

    cout << "Bem vindo ao trabalho de árvores binárias de carol! aperte qualquer letra + enter para prosseguir" << "\n";

    cin >> s;

    cout << "ótimo! vamos começar a inserir valores na nossa árvore\n\n";


    cout << ">>> TESTANDO CRIAÇÃO DE CHAVES E INSERÇÃO...\n\n\n";

    cout << "\t>>> inserindo raiz\n";
    cout << "\t>>> par ( " << raiz.first << ", " << raiz.second << " ) inserido!";
    cout << " a chave criada para ele foi " << createKey(raiz) << "\n";
    Node * root = createNode(createKey(raiz), raiz);
    print_tree(root);
    cout << "\n\n";
    cout << "aperte qualquer letra + enter para prosseguir\n";
    cin >> s;


    insert(root, createKey(trestres), trestres);
    cout << "\n\n\t>>> par ( " << trestres.first << ", " << trestres.second << " ) inserido!";
    cout << " a chave criada para ele foi " << createKey(trestres) << "\n";
    print_tree(root);
    cout << "\n\n";
    cout << "aperte qualquer letra + enter para prosseguir\n";
    cin >> s;

    insert(root, createKey(doisdois), doisdois);
    cout << "\n\n\t>>> par ( " << doisdois.first << ", " << doisdois.second << " ) inserido!";
    cout << " a chave criada para ele foi " << createKey(doisdois) << "\n";
    print_tree(root);
    cout << "\n\n";
    cout << "aperte qualquer letra + enter para prosseguir\n";
    cin >> s;

    insert(root, createKey(doistres), doistres);
    cout << "\n\n\t>>> par ( " << doistres.first << ", " << doistres.second << " ) inserido!";
    cout << " a chave criada para ele foi " << createKey(doistres) << "\n";
    print_tree(root);
    cout << "\n\n";
    cout << "aperte qualquer letra + enter para prosseguir\n";
    cin >> s;

    insert(root, createKey(tresdois), tresdois);
    cout << "\n\n\t>>> par ( " << tresdois.first << ", " << tresdois.second << " ) inserido!";
    cout << " a chave criada para ele foi " << createKey(tresdois) << "\n";
    cout << "(note que a chave para esse par é diferente da do par anterior. ou seja, estamos usando a função de cantor para relacionar pares ordenados com números inteiros - as nossas chaves)\n\n";
    print_tree(root);
    cout << "\n\n";
    cout << "aperte qualquer letra + enter para prosseguir\n";
    cin >> s;

    insert(root, createKey(quatroquatro), quatroquatro);
    cout << "\n\n\t>>> par ( " << quatroquatro.first << ", " << quatroquatro.second << " ) inserido!";
    cout << " a chave criada para ele foi " << createKey(quatroquatro) << "\n";
    print_tree(root);
    cout << "\n\n";
    cout << "aperte qualquer letra + enter para prosseguir\n";
    cin >> s;

    insert(root, createKey(dezdez), dezdez);
    cout << "\n\n\t>>> par ( " << dezdez.first << ", " << dezdez.second << " ) inserido!";
    cout << " a chave criada para ele foi " << createKey(dezdez) << "\n";
    print_tree(root);
    cout << "\n\n";
    cout << "aperte qualquer letra + enter para prosseguir\n";
    cin >> s;

    insert(root, createKey(setesete), setesete);
    cout << "\n\n\t>>> par ( " << setesete.first << ", " << setesete.second << " ) inserido!";
    cout << " a chave criada para ele foi " << createKey(setesete) << "\n";
    print_tree(root);
    cout << "\n\n";
    cout << "aperte qualquer letra + enter para prosseguir\n";
    cin >> s;

    insert(root, createKey(seisseis), seisseis);
    cout << "\n\n\t>>> par ( " << seisseis.first << ", " << seisseis.second << " ) inserido!";
    cout << " a chave criada para ele foi " << createKey(seisseis) << "\n";
    print_tree(root);
    cout << "\n\n";
    cout << "aperte qualquer letra + enter para prosseguir\n";
    cin >> s;

    insert(root, createKey(trezetreze), trezetreze);
    cout << "\n\n\t>>> par ( " << trezetreze.first << ", " << trezetreze.second << " ) inserido!";
    cout << " a chave criada para ele foi " << createKey(trezetreze) << "\n";
    print_tree(root);
    cout << "\n\n";
    cout << "aperte qualquer letra + enter para prosseguir\n";
    cin >> s;

    print_tree(root);
    cout << "\n\n\n";

    cout << "todos os valores foram inseridos com sucesso! aperte qualquer letra + enter para prosseguir para a busca\n";
    cin >> s;

    cout << ">>> TESTANDO BUSCA\n";

    cout << "\na busca ocorre a partir de chaves passadas. para checarmos se um par está na árvore, usamos a fução createKey sobre o par durante a sua chamada\n";
    cout << "caso a busca não encontre nada, como ela precisa retornar uma referência para um par ordenado, ela retorna uma referência ao nó raiz\n\n";

    OrderedPair teste;
    OrderedPair setedois;
    setedois.first = 7;
    setedois.second = 2;

    cout << "\t>>>buscando um par que está na árvore: ( 2 , 2 ) por sua chave " << createKey(doisdois) << "\n";

    teste.first = search(root, createKey(doisdois))->first;
    teste.second = search(root, createKey(doisdois))->second;

    cout << "\npar encontrado: ( " << teste.first << " , " << teste.second << " )\n\n";

    cout << "aperte qualquer letra + enter para prosseguir\n";
    cin >> s;

    cout << "\n\n\t>>>buscando um par que está na árvore: ( 7 , 7 ) por sua chave " << createKey(setesete) << "\n";

    teste.first = search(root, createKey(setesete))->first;
    teste.second = search(root, createKey(setesete))->second;
    

    cout << "\npar encontrado: ( " << teste.first << " , " << teste.second << " )\n\n";

    cout << "aperte qualquer letra + enter para prosseguir\n";
    cin >> s;

    cout << "\n\n\t>>>buscando um par que não está na árvore: ( 7 , 2 ) por sua chave " << createKey(setedois) << "\n\n";

    teste.first = search(root, createKey(setedois))->first;
    teste.second = search(root, createKey(setedois))->second;


    cout << "\npar simbólico retornado: ( " << teste.first << " , " << teste.second << " ) (valores não encontrados)\n\n\n";






    cout << "buscas feitas com sucesso! aperte qualquer letra + enter para prosseguir para a remoção\n";
    cin >> s;

    cout << ">>> TESTANDO REMOÇÃO...\n\n";

    cout << "árvore antes de qualquer remoção:\n";
    print_tree(root);

    cout << "\n\naperte qualquer letra + enter para continuar\n";
    cin >> s;

    cout << "\t>>> removendo uma folha: ( 13, 13 )\n";

    deleteNode(root, createKey(trezetreze)); // removendo folha

    print_tree(root);
    cout << "\n\n";

    cout << "\n\naperte qualquer letra + enter para continuar\n";
    cin >> s;

    cout << "\t>>> removendo um node com um filho à esquerda sem filhos à direita: ( 10, 10 )\n";

    deleteNode(root, createKey(dezdez));

    print_tree(root);
    cout << "\n\n";

    cout << "\n\naperte qualquer letra + enter para continuar\n";
    cin >> s;

    cout << "\t>>> removendo um node com um antecessor (folha mais à direita de um filho à esquerda): ( 3, 3 )\n";

    deleteNode(root, createKey(trestres)); // removendo um nodo com antecessor

    print_tree(root);
    cout << "\n\n";

    cout << "\n\naperte qualquer letra + enter para continuar\n";
    cin >> s;



    cout << "\t>>> removendo raiz: ( 4, 6 )\n";

    deleteNode(root, createKey(raiz)); // removendo raiz

    print_tree(root);
    cout << "\n\n";

    cout << "\n\naperte qualquer letra + enter para continuar\n";
    cin >> s;

    cout << "TODOS OS TESTES FORAM REALIZADOS COM SUCESSO!!!! YIPPIEEE!!!!!\n";


    //deleteNode(root, createKey(trestres));


    //print_tree(root);

    return 0;

}