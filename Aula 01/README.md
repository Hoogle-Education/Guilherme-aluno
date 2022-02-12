# Revisão das sintaxes em C

## 1.Estrutura condicional (`if-else if-else`)

`if` significa "Se"

sintaxe básica:
```c
if( /*condição*/ ){
  // faça algo 1
}else{
  // faça algo 2
}
```

sintaxe completa:
```c
if( /*condição 1*/ ){
  // faça algo 1
} else if ( /*condição 2*/ ) {
  // faça algo 2
} else if ( /*condição 3*/ ) {
  // faça algo 3
}else{
  // faça algo 4
}
```

sintaxe simplficada:
```c
  if(/*condição 1*/) // comando único1
  else if( /*condição 2*/ ) //comando único1
  else // comando único1
```

## 2. Estruturas de repetição (`for & while`)

### **2.1 Estrutura *Enquanto* - `while()`**

É um loop similar a `if` prolongado. Executa enquanto uma condição for verdade.

sintaxe:
```c
while( /*condição*/ ){
  // faça algo
}
```

**observação: não esquecer uma atualização de parada**

### **2.2 Estrutura *Para* - `for()`**

Executa um código num intervalo pré definido.

```c
for(int i=1; i<=n; i++){
}
```

sintaxe:
```c
for(/*start parameters*/ ; /*test condition*/; /*incremento*/){
  // faça algo
}
```

