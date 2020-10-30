#include <iostream>
#include "Tree.h"

using namespace std;

int main() {
    Tree* tree = NULL;

    tree = insert(tree, 10);
    tree = insert(tree, 5);
    tree = insert(tree, 11);
    tree = insert(tree, 16);
    tree = insert(tree, 10);
    tree = insert(tree, 1);
    tree = insert(tree, 7);
    tree = insert(tree, 12);

    int key;

    cout << "Please Enter a Key: ";

    cin >> key;

    cout << "Searching for Key #" << key << " ..." << endl;

    if( contains(tree, key)) {
        cout << "Found" << endl;
    } else {
        cout << "Key Not Found" << endl;
    }

}
