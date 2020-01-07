#include<stdio.h>
int main(void)
{
  int t,i, M[12];
  for(t=0;t<3;t++)
  {
    for(i=0;i<4;i++)
    {
      M[t*4+1]=(t*4)+i+1;
    }
  }
  for(t=0;t<3;t++)
  {
    for(i=0;i<4;i++)
    {
      printf("%3d ", M[t*4+i]);
    }
    printf("\n");
  }
  return 0;
}
