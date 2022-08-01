#include <stdio.h>
#include <stdlib.h>

double x, y;
double soma, diferenca, multiplicacao, divisao;

void funcaoCalculo()
{
    soma = x + y;

    if (x > y)
    {
        diferenca = x - y;
    }
    else
    {
        diferenca = y - x;
    }

    multiplicacao = x * y;
    divisao = x / y;
}

int main()
{
    printf("Digite o Primeiro numero: ");
    scanf("%lf", &x);
    printf("Digite o Segundo numero: ");
    scanf("%lf", &y);

    funcaoCalculo();

    printf("Soma: %.2lf , Diferenca: %.2lf , Multiplicacao: %.2lf , Divisao: %.2lf \n", soma, diferenca, multiplicacao, divisao);
}