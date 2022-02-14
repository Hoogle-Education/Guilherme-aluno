# Introdução a ponteiros e endereços

Uma variável do tipo ponteiro, aponta para o endereço de memória de outra variável.

✔️ funciona:
```c
  int a = 0;
  int *p = &a;
  (*p)++;
  printf("a = %d || p = %d", a, *p);
```

output:
```
a = 1 || p = 1
```

## Criando ponteiros

Armazena um endereço. Respeitando o tipo da variável que quero guardar.

```c
  int *p;
```

```c
  int a;
  int *p = &a;
  scanf(" %d", p); 
  // scanf(" %d", &a);
```
