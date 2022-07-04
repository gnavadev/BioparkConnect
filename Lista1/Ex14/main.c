#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float raio, pi = 3.14, area;

void calculo()
{
    area = pi * (pow(raio, 2));
}
int main()
{
    printf("Digite a area da pizza: ");
    scanf("%f", &raio);
    calculo();

    printf("A area da sua pizza eh: %.2f \n", area);
    return 0;
}