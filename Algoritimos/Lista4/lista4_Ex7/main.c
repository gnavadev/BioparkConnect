#include <stdio.h>
#include <stdlib.h>

// Ler 2 vetores, R de 5 elementos e S de 10 elementos. Gere um vetor X que possua os elementos comuns a
// R e a S. Considere que no mesmo vetor não haverá números repetidos. Escrever o vetor X

int main()
{
    int R[5] = {1, 2, 3, 4, 5};
    int S[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int X[5] = {};
    int numeros_diferentes = 0;
    int numeros_comuns = 0;
    int i = 0;
    int loop = 0;

    for (i = 0; i < 10; i++)
    {
        if (R[i] == S[i])
        {
            X[i] = S[i];
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

    printf("Existem %d numeros que nao sao comuns \n", numeros_diferentes);
}