#include<stdio.h>
int main(void){
  int n,i,a,antpos,antneg,flag;
antpos=0;
antneg=0;
flag=0;
  printf("Quantos números?\n");
  scanf("%d",&n);

  for (i=0;i<n;i++)
  {
    printf("Qual é o número?\n");
    scanf("%d",&a);

    if ((a >= 0) && (a > antpos))
    {
      antpos=a;
      flag=1;
    }
    else if ((a < 0) && (a > antneg))
    {
      antneg=a;
    }
}

  if ((antpos > antneg) && (flag=1))
  {
      printf("maior número é:%d\n",antpos);
  }
  else
  {
      printf("maior número é:%d\n",antneg);
  }
  return 0;
}
