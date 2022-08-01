#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contador, contador2, acumulador = 0; // variável de controle do loop

    printf("Digite o primeiro numero: ");
    scanf("%d", &contador);
    printf("Digite o segundo numero: ");
    scanf("%d", &contador2);

    if (contador < contador2)
    {
        for (contador; contador < contador2; contador++)
        {
            acumulador = acumulador + contador;
            printf("Total Acumulador: %d\n", acumulador);
        }
    }
    else if (contador > contador2)
    {
        for (contador2; contador > contador2; contador2++)
        {
            acumulador = acumulador + contador;
            printf("Total Acumulador: %d\n", acumulador);
        }
    }
    return 0;
}