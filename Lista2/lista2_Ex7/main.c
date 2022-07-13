#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sexo;
float H, R;

int main()
{

    printf("Qual a sua altura?: ");
    scanf("%f", &H);
    printf("Qual o seu sexo? 1 para homem, 2 para mulher: ");
    scanf("%d", &sexo);

    if (sexo == 1)
    {
        R = (72.7 * H) - 58;
    }
    else if (sexo == 2)
    {
        R = (62.1 * H) - 44.7;
    }
    else
        printf("Sexo Invalido \n");

    printf("Seu peso Ideal eh: %.2f\n", R);
}