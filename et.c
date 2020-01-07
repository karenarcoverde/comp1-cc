#include<stdio.h>
int main(void)
{
int base;
int numero;
int convertido[20];
int i,j;

while(1)
{
  scanf("%d",&base);
  if(base==0) break;
  scanf("%d",&numero);
  i=0;
  while(numero)
  {
    convertido[i]= numero%base;
    numero /=base;
    i++;
  }

  for(j=i-1;j>=0;j--)
  {
    printf("%d",convertido[j]);
  }
  printf("\n");
}
  return 0;
}
