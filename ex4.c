#include<stdio.h>
int main(void) {
  float prova;
  float teste1, teste2, teste3;
  float notaFinal;

  printf("Prova: ");
  scanf("%f",&prova);
  printf("Teste 1: ");
  scanf("%f",&teste1);
  printf("Teste 2: ");
  scanf("%f",&teste2);
  printf("Teste 3: ");
  scanf("%f",&teste3);

  notaFinal=0.8*prova+0.2*(teste1+teste2+teste3)/3;

  printf("Nota Final %0.2f\n",notaFinal);

  return 0;
}
