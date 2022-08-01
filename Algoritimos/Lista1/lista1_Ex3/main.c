#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int paes, broas;
float valorPao, valorBroa, total, poupanca;

void calculo()
{
    valorPao = paes * 0.12;
    valorBroa = broas * 1.50;
    total = valorBroa + valorPao;
    poupanca = total * 0.1;
}

int main()
{
    printf("Quantos Paes foram comprados? :");
    scanf("%d", &paes);
    printf("Quantas broas foram compradas? :");
    scanf("%d", &broas);
    calculo();

    printf("Seu total deu R$%0.2f \n", total);
    printf("Voce deve guardar R$%0.2f \n", poupanca);
    return 0;
}