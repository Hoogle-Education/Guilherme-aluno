# Alocação dinâmica

relembrando:
```c
  char str1[2000];
  char *str2 = "hello";
```

> por que não fazer isto pra um vetor númerico?

```c
int *ptr;
```

## `malloc()` - memory allocation

`tam` é o tamanho que se deseja alocar no vetor.

usando direto:
```c
int *ptr = (int*)malloc(tam*sizeof(int));

int *ptr2;
ptr2 = (int*)malloc(tam*sizeof(int));
```

## `calloc()` - contiguos allocation

indentica a malloc, porém todos os elementos começam zerados.

```c
int *ptr = calloc(tam, sizeof(int));
```

## `realloc()` - realloc allocation

```c
int tam=5, newtam=10;
double *ptr = malloc(tam * sizeof(double));
ptr = (double*)realloc(newtam * sizeof(double));
```

## `free` - libera memória

desaloca a memória reservada.

```c
free(ptr);
```

# Casting

Avisa um tipo de uma variável que irá entrar.

```c
int a = (int)3.141552;
// a = 3
char c = (char)48;
// c = '0'
```
