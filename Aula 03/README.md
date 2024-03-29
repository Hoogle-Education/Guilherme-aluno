# For - keywords

## 1 - continue

Pula para a próxima iteração do meu loop

```c
  int i;
  for(i=0; i<10; i++){
   
    if(i == 4) {
      continue;
    }

    printf("%d\n", i);
  }
```
output:
```
0
1
2
3
5
6
7
8
9
```

## 2 - break

Encerra o loop no ponto em que foi mencionado.


```c
  int i;
  for(i=0; i<10; i++){
   
    if(i == 4) {
      break;
    }

    printf("%d\n", i);
  }
```
output:
```
0
1
2
3
```

# String

Tipo string é basicamente um tipo palavra. Então, bem como toda palavra, uma palavra qualquer é um vetor de caracteres.

```c
  char palavra[200];

  scanf(" %s", palavra);
```

⚠️ **cuidado:** nesse caso não usamos o `&`

## Biblioteca `string.h`

Para melhorar nossa manipulação de strings, usaremos várias funções pré-implementadas da `string.h`.

### Função `strlen()`

```c
#include <string.h>

int main(){

  char palavra[300];
  scanf(" %s", palavra);
  printf("%d\n", strlen(palavra));

  return 0;
}
```

### Função `strcpy()`

```c
  strcpy(a, b);
```

copia o valor da string para a string b.

# Função

Sequência de passos bem definidas, que podem ser empacotados para permitir o reuso ao longo do programa. Às vezes, vale a pena usar funções para limpeza de código.

```
  <tipo do retorno> minha_funcao ( <tipo> meu_parametro1, <tipo> meu_parametro2, ... ){

  }
```

```c
double func(double x){
  return x + 2.0;
}
```

```c
int sum(int x, int y){
  return x+y;
}
```

```c
double area(int radius){
  return (3.14159267)*radius*radius;
}
```

## Retornos mais comuns

os tipos mais conhecidos dentre as variáveis. Ex.: `int`, `double`, `float`, `char`, `long`.

Além desses existe o tipo `void`. Este tipo indica que não há retorno, e que apenas executaremos uma sequência de passos lá dentro.


# Funções Recursivas

Uma função é dita recursiva quando chama a si mesma durante sua execução.

Bons exemplos de funções recursivas:

fatorial: n! = n * (n-1)!

n! = n * n-1 * (n-2)!

fibonacci: fib(n) = fib(n-1) + fib(n-2)

```c
int fatorial(int n){

  if(n==1) return 1;

  return n * fatorial(n-1);
}
```

exemplos:
```
// ordenação
 3 5
 3 4 5
 2 3 4 5
 1  2 3 4 5

// ordenação
 7 3 9 12 11 2 17
 3 7
 3 7 9
 3 7 9 12
 3 7 9 11 12
 2 3 7 9 11 12
 2 3 7 9 11 12 17

// fibonacci linear
 1 1
 1 1 2
 1 1 2 3

// fibonacci recursivo
 fib(4)
 fib(3) + fib(2)
 fib(2) + fib(1) + fib(1) + fib(0)
 fib(1) + fib(0) + 1 + 1 + 0
 1 + 0 + 1 + 1 + 0 = 3
```

**Toda recursão possui 2 elementos essenciais**

## 1. caso base

é o que faz a recursão parar as chamadas em algum momento.

## 2. operação recursiva

é quem faz as chamadas para casos menores da recursão.