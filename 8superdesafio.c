#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int n;
  int freq[67]; // frequencia de cada numero entre 1 e 66
  int v[15];
  int i, j, tmp, sorted;

  srand(time(NULL));
  for (i = 0; i < 67; i++)
  {
    freq[i]=0;
  }
   // a principio nenhum numero apareceu

  scanf("%d", &n);

  for(i = 0; i < n; ++i) {
    v[i] = rand() % 66 + 1;
    while (freq[v[i]]!=0) { // enquanto o numero aleatorio for repetido...
      v[i] = rand() % 66 + 1; // ... tenta gerar outro, que seja inedito.
    }

    freq[v[i]]++; // marca o numero inedito como repetido.
  }

  // bubble sort
  for (i = 0; i < n-1; ++i) {
    sorted = 1;
    for (j = 0; j < n-i-1; ++j) {
      if (v[j] > v[j+1]) {
        tmp = v[j];
        v[j] = v[j+1];
        v[j+1] = tmp;
        sorted = 0;
      }
    }
    if (sorted) break;
  }

  for (i = 0; i < n; ++i) {
    printf("%d ", v[i]);
  }
  printf("\n");

  return 0;
}
