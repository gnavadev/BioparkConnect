#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Ler um vetor R de 5 elementos contendo o gabarito da LOTO.
// A seguir ler um vetor A de 10 elementos contendo uma aposta. A seguir imprima quantos pontos fez o apostador.

int main()
{
    int R[5] = {1, 2, 3, 4, 5};
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int X[5] = {};
    int numeros_diferentes = 0;
    int numeros_comuns = 0;
    int i = 0;
    int loop = 0;

    for (i = 0; i < 10; i++)
    {
        if (R[i] == A[i])
        {
            X[i] = A[i];
            numeros_comuns++;
        }
        else
        {
            numeros_diferentes++;
        }
    }

    for (loop = 0; loop < numeros_comuns; loop++)
    {
        printf("%d ", X[loop]);
    }

    printf("Voce errou %d numeros \n", numeros_diferentes);
    printf("Voce acertou %d numeros \n", numeros_comuns);
}