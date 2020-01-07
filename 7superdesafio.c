#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int n, num;
  int freq[66+1]; // frequencia de cada numero entre 1 e 66
  int i;

  srand(time(NULL));
  for (i = 0; i < 66+1; i++)
  {
    freq[i]=0;
  }// a principio nenhum numero apareceu

  scanf("%d", &n);

  for(i = 0; i < n; ++i) {
    num = rand() % 66 + 1;
    while (freq[num]!=0) { // enquanto o numero aleatorio for repetido...
      num = rand() % 66 + 1; // ... tenta gerar outro, que seja inedito.
    }

    freq[num]++;
    printf("%d ", num);
  }
  printf("\n");

  return 0;
}
