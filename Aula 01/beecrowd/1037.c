#include <stdio.h> 

int main(){
  // criando variáveis
  float  n;

  // lendo variável
  scanf(" %f", & n );
 
  // checar os intervalos
  if ( n < 0 || n > 100 ) 
    puts("Fora de intervalo");
  else if ( n <= 25 ) 
    puts("Intervalo [0,25]");
  else if ( n <= 50 )
    puts("Intervalo (25,50]");
  else if ( n <= 75)
    puts("Intervalo (50,75]");
  else 
    puts("Intervalo (75,100]");

  return 0;
}