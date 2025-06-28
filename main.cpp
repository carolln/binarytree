#include <bits/stdc++.h>

#include "trabalho.hpp"
using namespace std;

int main () {


    OrderedPair raiz;

    raiz.first = 4;
    raiz.second = 6;

    Node * root = createNode(createKey(raiz), raiz);

    OrderedPair trestres;
    OrderedPair doisdois;
    OrderedPair doistres;
    OrderedPair quatroquatro;
    OrderedPair setesete;
    OrderedPair dezdez;
    OrderedPair trezetreze;

    trestres.first = 3;
    trestres.second = 3;

    doisdois.first = 2;
    doisdois.second = 2;

    doistres.first = 2;
    doistres.second = 3;

    quatroquatro.first = 4;
    quatroquatro.second = 4;

    setesete.first = 7;
    setesete.second = 7;

    dezdez.first = 10;
    dezdez.second = 10;

    trezetreze.first = 13;
    trezetreze.second = 13;


    cout << ">>> testando a inserção...\n";

    insert(root, createKey(trestres), trestres);
    insert(root, createKey(doisdois), doisdois);
    insert(root, createKey(doistres), doistres);
    insert(root, createKey(quatroquatro), quatroquatro);
    insert(root, createKey(dezdez), dezdez);
    insert(root, createKey(setesete), setesete);
    insert(root, createKey(trezetreze), trezetreze);

    print_tree(root);
    cout << "\n\n";

    cout << ">>> testando remoção...\n\n";

    cout << "\t>>> removendo uma folha\n";

    deleteNode(root, createKey(trezetreze)); // removendo folha

    print_tree(root);
    cout << "\n\n";

    cout << "\t>>> removendo um node com apenas um filho à esquerda\n";

    deleteNode(root, createKey(dezdez));

    print_tree(root);
    cout << "\n\n";

    cout << "\t>>> removendo um node com um antecessor (folha mais à direita de um filho à esquerda)\n";

    deleteNode(root, createKey(trestres)); // removendo um nodo com antecessor

    print_tree(root);
    cout << "\n\n";



    cout << "\t>>> removendo raiz\n";

    deleteNode(root, createKey(raiz)); // removendo raiz

    print_tree(root);
    cout << "\n\n";


    //deleteNode(root, createKey(trestres));


    //print_tree(root);

}