#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int idade, dias;
char nome[61];

void calculo()
{
    dias = idade * 365;
}

void toUpperCase()
{
    int i = 0;

    for (i = 0; i < nome[i]; i++)
    {
        nome[i] = toupper(nome[i]);
    }
}

int main()
{
    printf("Digite seu Nome :");
    scanf("%s", nome);
    printf("Digite sua Idade :");
    scanf("%d", &idade);
    calculo();
    toUpperCase();

    printf("%s VOCE JA VIVEU %d DIAS \n", nome, dias);
    return 0;
}