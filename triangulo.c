#include<stdio.h>
#include<math.h>

int main(void)
{
  double a,b,c;
  int eh;
  int quantidade;
  int i;
  scanf("%d",&quantidade);
  i=0;
  while(i<quantidade)
  {
    scanf("%lf%lf%lf",&a,&b,&c);
    eh=0;
    if ((fabs(b-c)<a)&&(a<(b+c))) eh++;
    if((fabs(a-c)<b)&&(b<(a+c))) eh++;
    if((fabs(a-b)<c)&&(c<(a+b))) eh++;

    if(eh==3){
      printf("EH TRIANGULO\n");
    }
    else{
      printf("NAO EH TRIANGULO\n");
    }
    i++;
  }
  return 0;
}
