# Aula 02

## Controlando casas de precisão

Basicamente usar `"%.xf"`, e substituir x pelo número de casas de precisão desejadas.

exemplo, saída com duas casas decimais:
```c
  printf("%.2f\n", 2.3564);
```

## Matrizes

> é um vetor de vetores.

```
v = {1, 2, 3, 4, 5}

m = {
      {11, 12, 13, 14, 15},
      {21, 22, 23, 24, 25},
      {31, 32, 33, 34, 35},
      {41, 42, 43, 44, 45},
      {51, 52, 53, 54, 55}     
    }
```

agora no código:

### criação de uma matriz:

```c
  int n;
  int m[n][n];
```

### acessando uma matriz

```
  m[row][column]
```

Na primeira posição indicamos a linha e na segunda a coluna. O uso do `for` é indispensável para manipulação de matrizes.

imprindo todos os elementos de uma matriz de tamanho `n x n`:
```c
int i;

for(int i=0; i<n; i++){
  for(int j=0; j<n; j++){
    printf("%d \n", m[i][j]);
  }

  printf("\n");
}
```