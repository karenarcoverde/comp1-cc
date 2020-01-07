#include <stdio.h>
#include <string.h> // biblioteca com funcoes relacionadas a strings

#define DIM 1001

// funcao da biblioteca string.h que retorna quantos caracteres tem a string
// strlen('1234') -> 4
// strlen('oi karen') -> 8
// entendeu? sim
// comentando para evitar conflito com a funcao da biblioteca...

// int strlen(char *s) {
//     int tam = 0;
//     while (s[tam] != '\0')
//         tam++;
//     return tam;
// }

int main(void)
{
    char entrada[DIM];
    while (scanf("%s", entrada) != EOF)
    {
        int tam = strlen(entrada); // strlen retorna a quantidade de caracteres da string
        int x = 0, y = 0, i;
        int ok = 1; // variavel de controle... 1 = tudo ok ate o momento... se virar 0, entao a resposta eh 'incorrect'
        // x = quantidade de parenteses abertos
        // y = quantidade de parenteses fechados
        // correto? sim
        // entao, em toda iteracao, devemos ter x >= y, certo? x>y?
        // cosidere '()p()': quando chega em 'p', x = 1 e y = 1. ok? quando x> y vai dar errado. por que?
        // calma! a condicao x >= y eh so uma das condicoes... se em algum momento x < y, entao o negocio esta errado.
        // mas se em algum momento x >= y, nao podemos afirmar ainda que esta errado...
        // a condicao que falta eh que no final, x tem que ser igual a y.
        // concorda? sim
        // ok.

        // declare as variaveis dentro dos blocos que voce va utilizar...
        // declarando tudo num lugar so pode ficar dificil de gerenciar quando o programa comeca a ficar muito grande...
        // voce pode declara novas variveis no inicio de cada bloco... (ou em qualquer lugar se voce estiver usando uma versao recente)
        // ok?? okkk
        for (i = 0; i < tam; i++)
        {
            if (entrada[i] == '(')
            {
                x++;
            }

            if (entrada[i] == ')')
            {
                y++;
            }

            if (x < y) { // deu ruim
                ok = 0; // ok? sim, x nunca pode ser menor q y, certo? isso!
                break; // podemos fazer esse break... deu ruim, nao importa o restante da string, ok? seria tipo ()) ? isso! ok
            }
        }
        // pense aqui
        // ao final do loop, o que que o valor de 'ok' significa?
        // quando que o 'ok' vira 0? somente se em algum momento x < y
        // ou seja, se ok == 1, entao, x >= y a cada iteracao... inclusive no final
        // mas como dissemos acima, isso nao eh suficiente... precisamos que x seja igual a y
        // entao, a expressao esta correta somente quando ok == 1 e x == y
        // entendeu?entendi sim


        // no final, precisamos verificar que x == y
        // note que mudamos um pouco o significado do 'ok'... 'ok' agora simplesmente quer dizer que x >= y a cada iteracao
        // ok?
        // karen?? entao esse ok && e x== y me deixou confusa
        if (ok && x == y) // ok? ok eh o mesmo que x==y? nao...
            puts("correct");
        else
            puts("incorrect");
    }
    return 0;
} 
