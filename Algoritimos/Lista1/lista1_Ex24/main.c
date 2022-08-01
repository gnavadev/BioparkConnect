#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float resultadoAgua, resultadoSuco, litrosRefresco;
int agua = 8, suco = 2;

void calculo()
{

    resultadoAgua = litrosRefresco * agua;
    resultadoSuco = litrosRefresco * suco;
}
int main()
{
    printf("Quantos litros de suco voce quer fazer?: ");
    scanf("%f", &litrosRefresco);
    calculo();

    printf("Para fazer %.2f litros de refreso, voce precisa de %.2f litros de agua e %.2f litros de suco. \n", litrosRefresco, resultadoAgua, resultadoSuco);
    return 0;
}