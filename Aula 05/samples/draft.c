#include <stdio.h>
#include <string.h>
#define MAXN 10001

int findString(char line[MAXN], char str[MAXN], int n){ 

  int tam = strlen(str);
  int i, pos=0, find = 0;

  for(int i=0; i<n; i++){
    if(str[pos] == '\0'){
      break;
    }
    
    if(line[i] == str[pos]){
      pos++; // avança na string
      find = 1; // true
    }else{
      pos = 0; // inicial da string
      find = 0; // false
    }

  }

  return find;
}

int main(){
  
  int n, i;
  char line[MAXN];
  char str[MAXN];

  scanf(" %d", &n);

  scanf("%s", str);
  for(i=0; i<n; i++) scanf(" %c", &line[i]);


  if( find(line, str, n) == 1 ) printf("encontrou!\n");
  else printf("nao encontrou\n");

  return 0;
}