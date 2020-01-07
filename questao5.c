#include <stdio.h>

#define DIM 1001



int main(void)
{
    char entrada[DIM];
    while (scanf("%s", entrada) != EOF)
    {
        int x = 0, y = 0, i;
        int ok = 1;


        for (i = 0; entrada[i] !='\0'; i++)
        {
            if (entrada[i] == '(')
            {
                x++;
            }

            if (entrada[i] == ')')
            {
                y++;
            }

            if (x < y) {
                ok = 0;
                break;
            }
        }


        if (ok && x == y)
            puts("correct");
        else
            puts("incorrect");
    }
    return 0;
}
