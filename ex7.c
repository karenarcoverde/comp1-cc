#include<stdio.h>
int main(void){
  float notaAluno;
  float mediaAluno = 0.0;
  int notasLidas=0;
  int quantProvas;

printf("Quantas provas?\n");
scanf("%d",&quantProvas);
while (notasLidas<quantProvas){
  printf("Digite a nota:\n");
  scanf("%f",&notaAluno);


  mediaAluno= mediaAluno+notaAluno;

  notasLidas= notasLidas+1;
}
mediaAluno=mediaAluno/quantProvas;
printf("A media do aluno foi %.3f\n", mediaAluno);
if(mediaAluno >=5.0){
  printf("Aprovado\n");
}
else {
  printf("Reprovado\n");
}
return 0;
}
