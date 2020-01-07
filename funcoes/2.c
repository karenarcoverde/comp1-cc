#include<stdio.h>
#include<math.h>
int PegaUnidade(int n);
int PegaDezena(int n);
int PegaCentena(int n);
int PegaMilhar(int n);
int main(void){
  int n,i,cont=0;
  scanf("%d",&n);
  i=n;
  while(i>0)
  {
    i=i/10;
    cont++;
  }
  int a,b,c,d;
  a=PegaUnidade(n);
  b=PegaDezena(n);
  c=PegaCentena(n);
  d=PegaMilhar(n);

  if(pow(a,cont)+pow(b,cont)+pow(c,cont)+pow(d,cont))
  {
    printf("S\n");
  }
  else {
    printf("N\n");
  }
  return 0;
}
int PegaUnidade(int n){
  return n%10;
}
int PegaDezena(int n)
{
  return (n/10)%10;
}
int PegaCentena(int n)
{
  return (n/100)%10;
}
int PegaMilhar(int n){
  return n/1000;
}
