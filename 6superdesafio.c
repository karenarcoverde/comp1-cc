#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
  int i,n[100],a,vetor[11],x;
  srand(time(NULL));
  for(x=0;x<11;x++)
  {
    vetor[x]=0;
  }

  for(i=0; i<100; i++){
      a=rand();
      n[i]=(a%11);
      x=n[i];
      printf("%d ", n[i]);
      vetor[x]=vetor[x]+1;
  }
  printf("\n");
  printf("O 0 Foi gerado %d vezes\n",vetor[0]);
  printf("o 1 Foi gerado %d vezes\n",vetor[1]);
  printf("o 2 Foi gerado %d vezes\n",vetor[2]);
  printf("o 3 Foi gerado %d vezes\n",vetor[3]);
  printf("o 4 Foi gerado %d vezes\n",vetor[4]);
  printf("o 5 Foi gerado %d vezes\n",vetor[5]);
  printf("o 6 Foi gerado %d vezes\n",vetor[6]);
  printf("o 7 Foi gerado %d vezes\n",vetor[7]);
  printf("o 8 Foi gerado %d vezes\n",vetor[8]);
  printf("o 9 Foi gerado %d vezes\n",vetor[9]);
  printf("o 10 Foi gerado %d vezes\n",vetor[10]);
  return 0;
}
