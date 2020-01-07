#include <stdio.h>
#include <stdlib.h>

int main()  {
    int passo = 10000;
    long long n = passo;
    int *p;

    while(passo > 0) {      /* Enquanto o passo ainda me faz andar  */

        p = (int *) malloc(n);

        if(p==NULL) {       /* Se não funcionou                     */
            n =n- passo;     /* volto pro ultimo n que funcionou     */
            passo =passo/2;     /* e diminuo o passo                    */
        }

        free(p);
        n =n+ passo;
    }

    /* Imprime o resutlado */
    printf("Memoria estorou\n");
    printf("Memoria usada: %lld\n", n);

    return 0;
}
