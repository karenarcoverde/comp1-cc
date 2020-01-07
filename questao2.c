#include<stdio.h>
int main (void)
{
int n,a,b,c,d,e,f,k;
scanf("%d",&n);
a=n;
k=n;
n=n/100;

a=a%100;
b=a;
a=a/50;

b=b%50;
c=b;
b=b/20;

c=c%20;
d=c;
c=c/10;

d=d%10;
e=d;
d=d/5;

e=e%5;
f=e;
e=e/2;

f=f%2;
f=f/1;



printf("%d\n",k);
printf("%d nota(s) de R$ 100,00\n",n);
printf("%d nota(s) de R$ 50,00\n",a);
printf("%d nota(s) de R$ 20,00\n",b);
printf("%d nota(s) de R$ 10,00\n",c);
printf("%d nota(s) de R$ 5,00\n",d);
printf("%d nota(s) de R$ 2,00\n",e);
printf("%d nota(s) de R$ 1,00\n",f);

  return 0;
}
