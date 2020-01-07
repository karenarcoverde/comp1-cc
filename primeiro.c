/*
     Programa: primeiro.c 
  Autor: Karen
  Data: 11/09/2016
  Descrição: Este programa resolve a equação de primeiro
                 grau   ax+b=0
*/
#include<stdio.h>
int main(void){
    float a, /* coeficiente da equação de primeiro grau */
          b, /* termo independente da equação */
          x; /* resultado da equação de primeiro grau */

    printf("Este programa resolve uma equação de primeiro grau.\n");
    printf("Entre com o coeficiente a, por favor.\n");
    scanf("%f",&a);
    printf("Entre com o coeficiente b, por favor.\n");
    scanf("%f",&b);

    if (a==0){
printf("Esta equação não tem solução.\n");
}
else{
x=-b/a;
printf("A solução da equação vale %1.3f\n", x);
}
return 0;
}

