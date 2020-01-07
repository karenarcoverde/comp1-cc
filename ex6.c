#include<stdio.h>
int main(void){
  float notaAluno;
  float mediaAluno;
printf("Digite a nota1\n");
scanf("%f",&notaAluno);
mediaAluno=notaAluno;
printf("Digite a nota2:\n");
scanf("%f",&notaAluno);
mediaAluno=mediaAluno+notaAluno;
printf("Digite a nota3:\n");
scanf("%f",&notaAluno);
mediaAluno=mediaAluno+notaAluno;
mediaAluno=mediaAluno/3;
printf("A média é:%f\n",mediaAluno);

  if(mediaAluno >=5.0){
    printf("Aprovado\n");
  }
  else{
    printf("Reprovado\n");
  }
  return 0;
}
