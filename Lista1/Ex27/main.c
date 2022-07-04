#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float resultado, n1, n2;
;

int main()
{

    printf("digite 2 numeros: ");
    if (scanf("%f %f", &n1, &n2) == 2)
    {
    }
    else
    {
        puts("Error. Please supply 2 integers");
    }
    resultado = n1 / n2;

    printf("O resultado eh %f \n", resultado);
    return 0;
}