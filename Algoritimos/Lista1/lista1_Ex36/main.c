#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float salarioM, salarioF;
int quantidade;

void calculo()
{

    while (salarioF >= salarioM)
    {
        salarioF = salarioF - salarioM;
        quantidade = quantidade + 1;
    }
}

int main()
{
    printf("Qual o salario minimo de referencia?: ");
    scanf("%f", &salarioM);
    printf("Qual o seu salario?: ");
    scanf("%f", &salarioF);
    calculo();

    printf("Voce ganha %d salarios minimos \n", quantidade);
    return 0;
}