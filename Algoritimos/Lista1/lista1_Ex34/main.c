#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int area, lado;

int main()
{
    printf("Qual o tamanho dos lados?: ");
    scanf("%d", &lado);

    area = lado * lado;

    printf("A Area do quadrado: %d\n", area);
    return 0;
}