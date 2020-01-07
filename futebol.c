#include<stdio.h>
int main (void)
{
  int n,gp,gc,vitoria,i;
  i=0;
  vitoria=0;
scanf("%d",&n);
while(n!=0)
{

    for(i=0;i<n;i++)
    {
    scanf("%d%d",&gp,&gc);
       if(gp>=gc)
       {
         vitoria=vitoria+1;
       }
     }
  printf("%d\n",vitoria);
  scanf("%d",&n);
  vitoria=0;
}

  return 0;
}
