#include<stdio.h.>
int main (void)
{
int gp,gc,n,i,pontos;
i=0;
pontos=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d%d",&gp,&gc);
  if (gp>gc){
    pontos=pontos+3;
  }
  else if(gp=gc){
    pontos=pontos+1;
  }
}
printf("O ibis fez %d pontos.\n",pontos);
return 0;
}
