#define DIM 1001
#include<stdio.h>
int main(void)
{
  char frase[DIM];
  int i;

while (scanf("%s", frase) != EOF)
{
  scanf("%s",frase);
  printf("%s",frase);
  for(i=0;i<DIM;i++)
  {
    if(frase[i]=='\0'){
    break;
    }

    if(frase[0]=='\n')
    {
    break;
  }

}

}

  return 0;
}
