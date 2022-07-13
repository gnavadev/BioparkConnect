#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int item, quantidade;
float valor, valorItem;

// Para uma lanchonete, escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor
// a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item. O cardápio
// é o seguinte:
// Produto Preço

// Cachorro quente R$11,00  1
// Bauru R$ 8,50   2
// Misto Quente R$ 8,00  3
// Hamburger R$ 9,00   44
// Cheeseburger R$10,00
// Refrigerante R$ 4,50

void calculo()
{
}
int main()
{
    printf("O que voce vai querer?: \n 1-Cachorro Quente \n 2-Bauru \n 3-Misto Quente \n 4-Hamburguer \n 5-CheeseBurguer \n 6-Refrigerante \n");
    scanf("%d", &item);
    printf("Quantos voce vai querer?: ");
    scanf("%d", &quantidade);

    if (item == 1)
        valorItem = 11.00;
    else if (item == 2)
        valorItem = 8.50;

    else if (item == 3)
        valorItem = 8.00;

    else if (item == 4)
        valorItem = 9.00;

    else if (item == 5)
        valorItem = 10.00;

    else if (item == 6)
        valorItem = 4.50;

    valor = quantidade * valorItem;

    printf("Seu total eh: %.2f\n", valor);
    return 0;
}