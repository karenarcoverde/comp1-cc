#include<stdio.h>
int main(void){
  double A,B,MEDIA;
  scanf("%lf",&A);
  scanf("%lf",&B);
if (((A>=0) && (A<=10)) && ((B>=0) && (B<=10)))
{
  MEDIA = ((A*3.5)+(B*7.5))/11;
  printf("MEDIA = %.5lf\n", MEDIA);
}
  return 0;
}
