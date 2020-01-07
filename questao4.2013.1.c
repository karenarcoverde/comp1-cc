#include<stdio.h>
#define DIM 1001
int main(void)
{
char entrada [DIM];
int i, x=0,y=0;
int ok=1;
while(scanf("%s",entrada)!=E0F)
{
  for(i=0;entrada[i]!='\0';i++)
  {
    if(entrada[i]=='(')
    {
      x++;
    }
    else if(entrada[i]==')')
    {
      y++;
    }
  }
  if(x<y)
  {
    ok=0;
    break;
  }
}
if(ok && x==y)
{
  puts("correct");
}
else{
  puts("incorrect")
}






  return 0;
}
