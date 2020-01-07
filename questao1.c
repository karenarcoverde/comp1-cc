#include<stdio.h>
#include<string.h>
int main(void)
{
  double salario,montante,total;
  char nome[30];

  scanf("%s",nome);
  scanf("%lf", &salario);
  scanf("%lf", &montante);

total=(0.15*montante)+salario;
printf("TOTAL = R$ %.2lf\n",total);
  return 0;
}
