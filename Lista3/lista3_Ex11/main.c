#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contador, numeros; // variável de controle do loop
    int acumulador = 0;

    for (contador = 1; contador <= 20; contador++)
    {

        printf("Digite um numero: ");
        scanf("%d", &numeros);

        if (numeros < 100)
        {
            acumulador = acumulador + 1;
        }
    }

    printf("Numeros entre 0 e 100: %d \n", acumulador);
    return 0;
}