#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int contarPalavras(char texto[]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Variaveis locais a main

    int TAM = 200;
    char texto[TAM];

    printf("Digite o texto: ");
    gets(texto);

    printf("O numero de palavras eh %d", contarPalavras(texto));
}

int contarPalavras(char texto[])
{
    int posicao = 0;
    int numPalavras = 0;
    int tamUtil;
    int encontrouletra;

    tamUtil = strlen(texto);

    while (posicao < tamUtil)
    {
        // ignora espacoes em branco
        while (posicao < tamUtil && texto[posicao] == ' ')
        {
            encontrouletra = 0;
            posicao++;
        }

        // pular as letras ate o proximo espaco em branco

        while (posicao < tamUtil && toupper(texto[posicao]) >= 'A' && toupper(texto[posicao]) <= 'Z')
        {
            posicao++;
            encontrouletra = 1;
        }

        if (encontrouletra == 1)
        {
            numPalavras++;
        }
    }

    return numPalavras;
}