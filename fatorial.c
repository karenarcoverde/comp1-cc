#include<stdio.h>
int main(void)
{
  int f,n;
  
  scanf("%d",&n);
  f=1;
  while (n>1)
  {
    f=f*n;
    n=n-1;
  }
  printf("f vale:%d",f);

  return 0;
}
