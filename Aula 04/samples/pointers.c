#include <stdio.h>

int main(){

  int a = 0;
  int *p = &a;
  (*p)++;
  printf("&a = %d || *p = %d || p = %d", &a, *p, p);

  return 0;
}