#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float nota1, nota2, nota3, media;

void calculo()
{
    media = ((nota1 * 1) + (nota2 * 2) + (nota3 * 3)) / 6;
}

int main()
{
    printf("Digite a primeira nota : ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota : ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota : ");
    scanf("%f", &nota3);
    calculo();

    printf("Nota final : %.2f \n", media);

    if (media >= 7.00)
    {
        printf("Parabens, voce passou! \n");
    }
    else
    {
        printf("Eita, nao foi dessa vez \n");
    }
    return 0;
}