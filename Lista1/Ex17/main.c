#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float celsius, fahren;

void calculo()
{
    fahren = (celsius * 9 / 5) + 32;
}
int main()
{
    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &celsius);
    calculo();

    printf("A temperatura em F eh: %.2f \n", fahren);
    return 0;
}