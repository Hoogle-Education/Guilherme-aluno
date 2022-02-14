#include <stdio.h>

int fatorial(int n){
  if(n == 1) return 1; // caso base
  else return n * fatorial(n-1); // recursão
}

int fibonacci(int n){
  if(n == 0) return 0; // caso base
  else if(n == 1) return 1; // caso base
  else return fibonacci(n-1) + fibonacci(n-2); // recursão
}

int main(){

  printf("\n5! = %d\n", fatorial(5));

  return 0;
}