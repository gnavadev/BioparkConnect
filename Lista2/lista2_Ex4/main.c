#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int A, B;

void calculo()
{
    if (A < 0)
    {
        B = A * 3;
        printf("O numero negativo foi triplicado: %d \n", B);
    }
    else
    {
        B = A * 2;
        printf("O numero positivo foi dobrado: %d \n", B);
    }
}

int main()
{

    printf("Digite um numero: \n");
    scanf("%d", &A);
    calculo();

    return 0;
}