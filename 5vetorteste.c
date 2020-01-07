#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main (void){

  int i, a, soma, n[100];
  float media;
  soma=0;
  media=0;
  srand(time(NULL));
  for(i=0; i<10; i++){
    a=rand();
    n[i]=(a%11);
    printf("%d ", n[i]);
  soma += n[i];
  }
  printf("\n");
  media=(float)soma/10;
  printf("A mÃ©dia Ã©: %1.2f\n",media);

  return 0;
}
