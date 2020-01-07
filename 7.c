#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX 1000000
int main(void)
{
int i,dentro=0;
int x,y;
float a,b;
double f;


srand(time(NULL));

for(i=0;i<MAX;i++)
{

  x=rand();
  x=x%RAND_MAX;
  a=(double)x/RAND_MAX;
  printf("%lf\n",a);

  y=rand();
  y=y%RAND_MAX;
  b=(double)y/RAND_MAX;
  printf("%lf\n",b);

if (a*a+b*b<=1)
{
  dentro++;
}
}
printf("\n");
printf("%d\n",dentro);
printf("\n");

f=4*dentro/MAX;
printf("%lf",f);
  return 0;
}
