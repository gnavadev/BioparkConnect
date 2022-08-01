#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float nota1, nota2, media;

void calculo()
{
    media = ((nota1 * 2) + (nota2 * 3)) / 5;
}

int main()
{
    printf("Digite a primeira nota : ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota : ");
    scanf("%f", &nota2);
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