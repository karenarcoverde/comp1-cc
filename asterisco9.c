#include<stdio.h>
int main (void){

int n,j,i,m;
i=0;
j=0;
m=0;
printf("Entre com um número de linhas\n");
scanf("%d", &n);
printf("Entre com um número de colunas\n");
scanf("%d",&m);
for(i=0;i<n;i++)
{

  for(j=0;j<m;j++)
  {
   printf("*");
  }
  printf("\n");

}


return 0;
}
