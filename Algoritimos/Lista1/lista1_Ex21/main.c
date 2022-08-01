#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float litros, totalLata, totalVidro, totalGarrafa, lata, vidro, garrafa;

void calculo()
{

    totalLata = (lata * 350) / 1000;
    totalVidro = (vidro * 600) / 1000;
    totalGarrafa = (garrafa * 2000) / 1000;

    litros = totalGarrafa + totalLata + totalVidro;
}
int main()
{
    printf("Quantas latas voce vai comprar?: ");
    scanf("%f", &lata);
    printf("Quantas garrafas de VIDRO voce vai comprar?: ");
    scanf("%f", &vidro);
    printf("Quantas GARRAfAS PET voce vai comprar?: ");
    scanf("%f", &garrafa);
    calculo();

    printf("Voce comprou %.2f Litros de Refrigerante. \n", litros);
}