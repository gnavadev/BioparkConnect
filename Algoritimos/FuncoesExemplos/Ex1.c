#include <stdio.h>
#include <stdlib.h>

void lervetor(int vet[], int tam)
{
    int i;
    vet = (int *)malloc(sizeof(int) * tam); // sizeof(int) * tam pega o tamanho do que o sistema operacional
    // considera um inteiro e multiplica pelo tamanho que foi passado para o argumento.
    // quantos bytes da um int, cada casa do vetor tem 1 int dentro.

    for (i = 0; i < tam; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < tam; i++)
        printf("%d ", vet[i]);
    printf("\n\n");
}

int main()
{
    int *vet;

    lervetor(vet, 12);
}

// Ver codigo do profressor
