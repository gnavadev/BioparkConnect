#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int dia, mes, diasPassados, diasDoMes = 30;

void validaMes()
{
    while (mes > 12)
    {
        printf("ERRO : Ja viu mes 13? \n");
        printf("Digite um mes de 1 a 12 :");
        scanf("%d", &mes);
    }
}
void validaDia()
{
    while (dia > 30)
    {
        printf("ERRO : Dia Invalido \n");
        printf("Digite um dia de 1 a 30 :");
        scanf("%d", &dia);
    }
}

void calculo()
{
    diasPassados = (mes * 30) + dia;
}

int main()
{
    printf("Digite um dia de 1 a 30 :");
    scanf("%d", &dia);
    validaDia();
    printf("Digite um mes de 1 a 12 :");
    scanf("%d", &mes);
    validaMes();
    calculo();

    printf("Ja se passaram %d dias desde o inicio do ano \n", diasPassados);
    return 0;
}