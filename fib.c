#include <stdio.h>
int x,resultado;
int fib(int x);
int main() {

    scanf("%d",&x);

    resultado = fib(x);
    printf("%d\n",resultado);
    return 0;
}
int fib(int x){
    if (x==1)
    {
        return 0;
    }
    else if(x==2)
    {
        return 1;
    }
    else {
    return fib(x-1)+fib(x-2);
    }
}
