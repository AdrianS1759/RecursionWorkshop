#ifndef Tree_h
#define Tree_h

#include <iostream>

struct Tree {
    int data;
    Tree* left;
    Tree* right;

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
        root = new Tree(value);
    } else {
        //Go Left
        if( root->data < value ) {
            root->right = insert(root->right, value);
        } else {
            //Go Right
            root->left = insert(root->left, value);
        }
    }
    return root;

}

bool contains(Tree* root, int value) {
    //Code this part
    if(root == NULL) {
        return false;
    }
    if( root->data == value ) {
        return true;
    } else {
        //Go Left
        if( root->data < value ) {
            return contains(root->right, value);
        } else {
            //Go Right
            return contains(root->left, value);
        }
    }
}

#endif