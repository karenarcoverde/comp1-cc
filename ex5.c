#include<stdio.h>
int main(void){
  int s,n,a1;
  a1=0;
  printf("Digite o último número: ");
  scanf("%d",&n);

  s=(a1+n)*(n+1)/2;

  printf("A soma dos termos é: %d",s);

  return 0;
}
