#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contador, numeros; // variável de controle do loop
    int acumulador = 99999;
    char nome[50], menorNome[50];

    for (contador = 1; contador <= 10; contador++)
    {

        printf("Digite seu nome: ");
        scanf("%s", nome);
        printf("Digite sua idade: ");
        scanf("%d", &numeros);

        if (numeros < acumulador)
        {
            acumulador = numeros;
            for (int j = 0; j < 50; j++)
            {
                menorNome[j] = nome[j];
            }
        }
    }

    printf("O nome da pessoa mais nova eh: %s \n", menorNome);
    return 0;
}