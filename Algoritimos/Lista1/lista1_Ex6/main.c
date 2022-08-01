#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float valorQuilo = 12.00, pesoPrato, valor;

void calculo()
{
    valor = valorQuilo * pesoPrato;
}

int main()
{
    printf("Digite o peso do prato: ");
    scanf("%f", &pesoPrato);
    calculo();

    printf("Voce tera que pagar R$%.2f \n", valor);
    return 0;
}