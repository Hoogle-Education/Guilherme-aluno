#include <stdio.h>

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

// f(x) = x+2

int main(){

    int v[3];
    int sorted[3];
    int i;

    for (i = 0; i < 3; i++){
      scanf(" %d", &v[i]);
      sorted[i] = v[i];
    }
    
    if ( sorted[0] > sorted[1] ){
      swap(&sorted[0], &sorted[1]);
    }

    if( sorted[1] > sorted[2]){
      swap(&sorted[1], &sorted[2]);
    }

    if ( sorted[0] > sorted[1] ){
      swap(&sorted[0], &sorted[1]);
    }

    printf("%d\n%d\n%d\n\n", sorted[0], sorted[1], sorted[2]);
    printf("%d\n%d\n%d\n", v[0], v[1], v[2]);

    return 0;
}