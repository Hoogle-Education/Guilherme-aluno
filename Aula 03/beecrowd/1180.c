#include <stdio.h>
#define MAXN 1010

int main (){
  int i, N, min;
  int vet[MAXN]; 
  
  // Receber o tamanho do vetor
  scanf(" %d", &N);

  // Receber os N digitos
  for(i = 0; i < N; i++){
    scanf(" %d", &vet[i]);
  }
  
  // Encontrar o menor valor de vet[N]
  min = 0;
  for(i = 1; i < N; i++){
    if(vet[i] < vet[min]){
      min = i;
    }
  }
  
  printf("Menor valor: %d\n", vet[min]);
  printf("Posicao: %d\n", min);

  return 0;
}