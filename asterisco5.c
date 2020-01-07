#include<stdio.h>
int main(void)
{
int i,n,j,a;
scanf("%d",&n);
  a=n;
for(i=0;i<n;i++)
{

  for(j=0;j<a;j++)
  {
    printf("*");
  }
  a--;
  printf("\n");

}
  return 0;
}
