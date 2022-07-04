#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n1, n2, n3, resultado;

int main()
{

    printf("digite 3 numeros: ");
    if (scanf("%d %d %d", &n1, &n2, &n3) == 3)
    {
    }
    else
    {
        puts("Error. Please supply 3 integers");
    }
    resultado = n1 * n2 * n3;

    printf("O resultado eh %d \n", resultado);
    return 0;
}