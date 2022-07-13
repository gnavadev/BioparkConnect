#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int fat = 1, x; // variável de controle do loop

    printf("Digite um numero: ");
    scanf("%d", &x);

    while (x > 0)
    {
        fat = fat * x;
        x--;
    }

    printf("O valor do fatorial eh: %d\n", fat);
    return 0;
}