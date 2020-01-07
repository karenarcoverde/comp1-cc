/*
 * Programa: questao1.c
 * Descricao: Calcula o imposto de renda
 * Requisitos: Salario em real e dependentes em inteiros
 * Autor: Adriano Cruz
 * Data: 2013/04/15
 *
 */

#include<stdio.h>
int main (void) {
	int dependentes;
	double salario, imposto;

    printf("Salario? "); scanf("%lf", &salario);
    printf("Dependentes? "); scanf("%d", &dependentes);

    salario = salario - dependentes * 125.00;
    if (salario <= 1250.00) {
        printf("Isento\n");
    }
    else {
        if (salario <= 2515.00) {
            imposto = salario * 0.15 - 190.00;
        }
        else {
            imposto = salario * 0.275 - 500.00;
        }
        printf("Imposto = R$ %.2lf\n",  imposto);
    }
    return 0;
}
