#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int A, B;

int main()
{
    printf("Digite o Primeiro numero :");
    scanf("%d", &A);
    printf("Digite o Segundo numero :");
    scanf("%d", &B);

    if (A > B)
        printf("A eh maior \n");
    else if (A < B)
        printf("B eh maor \n");
    else
        printf("Os numeros sao iguais");

    return 0;
}