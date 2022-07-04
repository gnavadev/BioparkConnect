#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Uma confecção produz X blusas de lã e para isto gasta X novelos. Faça um algoritmo
// para calcular quantos novelos de lã ela gasta por blusa.

int blusa, novelos, quantidade;

void calculo()
{

    quantidade = novelos / blusa;
}

int main()
{
    printf("Quantas blusas voce fez?: ");
    scanf("%d", &blusa);
    printf("Quantos novelos voce utilizou?: ");
    scanf("%d", &novelos);
    calculo();

    printf("Voce gasta %d novelos por blusa. \n", quantidade);
}