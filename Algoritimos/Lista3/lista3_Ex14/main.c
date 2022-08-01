#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contador, numeros = 2; // variável de controle do loop

    while (numeros != 1)
    {
        printf("Ola tudo bem? 1-Sim 2-Nao: ");
        scanf("%d", &numeros);
    }
    return 0;
}