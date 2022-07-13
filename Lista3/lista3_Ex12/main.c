#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contador, numeros; // variável de controle do loop
    int acumulador = 0, acumulador2 = 0, acumulador3 = 0;

    for (contador = 1; contador <= 20; contador++)
    {

        printf("Digite um numero: ");
        scanf("%d", &numeros);

        if (numeros <= 100)
        {
            acumulador = acumulador + 1;
        }
        if (numeros > 100 && numeros <= 200)
        {
            acumulador2 = acumulador2 + 1;
        }
        if (numeros > 200)
        {
            acumulador3 = acumulador3 + 1;
        }
    }

    printf("Numeros entre 0 e 100: %d \n", acumulador);
    printf("Numeros entre 101 e 200: %d \n", acumulador2);
    printf("Numeros maiores que 200: %d \n", acumulador3);
    return 0;
}