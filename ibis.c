#include<stdio.h>
int main(void){
 int gp,gc,n,pontos,i;
 i=0;
 pontos=0;
 printf("Quantos jogos o Ibis jogou no ano?\n");
 scanf("%d",&n);
for(i=0;i<n;i++)
{
  printf("Entre com o número de gols feitos e sofridos\n");
  scanf("%d%d",&gp,&gc);
  if(gp>gc)
  {
    pontos=pontos+3;
  }
  else if (gp==gc)
  {
    pontos=pontos+1;
  }
}

printf("O total de pontos que o Ibis fez foi:%d\n",pontos);

  return 0;
}
