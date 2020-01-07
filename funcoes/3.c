#include<stdio.h>

  int amigos(int a, int b)
  {
  int i,soma=0;
  for(i=1;i<=a/2;i++)
  {
    if(a%i==0)
    {
      soma=soma+i;
    }
  }
  if(soma==b)
  {
    return 1;
  }
  else{
    return 0;
  }
}

  int main (void){
  int i=0,j,n[50];
  while(scanf("%d",&n[i])==1)
  {
    i++;
  }
  for(j=0;j<i;j+=2)
  {
    if((amigos(n[j],n[j+1]) && amigos(n[j+1],n[j]))==1)
    {
      printf("S ");
    }
    else{
      printf("N ");
    }
  }
  printf("\n");
  return 0;
}
