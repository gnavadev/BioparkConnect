#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float queijo = 100, presunto = 50, hamburguer = 100, sanduiche, kilosQueijo, kilosPresunto, kilosHamburguer;

void calculo()
{

    kilosQueijo = (sanduiche * queijo) / 1000;
    kilosPresunto = (sanduiche * presunto) / 1000;
    kilosHamburguer = (sanduiche * hamburguer) / 1000;
}
int main()
{

    printf("Quantos sanduiches voce quer fazer?: ");
    scanf("%f", &sanduiche);
    calculo();

    printf("Voce vai utilizar %.2f KG de Queijo %.2f KG de Presunto %.2f KG de Hamburguer \n ", kilosQueijo, kilosPresunto, kilosHamburguer);
    return 0;
}