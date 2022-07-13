#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contador, numeros, acumulador = 0; // variável de controle do loop

    for (contador = 1; contador <= 10; contador++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numeros);
        acumulador = acumulador + numeros;
    }

    printf("O Total eh: %d\n", acumulador);
    return 0;
}