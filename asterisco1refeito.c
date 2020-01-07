#include<stdio.h>
int main(void)
{
  int n,i;
  i=0;
  printf("Digite um valor inteiro\n");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    printf("*");
  }
  return 0;
}
