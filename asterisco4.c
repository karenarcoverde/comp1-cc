#include<stdio.h>
int main(void)
{
  int n,i,j;
  i=0;
  j=0;
  printf("Entre com um número positivo\n");
  scanf("%d",&n);

  while(i<n)
  {
      j=0;
    while(j<n)
    {
      printf("*");
      j++;
    }
  printf("\n");
  i++;

 }
return 0;
}
