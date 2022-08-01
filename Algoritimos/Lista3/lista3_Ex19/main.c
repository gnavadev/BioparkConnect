#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contador; // variável de controle do loop
    int acumulador = 99999;
    float menorAltura, maiorAltura, altura;

    for (contador = 1; contador <= 3; contador++)
    {

        printf("Digite sua altura: ");
        scanf("%f", &altura);

        if (altura < acumulador)
        {
            acumulador = altura;

            menorAltura = altura;
        }

        if (altura > acumulador)
        {
            acumulador = altura;

            maiorAltura = altura;
        }
    }

    printf("Maior pessoa: %.2f \n", maiorAltura);
    printf("Menor pessoa: %.2f \n", menorAltura);
    return 0;
}
