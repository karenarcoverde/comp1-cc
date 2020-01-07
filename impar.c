#include<stdio.h>
int main(void){
  int a,n,i,contimpar;
  contimpar=0;
  printf("Quantos números?\n");
  scanf("%d",&n);

for(i=0;i<n;i++){
  printf("Entre com um número inteiro\n");
  scanf("%d",&a);
      contimpar= a%2+contimpar;

}
printf("O total de ímpares são:%d\n",contimpar);
  return 0;
}
