#include<stdio.h>

unsigned int bolas(unsigned int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n * n + bolas(n - 1);
}

int main(void)
{
    unsigned int n;

    scanf("%d", &n);
    printf("%d = %d\n", n, bolas(n));

    return 0;
}
