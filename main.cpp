#include <bits/stdc++.h>

#include "trabalho.hpp"
using namespace std;

int main () {


    OrderedPair par;

    par.first = 4;
    par.second = 6;

    Node * root = createNode(createKey(par), par);

    OrderedPair outro;

    outro.first = 10;
    outro.second = 10;

    insert(root, createKey(outro), outro);

    OrderedPair outro2;

    outro2.first = 4;
    outro2.second = 4;

    insert(root, createKey(outro2), outro2);

    OrderedPair mais;

    mais.first = 2;
    mais.second = 3;

    insert(root, createKey(mais), mais);

    print_tree(root);

}