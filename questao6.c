#include<stdio.h>
int main(void)
{
int a,i,maiori,maior=-1;

for(i=1;i<=100;i++)
{
  scanf("%d",&a);
  if(a>maior)
  {
  maior=a;
  maiori=i;
  }
}

printf("%d\n",maior);
printf("%d\n",maiori);

  return 0;
}
