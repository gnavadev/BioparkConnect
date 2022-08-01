#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contador, numero; // variável de controle do loop
    char nome[50];

    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (contador = 1; contador <= numero; contador++)
    {
        printf("\n %s %d ", nome, contador);
        }
    return 0;
}