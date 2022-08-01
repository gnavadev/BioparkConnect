#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float nota, nota2, media;
    int quantidade, contador;

    printf("Quantos alunos existem?: ");
    scanf("%d", &quantidade);

    for (contador = 1; contador <= quantidade; contador++)
    {

        printf("Qual a primeira nota? ");
        scanf("%f", &nota);
        printf("Qual a segunda nota? :");
        scanf("%f", &nota2);

        media = (nota + nota2) / 2;

        if (media >= 6)
        {
            printf("Parabens, voce passou! \n");
        }
        else
        {
            printf("Voce Reprovou! \n");
        }
    }

    return 0;
}