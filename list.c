//
// Created by zula nyamtur on 3/16/21.
//

#include "list.h"
#include "node.h"
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
node *HEAD = NULL;

bool addNode(node* node){
    struct node *pointer = HEAD;
    if(!HEAD){
        HEAD = node;
    }
    else{
        while(pointer -> next){
            pointer = pointer -> next;
        }
        pointer -> next = node;
    }
    return true;
}

void printList(void){
    node *pointer = HEAD;
    while(pointer->next -> next){
        printf("%d -> ", pointer -> data);
        pointer = pointer -> next;
    }
    printf("%d -> ", pointer -> data);
    printf("%d", pointer -> next -> data);
}

int countNode(){
    int result = 0;
    node *pointer = HEAD;
    //traverse through list
    while(pointer){
        result += 1;
        pointer = pointer -> next;
    }
    return result;

}

node* findNode(int value){
    node *pointer = HEAD;
    int location = 0;
    //traverse through list
    while(pointer){
        if(pointer -> data == value){
            printf("\n");
            printf("The node is found at location %d", location);
            return pointer;
        }
        location += 1;
        pointer = pointer -> next;
    }
    return pointer;
}

bool deleteNode (node* node){
    if(!HEAD){
        return false;
    }
    else if(HEAD -> next == NULL){
        if(HEAD -> data == node -> data){
            free(HEAD);
        }
    }
    struct node *pre = HEAD;
    struct node *current = HEAD -> next;
    if(HEAD -> data == node -> data && HEAD -> next != NULL){
        HEAD = HEAD -> next;
        free(pre);
    }
    if(HEAD -> next != NULL && HEAD -> data != node -> data) {
        while (current) {
            if (current->data == node->data) {
                pre->next = current->next;
                free(current);
            }
            pre = pre->next;
            current = current->next;
        }
    }
}

void deleteLargest() {
    int large;
    int counter = 0;
    node *pointer = HEAD;
    while (pointer) {
        if (large < pointer->data) {
            large = pointer->data;
        }
        pointer = pointer->next;
    }
    printf("\n");
    printf("The largest number in the linked list is: %d", large);
    node *ptr = HEAD;

    while (ptr) {

        if (ptr->data == large) {
            counter += 1;
        }
        ptr = ptr->next;
    }
    printf("\n");
    printf("The number of times that the largest number %d showed up is: %d times", large, counter);

    int traversal = 0;
    while (traversal < counter) {
        node *maxlocation = findNode(large);
        deleteNode(maxlocation);
        traversal += 1;
    }
    printf("\n");
    printf("This is the list without the largest values: ");
}

void sort() {
    int swap;

    while(swap){
        swap = 0;
        node *pointer = HEAD;
        node *ahead = pointer -> next;
        while (ahead -> next) {
            if (pointer->data > ahead->data) {
                int temp = pointer->data;
                pointer->data = ahead -> data;
                ahead -> data = temp;
                swap = 1;
            }
            pointer = pointer->next;
            ahead = ahead -> next;
        }
    }
}


