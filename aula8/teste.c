#include <stdio.h>
#include <stdlib.h>
#include<errno.h>
int main(int argc ,char **argv)
{
int tam;
int *vetor;
int i;
scanf("%d", &tam);
vetor = (int*) malloc (tam * sizeof(int));
if(!vetor)
{
return ENOMEM;
}
for(i = 0; i < tam; i++) {
scanf("%d", vetor + i);
}
for(i = tam -1; i  >= 0; i--) {
printf("%d ", *(vetor + i));
}
return 0;
}
