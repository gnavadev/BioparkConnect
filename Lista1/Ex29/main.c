#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float preco, novopreco;

void calculo()
{
    novopreco = preco - (preco * 0.1);
}
int main()
{
    printf("Digite o preco: ");
    scanf("%f", &preco);
    calculo();

    printf("O preco novo eh: R$%.2f \n", novopreco);
    return 0;
}
