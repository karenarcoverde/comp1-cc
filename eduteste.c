/* Programa:maiorN
   Autor:Eduardo
   Data:27/09/2016
   DescriÃ§Ã£o:
*/

#include<stdio.h>
int main(void){
  int n, i, v1, maior;
  i=0;
  v1=0;
  maior=0;
  printf("Digite o Numero de valores \n");
  scanf("%d", &n);

  while(i<n){

    printf("Digite o valor %d \n", i);
    scanf("%d", &v1);

    if(maior == 0 ){
      maior = v1;
    }
    if(v1>maior || v1==maior){
      maior = v1;
    }
    i++;
  }

printf("o maior valor Ã©: %d \n", maior);

  return 0;
}
