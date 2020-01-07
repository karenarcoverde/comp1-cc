#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void)
{
 int i, n,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0;
 float freq1,freq2,freq3,freq4,freq5,freq6;
srand(time(NULL));

for(i=0;i<6000000;i++)
{
  n=rand();
  n=(n%6)+1;
  printf("%d\n",n);

  if(n==1)
  {
    cont1++;
  }
  else if(n==2)
  {
    cont2++;
  }
  else if(n==3)
  {
    cont3++;
  }
  else if(n==4)
  {
    cont4++;
  }
  else if(n==5)
  {
    cont5++;
  }
  else if(n==6)
  {
    cont6++;
  }
}
freq1=((double)cont1/6000000)*100;
freq2=((double)cont2/6000000)*100;
freq3=((double)cont3/6000000)*100;
freq4=((double)cont4/6000000)*100;
freq5=((double)cont5/6000000)*100;
freq6=((double)cont6/6000000)*100;

printf("%f %f %f %f %f %f",freq1,freq2,freq3,freq4,freq5,freq6);
  return 0;
}
