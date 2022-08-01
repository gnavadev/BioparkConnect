#include <stdio.h>
#include <math.h>

int A, B, C;

int main()
{
    printf("Digite o primeiro numero: ");
    scanf("%d", &A);
    printf("Digite o segundo numero: ");
    scanf("%d", &B);

    if (A > B)
        C = A - B;
    else if (A < B)
        C = B - A;
    else
        C = A - B;

    printf("A diferenca entre 2 numeros eh de: %d \n", C);
    return 0;
}