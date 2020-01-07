#include<stdio.h>
int main(void){
  int n,i,a;
  float b[5];
  printf("Quantos participantes na festa?\n");
  scanf("%d",&n);

  for (i=0;i<n;i++)
  {
    printf("Qual é o número do ingresso?\n");
    scanf("%d",&a);
     b[i]=a;
  }
  for (i=0;i<n;i++)
  {
    if (b[i]==n)
    {
      printf("teste 1:%d\n",a);
      printf("\n");
    }
  }
}
