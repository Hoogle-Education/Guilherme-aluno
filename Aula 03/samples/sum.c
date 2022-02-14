#include <stdio.h>

int soma(int n){
    if(n==1) {
       return 1; 
    }

    return n + soma(n - 1);
}

int main(){

    printf("%d", soma(5) );

    return 0;
}