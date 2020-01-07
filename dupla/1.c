#include<stdio.h>
#define DIM 10
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

int main(){
  int i;
  banda vetor[DIM];

  analisa(vetor);
return 0;
}
