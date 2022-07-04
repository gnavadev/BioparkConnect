#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int A, B;

void calculaFerradura()
{
    B = A * 4;
}

int main()
{
    printf("Quantos Cavalos foram comprados? :");
    scanf("%d", &A);
    calculaFerradura();
    printf("Vao precisa de %d ferraduras \n", B);
    return 0;
}