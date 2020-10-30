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
    //Code Goes Here
    return root;
}

bool contains(Tree* root, int value) {
    //Code Goes Here
    return false;
}

#endif