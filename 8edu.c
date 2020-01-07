#include<stdio.h>
#include<math.h>
#define dim 1000
int main(void){

  int N, i, j, cont;
  char V[dim];
  cont=0;
  scanf("%d", &N);

  for(i=0; i<N; i++){
    scanf("%s", V);
    for(j=0; j<dim; j++){
      if(V[j] == '\0'){
        j=dim;
        break;
      }else if(V[j] == '0' || V[j] == '6' || V[j] == '9'){
        cont += 6;
      }else if(V[j] == '1'){
        cont += 2;
      }else if(V[j] == '2' || V[j] == '3' || V[j] == '5'){
        cont += 5;
      }else if(V[j] == '4'){
        cont += 4;
      }else if(V[j] == '7'){
        cont += 3;
      }else if(V[j] == '8'){
        cont += 7;
      }
    }
    printf("%d leds\n", cont);
    cont=0;
  }

  return 0;
}
