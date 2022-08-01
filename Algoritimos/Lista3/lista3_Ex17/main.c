#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float gastoBebidas, pesoProduto, acumulador = 0, pagar = 0, quilo = 23.59;
    int quantidade, contador;

    printf("Quantos Clientes?: ");
    scanf("%d", &quantidade);

    for (contador = 1; contador <= quantidade; contador++)
    {

        printf("Qual o peso do produto? ");
        scanf("%f", &pesoProduto);
        printf("Quanto foi gasto em Bebidas?: ");
        scanf("%f", &gastoBebidas);

        acumulador = gastoBebidas + (pesoProduto * quilo);
    }
    printf("o total ficou: %.2f , quanto voce quer pagar?: ", acumulador);
    scanf("%f", &pagar);
    acumulador = acumulador - pagar;

    while (acumulador > 0.1)
    {
        printf("voce ainda tem que pagar: %.2f, quanto voce quer pagar?: ", acumulador);
        scanf("%f", &pagar);
        acumulador = acumulador - pagar;
    }

    printf("Obrigado por vir!\n");
    return 0;
}