#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float alturaSua, sombraPredio, sombraSua, resultado;

void calculo()
{
    resultado = (sombraPredio * alturaSua) / sombraSua;
}
int main()
{
    printf("Qual o tamanho da sombra do Predio?: ");
    scanf("%f", &sombraPredio);
    printf("Qual o seu tamanho?: ");
    scanf("%f", &alturaSua);
    printf("Qual o tamanho da sua sombra?: ");
    scanf("%f", &sombraSua);
    calculo();

    printf("O predio mede %.2f metros \n", resultado);
    return 0;
}