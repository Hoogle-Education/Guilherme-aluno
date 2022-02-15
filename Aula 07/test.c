#include <stdio.h>

typedef struct node{
  int value;
  int *next;
} node;

node append_list(node list, int value){
  node 

}

int main(){

  node head;
  node n1, n2, n3;

  head.value = 1;
  head->next = &n1;

  n1.value = 3;
  n1->next = &n2;

  n2.value = 5;
  n2->next = &n3;

  n3.value = 9;
  n3->next = NULL;

}