#include<stdio.h>
int main(void)
{
int m,i,n,j;
i=0;
j=0;
scanf("%d",&n);
m=n;
for(j=0;j<n;j++)
{
for(i=0;i<m;i++)
{
  printf("=");

}
printf("\n");
m--;
}
  return 0;
}
