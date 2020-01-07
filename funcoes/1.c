#include<stdio.h>
int fib(int n);
int main (void)
{
int n,x;
scanf("%d",&n);
x=fib(n);
printf("%d\n",x);
return 0;
}
int fib(int n)
{
if(n==1)
{
return 0;
}
else if(n==2){
return 1;
}
return fib(n-1)+fib(n-2);
}
