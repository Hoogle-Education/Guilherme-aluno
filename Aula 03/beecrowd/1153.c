#include <stdio.h>
int main()
{
   int N;
   int temp = 1;
   scanf(" %d", &N);

   while( N > 1){
    temp = temp * N;
    N--;
   }

   N = temp;
   printf("%d\n", N);

  return 0;
}
