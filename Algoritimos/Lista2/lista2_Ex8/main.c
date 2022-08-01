#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float vista, cartao, prazo, juros, valor, pagar;
int metodo;

int main()
{

    printf("Qual o preco do produto?: ");
    scanf("%f", &valor);
    printf("Como quer Pagar? \n 1- A Vista \n 2- Cartao \n 3- A prazo \n 4- A prazo com juros \n");
    scanf("%d", &metodo);

    if (metodo == 1)
    {
        pagar = valor;
        printf("Voce tera que pagar R$%.2f \n", pagar);
    }
    else if (metodo == 2)
    {
        pagar = valor - (valor * 0.15);
        printf("Voce tera que pagar R$%.2f \n", pagar);
    }
    else if (metodo == 3)
    {
        pagar = valor / 2;
        printf("Voce tera que pagar R$%.2f em 2 Vezes", pagar);
    }
    else if (metodo == 4)
    {
        pagar = (valor + (valor * 0.10)) / 2;
        printf("Voce tera que pagar R$%.2f em 2 Vezes", pagar);
    }
    else
        printf("Valor Invalido \n");

    return 0;
}