#include<stdio.h>
int main(void)
{
float a,x;

scanf("%f",&x);

if(0<=x && x<=400.00)
{
  a=0.15*x;
  x=x+a;
  printf("Novo salario: %.2f\n",x);
  printf("Reajuste ganho: %.2f\n",a);
  printf("Em percentual: 15 %%\n");
}
else if(400.01<=x && x<=800.00)
{
  a=0.12*x;
  x=x+a;
  printf("Novo salario: %.2f\n",x);
  printf("Reajuste ganho: %.2f\n",a);
  printf("Em percentual: 12 %%\n");
}
else if(800.01<=x && x<=1200.00)
{
  a=0.1*x;
  x=x+a;
  printf("Novo salario: %.2f\n",x);
  printf("Reajuste ganho: %.2f\n",a);
  printf("Em percentual: 10 %%\n");
}
else if(1200.01<=x && x<=2000.00)
{
  a=0.07*x;
  x=x+a;
  printf("Novo salario: %.2f\n",x);
  printf("Reajuste ganho: %.2f\n",a);
  printf("Em percentual: 7 %%\n");
}
else if(x>2000)
{
  a=0.04*x;
  x=x+a;
  printf("Novo salario: %.2f\n",x);
  printf("Reajuste ganho: %.2f\n",a);
  printf("Em percentual: 4 %%\n");
}

  return 0;
}
