#include <stdio.h>
#include "node.h"
#include "list.h"

 void allFunctions(){
     printList();
     deleteLargest();
     printf("\n");
     printList();
     int newLength = countNode();
     printf("\n");
     printf("There are %d number of nodes.", newLength);
     printf("\n");
     printf("This is the sorted list: ");
     sort();
     printf("\n");
     printList();
}

 int main(){
     int arr[] = {89, 39, 18, 96, 71, 25, 2, 55, 60, -8, 9, 42, 69, 96, 24};
     int length = sizeof(arr)/sizeof(int);
     int mover = 0;

     while(mover < length){
         node *HEAD = createNode(arr[mover]);
         addNode(HEAD);
         mover +=1;
     }

     allFunctions();

}






















