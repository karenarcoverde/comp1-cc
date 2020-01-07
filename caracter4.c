#define DIM 81
#include<stdio.h>
#include<string.h>
int main(void)
{
  char frase[DIM];
  int i;
  int pares=0;
  char r,R;
  gets( frase);
  puts(frase);
  int tam = strlen(frase);
  for(i=0;i<=(tam-2);i++)
  {

    if (frase[i]=='r' && frase[i+1]=='r')
    {
      pares++;
    }
    else if(frase[i]=='R' && frase[i+1]=='R')
    {
      pares++;
    }

    else if(frase[i]=='R' && frase[i+1]=='r')
    {
      pares++;
    }
    else if(frase[i]=='r' && frase[i+1]=='R')
    {
    pares++;
    }

  }

  printf("Tem %d par(es)\n",pares);
  return 0;
}
