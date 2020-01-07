#include<stdio.h>
int main(void)
{
  int n, a,cont=1,i,j,maior=0;
scanf("%d %d",&i,&j);
a=i;
for(;i<=j;i++)
{
  n=i;
cont=1;
  while (n!=1)
  {

    if(n%2==1)
    {
      n=3*n+1;
      cont++;
    }
    else
    {
      n=n/2;
      cont++;
    }
  }
if(maior==0)
{
  maior=cont;
}
else if(maior<cont)
{
  maior=cont;
}
}

printf("%d %d %d\n",a,j,maior);



  return 0;
}
