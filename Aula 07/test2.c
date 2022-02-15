#include <stdio.h>

int soma(int n1, int n2){

  int static first = 1;

  if (n1 < n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
  }

  if(n1 == n2+1) return n1;

  if( first == 1 ){
    return soma(n1-1, n2);
    first = 0;
  }else{
    return n1 + soma(n1-1, n2);
  }

}

// soma (2, 40)

// n1 == 40 e n2 == 2

// 40 + soma(39, 2)
// 40 + 39 + soma(38, 2)