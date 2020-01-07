#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void)
{
int i,n,cont1,cont2,cont3,cont4,cont5,cont6;
float freq1,freq2,freq3,freq4,freq5,freq6;

srand(time(NULL));

for(i=0;i<6000000;i++)
{
  n=rand();
  n=(n%6)+1;
  printf("%d\n",n);
switch(n)
{
  case 1:
  cont1++;
  break;

  case 2:
  cont2++;
  break;

  case 3:
  cont3++;
  break;

  case 4:
  cont4++;
  break;

  case 5:
  cont5++;
  break;

  case 6:
  cont6++;
  break;
}
}
freq1=((double)cont1/6000000)*100;
freq2=((double)cont2/6000000)*100;
freq3=((double)cont3/6000000)*100;
freq4=((double)cont4/6000000)*100;
freq5=((double)cont5/6000000)*100;
freq6=((double)cont6/6000000)*100;

printf("%f %f %f %f %f %f\n",freq1,freq2,freq3,freq4,freq5,freq6);

  return 0;
}
