#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float comissao, transacao;

int main(void)
{
    printf("Digite o valor da transacao: ");
    scanf("%f", &transacao);

    if (transacao > 0 && transacao <= 2500)
    {
        comissao = 30 + (transacao * 0.0017);

        if (comissao < 39)
            comissao = 39;
    }
    else if (transacao > 2500 && transacao <= 6250)
        comissao = 56 + (transacao * 0.0066);
    else if (transacao > 6250 && transacao <= 20000)
        comissao = 76 + (transacao * 0.0034);
    else if (transacao > 20000 && transacao <= 50000)
        comissao = 100 + (transacao * 0.0022);
    else if (transacao > 50000 && transacao <= 500000)
        comissao = 155 + (transacao * 0.0011);
    else if (transacao > 500000)
        comissao = 255 + (transacao * 0.0);
    else
        printf("Invalid transacao");

    printf("O valor da sua transacao foi de %.2f e a comissao de %.2f \n", transacao, comissao);
}