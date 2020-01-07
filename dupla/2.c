#include<stdio.h>
#define DIM 2
typedef struct _banda {
char nome[40];
char tipo[40];
int integrante;
int posicao;
} banda;

void analisa(banda vetor[DIM]){
  int i;
  char c;
  for(i=0;i<DIM;i++)
  {
    gets(vetor[i].nome);
    gets(vetor[i].tipo);
    scanf("%d",&vetor[i].integrante);
    scanf("%d",&vetor[i].posicao);
    c=getchar();
  }

  for(i=0;i<DIM;i++)
  {
    puts(vetor[i].nome);
    puts(vetor[i].tipo);
    printf("%d\n",vetor[i].integrante);
    printf("%d\n",vetor[i].posicao);
  }

}
void pedido(banda vetor[DIM]){
  int n;
  int i;
  printf("Escolha um número de 1 a 5\n");
  scanf("%d",&n);
  for(i=0;i<DIM;i++){
    if(vetor[i].posicao==n)
    {
      puts(vetor[i].nome);
      puts(vetor[i].tipo);
      printf("%d\n",vetor[i].integrante);
      printf("%d\n",vetor[i].posicao);
    }
  }
}

int main(){
  int i;
  banda vetor[DIM];

  analisa(vetor);
  pedido(vetor);
return 0;
}
