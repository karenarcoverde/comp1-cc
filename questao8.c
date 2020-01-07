#define DIM 1000
#include<stdio.h>
int main(void){
  int i,j,n,soma=0;
  char numero[DIM];
scanf("%d",&n);
for(j=0;j<n;j++)
{
 soma=0;
 scanf("%s",numero);
for(i=0;i<DIM;i++)
{
if(numero[i]=='\0')
{
  break;
}

else if(numero[i]=='1')
{
  soma=soma+2;
}
else if(numero[i]=='2' || numero[i]=='3' || numero[i]=='5')
{
  soma=soma+5;
}

else if(numero[i]=='4')
{
  soma=soma+4;
}

else if(numero[i]=='6' || numero[i]=='9' || numero[i]=='0')
{
  soma=soma+6;
}
else if(numero[i]=='7')
{
  soma=soma+3;
}
else if(numero[i]=='8')
{
  soma=soma+7;
}

}

printf("%d leds\n",soma);
}
  return 0;
}
