#include <stdio.h>
int main()
{
    int vetor[10];
    int par = 0, impar = 0, maior = 0, menor = 0, i;
    /* Ler vetores a e b */
    printf("Adicione os elmentos do vetor a:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0)
            par = par + 1;

        else if (vetor[i] % 2 != 0)
            impar = impar + 1;

        else if (vetor[i] > 50)
            maior = maior + 1;

        else if (vetor[i] < 7)
            menor = menor + 1;
    }

    printf("Numeros pares = %d\n", par);
    printf("Numeros impares = %d\n", impar);
    printf("Numeros maiores que 50 = %d\n", maior);
    printf("Numeros menores que 7 = %d\n", menor);

    return 0;
}