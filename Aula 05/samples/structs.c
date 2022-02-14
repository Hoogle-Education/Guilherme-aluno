#include <stdio.h>
#include <string.h>

typedef struct aluno {
  char nome[200];
  int idade;
  int ra;
  long telefone;
} aluno ;

typedef struct coordinate{
  int x;
  int y;
} coordinate;

typedef struct complex{
  int real;
  int imaginary;
} complex;

int main(){
  aluno joao;

  strcpy(joao.nome, "joao da silva");
  joao.idade = 17;
  joao.ra = 109876;
  joao.telefone = 986157978;

  int v[] = {1, 2, 3};

  coordinate A;
  A.x = 2;

  complex Z;
  Z.real = 2;
  Z.imaginary = 3;

  printf("Z = %d + %di\n", Z.real, Z.imaginary);
}