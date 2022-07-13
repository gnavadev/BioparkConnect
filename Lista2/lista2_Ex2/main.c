#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int A;

void calculo()
{
    if (A % 2 == 0)
        printf("O numero eh par \n");
    else
        printf("O numero eh impar \n");
}

int main()
{
    printf("Digite um numero:");
    scanf("%d", &A);
    calculo();
    return 0;
}