#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
int a,i,b, n[i];
scanf("%d",&b);

srand(time(NULL));
for(i=0;i<b;i++)
{

  a=rand();
  n[i]=(a%66)+1;
  printf("%d ",n[i]);
}

  return 0;
}
