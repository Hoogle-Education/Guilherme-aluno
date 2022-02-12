#include <stdio.h>

int main(){

  int storage;

  scanf(" %d", &storage);

  while(storage != 0){
    if(storage > 0){
      printf("continua vendendo! storage = %d\n", storage);
      storage--;
    }else {
      printf("Reabastecendo! storage = %d\n", storage);
      storage++;
      // storage = storage + 1;
      // storage += 1; // ----
      // storage -=15;
      // storage *= 2;
      // storage++; // ----
    }
  }

  printf("Ufa! finalmente o estoque eh igual a %d\n", storage);

  return 0;
}