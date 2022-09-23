#include <stdio.h>
#include <stdlib.h>
#define MAX 100
struct pessoa
{
    int rg;
    int cpf;
    char nome[80];
};
void ordena(struct pessoa cadastro[], int tam)
{
    int i, j;
    struct pessoa aux;
    for (i = tam - 1; i >= 1; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (cadastro[j].rg > cadastro[j + 1].rg)
            {
                aux = cadastro[j];
                cadastro[j] = cadastro[j + 1];
                cadastro[j + 1] = aux;
            }
        }
    }
}
int busca(struct pessoa cadastro[], int tam, int rg)
{
    int direita, esquerda, meio, encontrado = 0;
    direita = tam - 1;
    esquerda = 0;
    while (esquerda <= direita && !encontrado)
    {
        meio = (direita + esquerda) / 2;
        if (cadastro[meio].rg == rg)
            encontrado = 1;
        else if (rg < cadastro[meio].rg)
            direita = meio - 1;
        else if (rg > cadastro[meio].rg)
            esquerda = meio + 1;
    }
    if (encontrado)
        return meio;
    else
        return -1;
}

int main()
{
    int nPessoas, rg, res;
    struct pessoa cadastro[MAX];
    printf("Digite quantas pessoas quer registar: ");
    scanf("%d", &nPessoas);
    printf("Digite o RG que quer pesquisar: ");
    scanf("%d", &rg);

    for (int i = 0; i < nPessoas; i++)
    {
        printf("Digite um RG para Preencher a Lista: ");
        scanf("%d", &cadastro[i].rg);
        printf("Digite um CPF para Preencher a Lista: ");
        scanf("%d", &cadastro[i].cpf);
        fflush(stdin);
        printf("Digite um Nome para Preencher a Lista: ");
        gets(cadastro[i].nome);
    }

    ordena(cadastro, nPessoas);
    res = busca(cadastro, nPessoas, rg);
    if (res == -1)
        printf("A pessoa nao esta cadastrada! \n");
    else
        printf("A pessoa esta no cadastro na posicao %d\n", res);
    return 0;
}