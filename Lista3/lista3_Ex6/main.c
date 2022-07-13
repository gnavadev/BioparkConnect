#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contador, numeros; // variável de controle do loop
    float acumulador = 0;

    for (contador = 1; contador <= 20; contador++)
    {
        printf("Digite uma idade: ");
        scanf("%d", &numeros);
        acumulador = acumulador + numeros;
    }

    acumulador = acumulador / 20;
    printf("O Total eh: %.2f\n", acumulador);
    return 0;
}