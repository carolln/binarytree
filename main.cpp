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

    //print_tree(root);

    insert(root, createKey(trestres), trestres);

    //print_tree(root);


    insert(root, createKey(doisdois), doisdois);

    //print_tree(root);

    insert(root, createKey(doistres), doistres);
    insert(root, createKey(quatroquatro), quatroquatro);
    insert(root, createKey(dezdez), dezdez);
    insert(root, createKey(setesete), setesete);
    insert(root, createKey(trezetreze), trezetreze);

    print_tree(root);

    deleteNode(root, createKey(trestres));

    print_tree(root);

    deleteNode(root, createKey(raiz));

    print_tree(root);

    //deleteNode(root, createKey(trestres));


    //print_tree(root);

}