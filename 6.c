#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
int i,n;

srand(time(NULL));
for(i=0;i<99;i++)
{
  n=rand();
  n=n%11;
  printf("%d\n",n);

}






  return 0;
}
