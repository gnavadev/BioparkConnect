#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contador; // variável de controle do loop
    char nome[50];

    printf("Digite o seu nome: ");
    scanf("%s", nome);
    for (contador = 1; contador <= 10; contador++)
    {
        printf("\n %s %d ", nome, contador);
    }
    return 0;
}