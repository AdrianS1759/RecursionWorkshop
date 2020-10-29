#ifndef Tree_h
#define Tree_h

#include <iostream>

struct Tree {
    int data;
    Node* left;
    Node* right;

    Tree() {
        data = 0;
        left = NULL;
        right = NULL;
    }

    Tree(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

Tree* insert(Tree* root, int value) {

    if( root == NULL ) {
        root = new Tree(vakye);
    } else {
        //Go Left
        if( root->value < value ) {
            root->right = insert(root->right, value);
        } else {
            //Go Right
            root->left = insert(root->left, value);
        }
    }

    return root;

}

bool contains(Tree* root, int value) {

    if(root == NULL) {
        return false;
    }

    if( root->value == value ) {
        return true;
    } else {
        //Go Left
        if( root->value < value ) {
            return contains(root->right, value);
        } else {
            //Go Right
            return contains(root->left, value);
        }
    }
}

#endif