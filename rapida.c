#include<stdio.h>

long long int power(int n, int x);

int main(void){

  int n, x;

  scanf("%d %d", &n, &x);
  printf("%lld\n", power(n,x));

  return 0;
}

long long int power(int n, int x){

  if(x==1){
    return n;
  }else if(x==0){
    return 1;
  }else{
    if(x%2 == 0){
      return power(n,x/2)*power(n,x/2);
    }else{
      return n * power(n,x/2) * power(n,x/2);
    }
  }
}
