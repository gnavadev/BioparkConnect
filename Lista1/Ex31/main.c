#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float peso, pesoMenos, pesoMais;

void calculo()
{
    // calculo
    pesoMenos = peso + (peso * 0.2);

    pesoMais = peso + (peso * 0.15);
}
int main()
{
    printf("Qual o seu peso?: ");
    scanf("%f", &peso);
    calculo();

    printf("Se engordar seu peso sera %.2f e se emagrecer sera %.2f\n", pesoMais, pesoMenos);
    return 0;
}