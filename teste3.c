#include<stdio.h>
int main (void){
  int N, N1, a, i, cont,cont2;
  cont=1;
  cont2=0;
  printf("Digite o intervalo \n");
  scanf("%d%d", &N, &N1);

  a=N;

  for(;N<=N1;N++){
    i=N;
    cont=1;
  while(i!=1){

    if(i%2 == 1){
      i = 3*i+1;
    }else{
      i = i/2;
    }
    cont++;
  }

  if(cont2==0){
  cont2=cont;
  }

  if(cont2<cont){
    cont2=cont;
  }
}
printf("%d %d\n", a, N1);
printf("%d\n", cont2);
  return 0;

}
