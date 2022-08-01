#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float X, Y, Z, lados1, lados2, lados3;

int main()
{

    printf("Digite um lado: ");
    scanf("%f", &X);
    printf("Digite um lado: ");
    scanf("%f", &Y);
    printf("Digite um lado: ");
    scanf("%f", &Z);

    if (X + Y > Z && X + Z > Y && Z + Y > Z)
    {
        if (X == Y && Y == Z)
            printf("O triângulo eh Equilátero!\n");
        else if ((X == Y || X == Z || Y == Z))
            printf("O triângulo eh Isosceles!\n");
        else if (X != Y && Y != Z)
            printf("O triângulo eh Escaleno!\n");
    }
    else
        printf("Triangulo Invalido \n");

    return 0;
}