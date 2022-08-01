#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float resultado, baseMaior, baseMenor, altura;

void calculo()
{
    resultado = (baseMaior + baseMenor) * altura / 2;
}
int main()
{
    printf("Tamanho da base Maior?: ");
    scanf("%f", &baseMaior);
    printf("Tamanho da base Menor?: ");
    scanf("%f", &baseMenor);

    printf("Altura?: ");
    scanf("%f", &altura);
    calculo();

    printf("A area do trapezio eh: %.2f \n", resultado);
    return 0;
}