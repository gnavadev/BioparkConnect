

// Uma loja de animais vende gatos e cachorros. Escreva um algoritmo que leia a quantidade de
// animais da loja e, para cada animal, leia a informação da espécie do animal (se é gato ou
// cachorro). Ao final, exiba a quantidade de animais que são gatos e a quantidade de animais que
// são cachorros existentes na loja

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int quantidade, especie, contador, cachorros = 0, gatos = 0;

    printf("Quantos animais existem?: ");
    scanf("%d", &quantidade);

    for (contador = 1; contador <= quantidade; contador++)
    {

        printf("Qual especie? 1-Gato , 2-Cachorro: ");
        scanf("%d", &especie);

        if (especie == 1)
        {
            gatos = gatos + 1;
        }
        else if (especie == 2)
        {
            cachorros = cachorros + 1;
        }
    }

    printf("Na sua loja tem %d gato e %d cachorro \n ", gatos, cachorros);

    return 0;
}