#include <stdio.h>
#include <stdlib.h>

int main(){

  char *str = "hello";

  int tam = 3, newtam = 5;
  int *ptr = (int*)malloc(tam*sizeof(int));

  ptr[0] = 1;
  ptr[1] = 2;
  ptr[2] = 3;

  int a = (int)2.2;
  char a = (char)67;

  ptr = (int*)realloc(ptr, newtam * sizeof(ptr));

  ptr[3] = 4;
  ptr[4] = 5;

  int i;
  for(i=0; i<newtam; i++){
    printf("%d ", ptr[i]);
  }

  printf("%s\n", str);

  return 0;
}