#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int centena, dezena, unidade;
char centenas[10] = "Centena";
char unidades[10] = "Unidade";
char dezenas[10] = "Dezena";
char ch = 's';
void calculo()
{

    while (unidade >= 100) // 360 dias porque exercicio exige que cada mes tenha 30 dias
    {
        centena = centena + 1;
        unidade = unidade - 100;
    }

    while (unidade > 10 && unidade < 100)
    {
        dezena = dezena + 1;
        unidade = unidade - 10;
    }

    if (centena > 1)
    {
        strncat(centenas, &ch, 1);
    }

    if (unidade > 1)
    {
        strncat(unidades, &ch, 1);
    }

    if (dezena > 1)
    {
        strncat(dezenas, &ch, 1);
    }
}

int main()
{

    printf("Digite um Numero: ");
    scanf("%d", &unidade);
    calculo();

    printf("Foram %d %s %d %s e %d %s  \n", centena, centenas, dezena, dezenas, unidade, unidades);
    return 0;
}