#include <stdio.h>
#define MAXN 50
int main()
{
    int fib[MAXN];
    int n, i;
    scanf(" %d", &n);
    // Escreve a serie de Fibonacci 
    fib[0] = 0;
    fib[1] = 1;

    for(i=2; i < n; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    // Mostra a serie para o usuario
    int L = 0;

    for(i = 0; i < n; i++){
        if(L == 0){
            printf("%d", fib[i]);
            L = 1;
        }else{
            printf(" %d", fib[i]);        
        }
    }

    printf("\n");

    return 0;
}
