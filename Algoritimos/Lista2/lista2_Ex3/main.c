#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int A, B, C;

void calculo()
{
    if (A == B)
        C = A + B;
    else
        C = A * B;
}

int main()
{
    printf("Digite um numero: \n");
    scanf("%d", &A);
    printf("Digite o Segundo: \n");
    scanf("%d", &B);
    calculo();

    printf("O resultado eh %d: \n", C);

    return 0;
}