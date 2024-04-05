#include <stdio.h>
#include <stdlib.h>

typedef struct node {

    int value;
    struct node * lef;
    struct node * rig;

} node;

typedef struct tree {

    node * root;

} tree;


tree * create_tree() {

    tree * t = malloc(sizeof(tree));

    if(t == NULL) {

        // In case of lack of memory, the program will shut down
        exit(1);

    }

    t->root = NULL;

    return t;

}

void insert_node(tree * t, int x){

    if(t->root == NULL){

        node * root = t->root;

        root->value = x;
        root->lef = NULL;
        root->rig = NULL;

    } else {

    }

}