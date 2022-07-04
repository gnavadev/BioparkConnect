#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float fixo, vendas, comissao, final;

void calculo()
{

    comissao = (vendas * 0.04);
    final = fixo + comissao;
}

int main()
{
    printf("digite o seu salario fixo: ");
    scanf("%f", &fixo);
    printf("digite o quanto vendeu: ");
    scanf("%f", &vendas);
    calculo();

    printf("Voce teve %.2f de comissao e %.2f de salario fixo, com o total de %.2f \n", comissao, fixo, final);
    return 0;
}