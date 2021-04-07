//
// Created by zula nyamtur on 3/16/21.
//
#include <stdbool.h>

#ifndef PS3_LIST_H
#define PS3_LIST_H
typedef struct node node;
bool addNode(node* node); //Add a node to the list
void printList(void); //Print the values in the list
int countNode();
node* findNode(int value); //Find a node in the list
bool deleteNode (node* node); //Delete a node in the list
void deleteLargest();
void sort();

#endif //PS3_LIST_H



