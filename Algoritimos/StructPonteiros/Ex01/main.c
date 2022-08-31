#include <stdio.h>

struct Produto
{
    char nome[80];
    double preco;
    int quantidade;
};

void ordenaPreco(struct Produto vet[], int n);
void ordenaQuant(struct Produto vet[], int n);
void printVet(struct Produto vet[], int n);

int main()
{
    int i;
    int TAM;
    printf("Digite quantos Produtos quer registar: ");
    scanf("%d", &TAM);

    struct Produto temp[TAM];

    for (i = 0; i < TAM; i++)
    {
        printf("Digite o nome do produto: ");
        scanf("%s", temp[i].nome);

        printf("Digite o preco do produto ");
        scanf("%lf", &temp[i].preco);

        printf("Digite a Quantidade de produtos: ");
        scanf("%d", &temp[i].quantidade);
    }
    ordenaPreco(temp, TAM);
    ordenaQuant(temp, TAM);
}

void ordenaPreco(struct Produto vet[], int n)
{
    int i, j;
    struct Produto temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < (n - 1 - i); j++)
        {
            if (vet[j].preco > vet[j + 1].preco)
            {
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }

    printf("Lista ordenada por Preco: \n");
    printVet(vet, n);
}

void ordenaQuant(struct Produto vet[], int n)
{
    int i, j;
    struct Produto temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < (n - 1 - i); j++)
        {
            if (vet[j].quantidade > vet[j + 1].quantidade)
            {
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }

    printf("Lista ordenada por Quantidade: \n");
    printVet(vet, n);
}

void printVet(struct Produto vet[], int n)
{

    int i, j;
    struct Produto temp;

    for (i = 0; i < n; i++)
    {
        printf("Nome: %s Preco: %.2lf Quantidade: %d \n", vet[i].nome, vet[i].preco, vet[i].quantidade);
    }
}