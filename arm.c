#include<stdio.h>
#include<math.h>
int pegaUnidade(int x);
int pegaDezena(int x);
int pegaCentena(int x);
int pegaUnidadeMilhar(int x);
int main()
{
  int x,a,b,c,d;
  scanf("%d",&x);

  a=pegaUnidade(x);
  b=pegaDezena(x);
  c=pegaCentena(x);
  d=pegaUnidadeMilhar(x);

  int tam = 0;
  int m = x;
  while (m > 0) {
    m = m / 10;
    tam++;
  }

  if(pow(a,tam)+pow(b,tam)+pow(c,tam)+pow(d,tam)==x)
  {
    printf("S\n");
  }
  else
  {
    printf("N\n");
  }

  return 0;
}
int pegaUnidade(int x){
  return x%10;
}
int pegaDezena(int x)
{
  return (x/10)%10;
}
int pegaCentena(int x)
{
  return (x/100)%10;
}
int pegaUnidadeMilhar(int x)
{
  return x/1000;
}
