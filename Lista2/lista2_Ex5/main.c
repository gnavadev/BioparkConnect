#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int A;

void calculo()
{
    if (A % 2 == 0)
    {
        A = A + 5;
        printf("O numero eh par: %d \n", A);
    }
    else
    {
        A = A + 8;
        printf("O numero eh impar: %d \n", A);
    }
}

int main()
{
    printf("Digite um numero:");
    scanf("%d", &A);
    calculo();
    return 0;
}