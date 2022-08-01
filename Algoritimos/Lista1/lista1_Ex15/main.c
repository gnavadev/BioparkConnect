#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float carlos, andre, felipe, conta;

void calculo()
{
    carlos = conta / 3;
    andre = conta / 3;

    carlos = floor(carlos);
    andre = floor(andre);

    felipe = conta - carlos - andre;
}
int main()
{
    printf("Digite o valor da conta: ");
    scanf("%f", &conta);

    calculo();

    printf("Carlos deve pagar: %.2f \n Andre deve pagar: %.2f \n Felipe deve pagar: %.2f \n ", carlos, andre, felipe);
    return 0;
}