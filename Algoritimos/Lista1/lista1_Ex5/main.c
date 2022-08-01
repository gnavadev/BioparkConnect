#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float reais, litros, precoLitro;

void calculos()
{
    litros = reais / precoLitro;
}

int main()
{
    printf("Qual o preco do litro? :");
    scanf("%f", &precoLitro);
    printf("Quantos Reais quer colocar? :");
    scanf("%f", &reais);
    calculos();

    printf("Voce abasteceu com %.2f Litros \n", litros);
    return 0;
}