#include<stdlib.h>
#include<stdio.h>
int main (void) {
int i,j, n, *pvetor,temp;
float media;
/*  Define um  valor para n, scanf ou n = */
scanf("%d", &n);
/*  aloca  espaco na  memoria  */
pvetor = (int*)  malloc(n *sizeof(int));
if(! pvetor) {
puts("Sem  memória .");
return 1;
}
/* aqui  uso pvetor , vamos ler um  vetor */
for(i = 0; i < n; i++) {
scanf("%d", pvetor + i);
}
/* faco  alguma  coisa */
media = 0.0;
for(i = 0; i < n; i++) {
media += *( pvetor + i);
}
media=media/n;
printf("%f\n", media);
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
    if(*(pvetor+i)>*(pvetor+j))
    {
      temp=*(pvetor+i);
      *(pvetor+i)=*(pvetor+j);
      *(pvetor+j)=temp;
    }
  }
}
for(i=0;i<n;i++)
{
  printf("A ordem é crescente: %d\n",*(pvetor+i));
}
/* aqui  nao  preciso  mais  de  pvetor */
free(pvetor);
return 0;
}
