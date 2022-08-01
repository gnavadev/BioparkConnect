#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float resultado, dMaior, dMenor;

void calculo()
{
    resultado = (dMaior * dMenor) / 2;
}
int main()
{
    printf("Tamanho da base Maior?: ");
    scanf("%f", &dMaior);
    printf("Tamanho da base Menor?: ");
    scanf("%f", &dMenor);
    calculo();

    printf("A area do losango eh: %.2f \n", resultado);
    return 0;
}