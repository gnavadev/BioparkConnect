#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float salario, aumento, imposto;

void calculo()
{
    aumento = salario + (salario * 0.15);
    imposto = aumento - (aumento * 0.08);
}
int main()
{
    printf("Digite o salario do Funcionario: ");
    scanf("%f", &salario);
    calculo();

    printf("Salario: %0.2f \n", salario);
    printf("Depois do aumento: %0.2f \n", aumento);
    printf("Depois do aumento com imposto: %0.2f \n", imposto);
    return 0;
}