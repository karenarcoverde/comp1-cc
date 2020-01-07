#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
int a,i,n[99];

srand(time(NULL));
for(i=0;i<=99;i++)
{
  a=rand();
  n[i]=a%11;
  printf("%d\n",n[i]);
}
printf("\n");
printf("inverso\n");
printf("\n");
for(i=99;i>=0;i--)
{
  printf("%d\n",n[i]);
}
  return 0;
}
