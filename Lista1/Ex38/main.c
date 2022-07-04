#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int meses, dias, semanas, nascimento, anoAtual, idade;

void calculo()
{
    idade = anoAtual - nascimento;
    meses = idade * 12;
    dias = idade * 365;
    semanas = idade * 52;
}
int main()
{
    printf("Qual o ano atual?: ");
    scanf("%d", &anoAtual);
    printf("Quando voce nasceu?: ");
    scanf("%d", &nascimento);
    calculo();

    printf("Anos: %d meses: %d dias: %d semanas: %d \n", idade, meses, dias, semanas);
    return 0;
}