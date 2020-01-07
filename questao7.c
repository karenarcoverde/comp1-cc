#include<stdio.h>
int main(void)
{
  int n,a,contr=0,conts=0,contc=0,total,i;
  float pr,pc,ps;
  char tipo;
  char letra1 = 'C';
  char letra2 = 'R';
  char letra3 = 'S';

scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d %c",&a,&tipo);

  if(tipo==letra1)
  {
    contc=contc+a;
  }
  else if (tipo==letra2)
  {
    contr=contr+a;
  }
  else if(tipo==letra3)
  {
    conts=conts+a;
  }
}
total=conts+contr+contc;
pc=((double)contc/total)*100;
pr=((double)contr/total)*100;
ps=((double)conts/total)*100;
printf("Total: %d cobaias\n",total);
printf("Total de coelhos: %d\n",contc);
printf("Total de ratos: %d\n", contr);
printf("Total de sapos: %d\n",conts);
printf("Percentual de coelhos: %.2f %%\n",pc);
printf("Percentual de ratos: %.2f %%\n",pr);
printf("Percentual de sapos: %.2f %%\n",ps);

  return 0;
}
