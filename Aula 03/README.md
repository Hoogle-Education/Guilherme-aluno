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