#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float saldoMedio, credito;

int main()
{

    printf("Digite o seu saldo médio: ");
    scanf("%f", &saldoMedio);

    if (saldoMedio > 0 && saldoMedio <= 200)
        printf("Nenhum Credito \n");
    else if (saldoMedio > 200 && saldoMedio <= 400)
        credito = (saldoMedio * 0.2);
    else if (saldoMedio > 400 && saldoMedio <= 600)
        credito = (saldoMedio * 0.3);
    else
        credito = (saldoMedio * 0.4);

    printf("Seu saldo medio eh de: %.2f e o seu credito eh de %.2f \n", saldoMedio, credito);

    return 0;
}