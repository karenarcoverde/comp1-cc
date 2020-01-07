#include<stdio.h>
int main(void)
{
  int m,n,j,i;
j=0;
i=0;
scanf("%d",&m);
n=m;
for(j=0;j<n;j++)
{
  for(i=0;i<m;i++)
  {
  printf("*");
  }
printf("\n");
m--;
}


  return 0;
}
