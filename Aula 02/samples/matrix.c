#include <stdio.h>

#define MAXN 100000
#define LINES 3
#define COLUMNS 3

int main(){

  int m[LINES][COLUMNS];
  int i, j;

  for(i=0; i<LINES; i++){
    for(j=0; j<COLUMNS; j++){
      scanf(" %d", &m[i][j]);
    }
  }

  printf("------\n");

  for(i=0; i<LINES; i++){
    for(j=0; j<COLUMNS; j++){
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }

  return 0;
}