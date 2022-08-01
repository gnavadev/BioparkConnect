#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float raio, altura, pi = 3.14, resultado;

void calculo()
{
    resultado = pi * (pow(raio, 2)) * altura;
}
int main()
{
    printf("Qual a altura do cilindro?: ");
    scanf("%f", &altura);
    printf("Qual o raio do cilindro?: ");
    scanf("%f", &raio);
    calculo();

    printf("O volume do cilintro eh: %.2f \n", resultado);
    return 0;
}