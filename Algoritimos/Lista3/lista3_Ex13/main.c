#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contador, numeros = 1; // variável de controle do loop

    while (numeros >= 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &numeros);
    }
    printf("NAO ACEITAMOS NUMEROS NEGATIVOS POR AQUI \n");
    return 0;
}