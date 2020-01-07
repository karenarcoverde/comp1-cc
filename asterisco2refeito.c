#include<stdio.h>
int main(void)
{
  int n,i;
  i=0;
  printf("Digite um valor inteiro\n");
  scanf("%d",&n);
if(n>0)
{
      for(i=0;i<n;i++)
      {
       printf("*");
       }

}
else
{
printf("valor inválido\n");

}
  return 0;
}
