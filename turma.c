#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct
{
  char nome[40], cod_disc[6];
  unsigned int DRE;
  float n1, n2;
} aluno_comp1;

void ledados(aluno_comp1 turma[], int q1, int q2){
  int i;
  for(i=0; i<q1+q2; i++){
    printf("Diga o nome do aluno\n");
    scanf("%s",turma[i].nome);
    printf("Diga o DRE do aluno\n");
    scanf("%d", &turma[i].DRE);
    printf("Diga a nota 1\n");
    scanf("%f",&turma[i].n1);
    printf("Diga a nota 2\n");
    scanf("%f",&turma[i].n2);
    getchar();
    printf("Diga o codigo da turma\n");
    scanf("%s",turma[i].cod_disc);

  }
}
float media(aluno_comp1 turma[], int q1, int q2){
  int i;
  float media;
  float maior = 0;
  for(i=0; i<q1+q2; i++){
    media = (turma[i].n1+turma[i].n2)/2;
    printf("A media do aluna(o) %s e igual:  %f\n", turma[i].nome, media);
    if(maior<media){
      maior = media;
    }
  }
  return maior;
}

void mediadamedia(aluno_comp1 turma[], int q1, int q2){
  char cod1[6], cod2[6];
  int i = 0, conta, contb;
  float somaa,somab, maiora, maiorb;
  somaa = somab = maiora = maiorb = 0;
  conta = contb= 0;
strcpy(cod1,turma[0].cod_disc);
  for(i=0; i<q1+q2; i++){
    if(strcmp(turma[i].cod_disc,cod1)!=0){
      strcpy(cod2,turma[i].cod_disc);
      i = q1+q2;
    }
  }
  for(i=0; i<q1+q2; i++){
    if(strcmp(cod1,turma[i].cod_disc) == 0){
      somaa= somaa+ (turma[i].n1 + turma[i].n2)/2;
      conta=conta+1;
      if(maiora < (turma[i].n1 + turma[i].n2)/2){
        maiora = (turma[i].n1 + turma[i].n2)/2;
      }
    }
    if(strcmp(cod2,turma[i].cod_disc) == 0){
      somab= somab + (turma[i].n1 + turma[i].n2)/2;
      contb=contb+1;
      if(maiorb < (turma[i].n1 + turma[i].n2)/2){
        maiorb= (turma[i].n1 + turma[i].n2)/2;
  }
      }
    }

  printf("A media da turma 1 e: %f e a media da turma 2 e: %f \n", somaa/conta,somab/contb);
  printf("A maior media da turma 1 e: %f e maior media da turma 2 e: %f \n", maiora,maiorb);
}

int main(void)
{

  int q1,q2;
  float maiormedia;
  aluno_comp1 *mab;
  printf("Diga a quantidade de alunos da turma 1\n");
  scanf("%d", &q1);
  printf("Diga a quantidade de alunos da turma 2\n");
  scanf("%d", &q2);
  getchar();
  mab = (aluno_comp1*) malloc((q1+q2)*sizeof(aluno_comp1));
  if(!mab){
    return 1;
}

  ledados(mab, q1, q2);
  maiormedia = media(mab, q1, q2);
  printf("A maior media de todas e: %f\n", maiormedia);
  mediadamedia(mab, q1, q2);

  return 0;
}
