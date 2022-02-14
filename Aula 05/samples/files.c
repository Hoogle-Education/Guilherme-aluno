#include <stdio.h>
#include <stdlib.h>

int main(){

  // para começar
  FILE *txtFile;
  const char* filename; // ou filepath

  txtFile = fopen("teste.txt", "w");

  
  
  fclose(txtFile);
  return 0;
}
