#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float quilos, gramas;

void calculo()
{
    // calculo
    gramas = quilos * 1000;
}
int main()
{
    printf("Quanto voce pesa?: ");
    scanf("%f", &quilos);
    calculo();
    printf("Voce tem %.2f quilos ou %.2f gramas\n", quilos, gramas);
    return 0;
}