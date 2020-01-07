#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void){
  int i,n,freq[67],x[15],j,tmp;
  srand(time(NULL));
  for(i=0;i<66+1;i++)
  {
    freq[i]=0;
  }
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    x[i]=rand();
    x[i]=x[i]%66+1;
    while(freq[x[i]]!=0)
    {
      x[i]=rand();
      x[i]=x[i]%66+1;
    }
    freq[x[i]]++;

  }

  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if(x[j]>x[j+1])
      {
        tmp=x[j];
        x[j]=x[j+1];
        x[j+1]=tmp;
      }
    }
  }
for(i=0;i<n;i++)
{
  printf("%d ",x[i]);
}

  return 0;
}
