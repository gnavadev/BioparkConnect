#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float liquido, bruto, horas, horasExtras;
int salarioHora = 10, salarioHoraExtra = 15;

void calculo()
{

    bruto = (horas * salarioHora) + (horasExtras * salarioHoraExtra);
    liquido = bruto - (bruto * 0.1);
}
int main()
{
    printf("Quantas horas NORMAIS voce trabalhou no mes?: ");
    scanf("%f", &horas);
    printf("Quantas horas EXTRAS voce trabalhou no mes?: ");
    scanf("%f", &horasExtras);
    calculo();

    printf("Hoje voce teve %.2f de salario BRUTO e %.2f de salario LIQUIDO \n", bruto, liquido);
    return 0;
}