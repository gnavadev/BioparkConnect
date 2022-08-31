#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int i = 0;
    int tam = 0;
    char texto[200];

    printf("Digite uma ou mais palavras: ");
    fgets(texto, 200, stdin);
    char tamUtil = strlen(texto);

    for (i = 0; i < tamUtil; i++)
    {
        printf("%c \n", texto[i]);
    }
}