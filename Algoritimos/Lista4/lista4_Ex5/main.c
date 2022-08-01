#include <stdio.h>
int main()
{
    int vetor[10];
    int inferior = 0, igual = 0, superior = 0, i;
    /* Ler vetores a e b */
    printf("Adicione os elmentos do vetor a:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);

        if (vetor[i] < 15)
            inferior = inferior + vetor[i];

        else if (vetor[i] == 15)
            igual = igual + 1;

        else if (vetor[i] > 15)
            superior = (superior + vetor[i]) / 10;
    }

    printf("Soma dos elementos menores que 15 = %d\n", inferior);
    printf("Numero de elementos == 15 = %d\n", igual);
    printf("Media dos elementos maiores que 15 = %d\n", superior);

    return 0;
}