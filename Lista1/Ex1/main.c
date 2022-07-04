#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int A, B, C;

void calculaArea()
{
    C = A * B;
}

int main()
{
    printf("Digite o Primeiro Lado :");
    scanf("%d", &A);
    printf("Digite o Segundo Lado :");
    scanf("%d", &B);
    calculaArea();
    printf("A area do terreno eh %d \n", C);
    return 0;
}