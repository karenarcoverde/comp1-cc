#include<stdio.h>
int main(void){
  int a,n,i,contimpar,contpar;
  contpar=0;
  contimpar=0;
  printf("Quantos números?\n");
  scanf("%d",&n);

for(i=0;i<n;i++){
  printf("Entre com um número inteiro\n");
  scanf("%d",&a);
  if(a%2==0){
    printf("O número é par\n");
    contpar=contpar+1;
  }
  else{
    printf("O número é ímpar\n");
    contimpar=contimpar+1;
  }
}
printf("O total de pares são:%d\n",contpar);
printf("O total de ímpares são:%d\n",contimpar);
  return 0;
}
