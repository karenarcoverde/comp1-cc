#include<stdio.h>

    int Amigos(int a, int b){
      int i, soma = 0;
      for(i=1; i<=a/2; i++){
        if(a%i == 0){
          soma += i;
        }
      }
      if(soma == b){
        return 1;
      }else{
        return 0;
      }
    }

    int main(void){
      int N[50], i=0, j;

      printf("Digite os pares de números:\n");
      while(scanf("%d", &N[i]) ==  1){
        i++;
      }

      for(j=0; j<i; j+=2){
        if((Amigos(N[j], N[j+1]) && Amigos(N[j+1], N[j])) == 1){
           printf("S\n");
        }else{
          printf("N\n");
        }
      }
      return 0;
    }
