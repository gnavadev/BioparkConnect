#include <stdio.h>

struct Data
{
    int dia;
    int mes;
    int ano;
};

void ordena(struct Data vet[], int tam);
void printVet(struct Data vet[], int n);

int main()
{
    int i;
    int TAM;
    printf("Digite quantas Datas quer registar: ");
    scanf("%d", &TAM);

    struct Data temp[TAM];

    for (i = 0; i < TAM; i++)
    {
        printf("Digite o Dia [%d]: ", i);
        scanf("%d", &temp[i].dia);

        printf("Digite o Mes [%d]: ", i);
        scanf("%d", &temp[i].mes);

        printf("Digite o ano da Data [%d]: ", i);
        scanf("%d", &temp[i].ano);
    }

    ordena(temp, TAM);
}

void ordena(struct Data vet[], int tam)
{
    int i, j;
    struct Data temp;

    for (i = 0; i < tam - 1; i++)
    {
        for (j = 0; j < (tam - 1 - i); j++)
        {
            if (vet[j].dia > vet[j + 1].dia)
            {
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
            if (vet[j].mes > vet[j + 1].mes)
            {
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }

            if (vet[j].ano > vet[j + 1].ano)
            {
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }

    printVet(vet, tam);
}

void printVet(struct Data vet[], int n)
{

    int i, j;
    struct Data temp;

    for (i = 0; i < n; i++)
    {
        printf("DATA[%d]: %d/%d/%d \n", i, vet[i].dia, vet[i].mes, vet[i].ano);
    }
}