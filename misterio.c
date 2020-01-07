/*
 * Programa: questao2.c
 * Descricao: Misterio
 * Requisitos: Cinco numeros inteiros
 * Autor: Adriano Cruz
 * Data: 2013/04/15
 *
 */

#include<stdio.h>
int main (void) {
	int b0, b1, b2, b3, b4;
	int n;

	scanf("%d %d %d %d %d", &b0, &b1, &b2, &b3, &b4);
	n = b4;
	n = 10 * n + b3;
	n = 10 * n + b2;
	n = 10 * n + b1;
	n = 10 * n + b0;
	printf("%d\n", n);
    return 0;
}
