#include <stdio.h>
#define MAXCHAR 200

void concatena(const char* message1, const char* message2){
  printf("%s %s\n", message1, message2);
}

int somaCinco(int x){
  return x + 5;
}

void swap(int *x, int *y){
  int tmp = *x;
  *x = *y;
  *y = tmp;
  printf("a = %d\nb = %d\n", *x, *y);  
}

int main(){

  char str[] = "Hello";
  char* str3 = "Hello";


  concatena("imprime isso", "junto");
  int a = 0;
  a = somaCinco(a);
  int b = somaCinco(25);

  printf("a = %d\nb = %d\n", a, b);

  // a = 5 e b = 30
  printf("-----\n");

  swap(&a, &b);

  printf("-----\n");
  printf("a = %d\nb = %d\n", a, b);  
  
  return 0;
}  