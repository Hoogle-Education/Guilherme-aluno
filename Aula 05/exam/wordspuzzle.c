#include <stdio.h>
#define MAXN 1000
#define MAXM 1000

int find(char mat[MAXN][MAXM], const char* str){

  for(int i=0; i<n; i++){
    find(mat[i], str, n)
  }

  

}

int main(){
  char mat[MAXN][MAXM];
  const char* str;
  int i, j, c, l;
  
  printf("Inserir numero de linhas:\n");
  scanf("%d", &l);
  printf("Inserir numero de colunas:\n");
  scanf("%d", &c);
  
  printf("digite a matriz:\n");
  for(i = 0; i < l; i++){
      for(j = 0; j < c; j++ ){
          scanf("%c", &mat[i][j]);
      }
  }
  
  printf("Digite uma string:\n");
  scanf(" %s", str);
  
  find(mat, str);
  
  return 0;
}