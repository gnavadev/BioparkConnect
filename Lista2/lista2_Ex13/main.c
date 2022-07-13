#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int v100, v50, v20, v10, v5, v2, v1, vValor;

void calculo()
{
    v100 = vValor / 100;
    vValor = vValor - v100 * 100;

    v50 = vValor / 50;
    vValor = vValor - v50 * 50;

    v20 = vValor / 20;
    vValor = vValor - v20 * 20;

    v10 = vValor / 10;
    vValor = vValor - v10 * 10;

    v5 = vValor / 5;
    vValor = vValor - v5 * 5;

    v2 = vValor / 2;
    vValor = vValor - v2 * 2;

    v1 = vValor;
}
int main()
{
    printf("Informe um valor inteiro em Reais: ");
    scanf("%d", &vValor);
    calculo();

    printf("O número de notas de 100 é: %d \n ", v100);
    printf("O número de notas de 50 é: %d \n ", v50);
    printf("O número de notas de 20 é: %d \n ", v20);
    printf("O número de notas de 10 é: %d \n ", v10);
    printf("O número de notas de 5 é: %d \n ", v5);
    printf("O número de notas de 2 é: %d \n ", v2);
    printf("O número de notas de 1 é: %d \n ", v1);
}