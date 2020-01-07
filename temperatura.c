#include<stdio.h>
int main (void)
{
int N;
double menor, maior;
double valor;
int i;

scanf("%d",&N);
scanf("%lf",&menor);
maior=menor;
for(i=0;i<N-1;i++)
{
  scanf("%lf",&valor);
  if(valor<menor)
  {
    menor=valor;
  }
  else if(valor>maior)
  {
    maior=valor;
  }
}
  printf("Maior= %f\n",maior);
  printf("Menor=%f\n",menor);
  return 0;
}
