#include<stdio.h>

void selection_sort(int V[], int N);

int main(void){
  int N, V[512], i;

  scanf("%d", &N);
  for(i=0;i<N;i++){
    scanf("%d", &V[i]);
  }
  selection_sort(V, N);
  for(i=0;i<N;i++){
    printf("%d", V[i]);
  }

  return 0;
}

void selection_sort(int V[], int N){
  int i, maior, maiorI, temp;
  maior = 0;
  for(i=0; i<N; i++){
    if (i==0){
      maior = V[i];
      maiorI = i;
    }
    if(maior < V[i]){
      maior = V[i];
      maiorI = i;
    }
  }

  if (N == 2 && maior == V[0]){
      temp = V[1];
      V[0] = temp;
      V[1] = maior;
  }else if(N>2){
      temp = V[N-1];
      V[maiorI] = temp;
      V[N-1] = maior;
      selection_sort(V, N-1);
    }

}
