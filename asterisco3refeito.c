#include<stdio.h>
int main(void)
{
  int n,i,j;
  i=0;
  j=0;
while(j==0)
{
  printf("Digite um valor inteiro\n");
  scanf("%d",&n);
     if(n>0)
     {
        for(i=0;i<n;i++)
        {
        printf("*");
        }
    j=1;
     }
     else
     {
     printf("valor inválido\n");
      j=0;
     }

}
  return 0;
}
