#include<stdio.h>
int main(void)
{
  int valor,i,n,contimpar=0,contpar=0,teste=1,somapares=0,somaimpares=0;
  double p,im;

while(1)
{
  scanf("%d",&n);
if(n!=0){
  somapares=0;
  somaimpares=0;
  contpar=0;
  contimpar=0;
      for(i=1;i<=n;i++)
      {
        scanf("%d",&valor);
          if(valor%2==1)
          {
            contimpar=contimpar+1;
            somaimpares=somaimpares+valor;
          }
          else if(valor%2==0)
          {
            contpar=contpar+1;
            somapares=valor+somapares;
          }
      }
      p=((double)somapares)/contpar;
      im=((double)somaimpares)/contimpar;
      printf("Teste %d\n",teste);
      printf("Media pares %lf\n",p);
      printf("Media impares %lf\n",im);
      printf("\n");
  teste++;
}
else {
  break;
}
}




  return 0;
}
