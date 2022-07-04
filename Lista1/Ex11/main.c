#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int anos, meses, diasNormais, i;
char ano[5] = "Ano";
char dia[5] = "Dia";
char mes[6] = "Mes";
char chm = 'e';
char ch = 's';
void calculo()
{

    while (diasNormais >= 360) // 360 dias porque exercicio exige que cada mes tenha 30 dias
    {
        anos = anos + 1;
        diasNormais = diasNormais - 360;
    }

    while (diasNormais > 30 && diasNormais < 360)
    {
        meses = meses + 1;
        diasNormais = diasNormais - 30;
    }

    if (anos > 1)
    {
        strncat(ano, &ch, 1);
    }

    if (diasNormais > 1)
    {
        strncat(dia, &ch, 1);
    }

    if (meses > 1)
    {
        strncat(mes, &chm, 1);
        strncat(mes, &ch, 1);
    }
}

int main()
{

    printf("Quantos dias sem acidentes?: ");
    scanf("%d", &diasNormais);
    calculo();

    printf("Foram %d %s %d %s e %d %s sem acidentes \n", anos, ano, meses, mes, diasNormais, dia);
    return 0;
}