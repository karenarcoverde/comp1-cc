
#include<stdio.h>
int main(void){
  int n, i, v1, v2;
  i=0;
  v1=0;
  v2=0;
  printf("Digite o Numero de valores \n");
  scanf("%d", &n);

  while(i<n){

    printf("Digite o valor %d \n", i);
    scanf("%d", &v1);

    if(v1<v2){
      v1 = v2;
    }
    i++;
  }

printf("o maior valor é: %d \n", v1);

  return 0;
}
