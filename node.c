//
// Created by zula nyamtur on 3/16/21.
//

#include "node.h"
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

node* createNode(int data){
    node *temp = NULL; //declare a node
    temp = (struct node*)malloc(sizeof(node));
    temp -> data = data;
    temp -> next = NULL; //make next point to NULL
    return temp; //return the new node

}
