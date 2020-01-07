#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main (void){

  int i, j, a, n[100];

  srand(time(NULL));
  for(i=0; i<=99; i++){
    a=rand();
    n[i]=a%11;
    printf("%d ", n[i]);
  }
  printf("\n");
  printf("inverso\n");
  printf("\n");

  for(j=99; j>=0; j--){
    printf("%d ", n[j]);
  }

  return 0;
}
