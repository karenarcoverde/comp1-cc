#include<stdio.h>
int main(void)
{
  int n,cont=1;
scanf("%d",&n);

 while (n!=1){

  printf("%d ",n);
if(n%2==1)
{
  n=3*n+1;
cont++;

}
else
{
  n=n/2;
cont++;
}


}
printf("%d\n",n);
printf("%d\n",cont);


  return 0;
}
