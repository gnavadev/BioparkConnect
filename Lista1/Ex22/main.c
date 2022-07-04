#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float moeda1 = 0.01, moeda5 = 0.05, moeda10 = 0.10, moeda25 = 0.25, moeda50 = 0.50, total;
int ac1, ac5, ac10, ac25, ac50;

void calculo()
{

    total = (ac1 * moeda1) + (ac5 * moeda5) + (ac10 * moeda10) + (ac25 * moeda25) + (ac50 * moeda50);
}
int main()
{
    printf("Quantas moedas de 1?: ");
    scanf("%d", &ac1);
    printf("Quantas moedas de 5?: ");
    scanf("%d", &ac5);
    printf("Quantas moedas de 10?: ");
    scanf("%d", &ac10);
    printf("Quantas moedas de 25?: ");
    scanf("%d", &ac25);
    printf("Quantas moedas de 50?: ");
    scanf("%d", &ac50);
    calculo();

    printf("Parabens, voce juntou R$%.2f reais \n", total);
    return 0;
}
