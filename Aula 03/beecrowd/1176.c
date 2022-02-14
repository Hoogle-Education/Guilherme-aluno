#include <stdio.h>
#define MAXN 60
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

    for(i=0; i<n; i++){
      int tmp;

      

    }

    printf("\n");
    return 0;
}
