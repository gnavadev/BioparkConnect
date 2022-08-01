#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float precoProduto, total = 0.00;
    int quantidade, contador;

    printf("Quantos produtos foram comprados?: ");
    scanf("%d", &quantidade);

    for (contador = 1; contador <= quantidade; contador++)
    {

        printf("Qual o preco do produto? ");
        scanf("%f", &precoProduto);

        total = total + precoProduto;
    }

    printf("O total ficou: R$%.2f\n", total);
    return 0;
}