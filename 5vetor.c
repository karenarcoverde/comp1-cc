#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
int a,i,soma,acima,n[99];
float media;
soma=0;
media=0;
acima=0;
srand(time(NULL));
for(i=0;i<=99;i++)
{
  a=rand();
  n[i]=a%11;
  soma=soma+n[i];
}
media=soma/100;

for(i=0;i<=99;i++)
{
  if(media<n[i])
  {
    acima=acima+1;
  }
}
printf("%d\n",acima);
  return 0;
}
