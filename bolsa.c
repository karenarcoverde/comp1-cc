#include<stdio.h>
#include<math.h>
int main (void)
{
int n,j,i;
double preco,k;
i=0;
j=0;
scanf("%d",&n);
for(i=0;i < n;i++)
{
  scanf("%lf",&preco);
  k=round(preco);
  for(j=0;j < k;j++)
  {
    printf("*");

  }
  printf("\n");

}
  return 0;
}
