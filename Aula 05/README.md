# Structs e typedefs

São como variáveis personalizadas para lidar com volume de dados.

```c
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

int main(){

  aluno joao;

  joao.nome = "joao da silva";
  joao.idade = 17;
  joao.ra = 109876;
  joao.telefone = 21986157978;

  coordinate A;
  A.x = 2;
}
```

> Durante a struct definimos propriedades para aquele modelo novo de variável, e ao final associamos isto a um nome de chamada.

# File manipulation

* [olhar este link antes da prova](https://www.programiz.com/c-programming/c-file-input-output)

* [outro link para fscanf e fprintf](https://www.javatpoint.com/fprintf-fscanf-in-c)

```c
#include <stdio.h>
#include <stdlib.h>

int main(){

  // para começar
  FILE *txtFile;
  const char* filename; // ou filepath

  txtFile = fopen()
  // continua no arquivo samples.c

  return 0;
}

```

## Abrindo arquivos

### `fopen`

Use a `fopen` para abrir ou criar arquivos.

```c
  file = fopen(filename, <acess_method>)
```

**acess methods:** 

`w` - sobreescreve os dados do arquivo

`r` - le os dados arquivo

`a` - escreve no final

## interagindo com arquivos

### 1. `fscanf`

```c
  fscanf( file, " %d $d" , &a, &b);
```

de modo geral:
```
  fscanf(file, <arguments model>, <argument1>, ...);
```

### 2. `fprintf`

```c
  fprintf( file, " %d $d" , a, b);
```

de modo geral:
```
  fprintf(file, <arguments model>, <argument1>, ...);
```

## fechando arquivos

não esqueça de fechar.

```c
  fclose(file);
```