#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Num determinado Estado, para transferências de veículos, o DETRAN cobra uma taxa de 1% para carros
// fabricados antes de 1990 e uma taxa de 1.5% para os fabricados de 1990 em diante, a taxa incide sobre o
// valor de tabela do carro. Elabore um algoritmo que leia o ano e o valor de tabela do carro, calcule e informe o
// imposto a ser pago.

float valor, tabela, resultado;
int ano;
void calculo()
{
}
int main()
{
    printf("Digite o ano do veiculo: ");
    scanf("%d", &ano);
    printf("Digite o valor de tabela do carro: ");
    scanf("%f", &valor);

    if (ano < 1990)
    {
        resultado = (valor * 0.01);
    }
    else if (ano >= 1990)
    {
        resultado = (valor * 0.015);
    }

    printf("O valor do imposto eh de: %.2f \n", resultado);
    return 0;
}