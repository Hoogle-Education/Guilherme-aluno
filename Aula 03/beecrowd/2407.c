#include <stdio.h>
#define MAXN 1010

int main() {

    int n, i, j, listPos=1;
    int soma = 0;
    int mat[MAXN][MAXN], lista[MAXN*MAXN];

    scanf(" %d", &n);

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf(" %ld", &mat[i][j]);
            lista[listPos] = mat[i][j];
            listPos++;
        }
    }

    // conferindo se o valores estão entre
    // 1 e n^2 e todos existem na matriz
    for(i=1; i <= n*n; i++){
        int find = 0;
        
        for(j=1; j<=n*n; j++){
            if(lista[j] == k){
                find = 1;
                break;
            }
        }

        if(find == 0){
            printf("0\n");
            return 0;
        }
    }

    // registrando soma
    for(j=0; j<n; j++){
        soma += mat[0][j];   
    }

    // comparando linha por linha
    for(i=1; i<n; i++){
        int somaLinha = 0;

        for(j=0; j<n; j++){
            somaLinha += mat[i][j];
        }

        if(somaLinha != soma){
            printf("0\n");
            return 0;
        }
    }

    // comparando coluna por coluna
    for(i=0; i<n; i++){
        int somaColuna = 0;
        for(j=0; j<n; j++){
            somaColuna += mat[j][i];
        }
        if(somaColuna != soma){
            printf("0\n");
            return 0;
        }
    }

    // comparando a diagonal principal 
    int somaDiagonal = 0;
    
    for(i=0; i < n; i++){
        somaDiagonal += mat[i][i];
    }
    
    if(somaDiagonal != soma){
        printf("0\n");
        return 0;
    }
    // comparando a diagonal secundaria
    somaDiagonal = 0;
    
    for(i = 0; i < n; i++){
        somaDiagonal += mat[i][n-1-i];
    }
    
    if(somaDiagonal != soma){
        printf("0\n");
        return 0;
    }

    printf("%ld\n", soma);
    return 0;
}