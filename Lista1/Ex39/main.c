#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float c1, c2, resto;
int main()
{
    c1 = 200 + (200 * 0.02);
    c2 = 120 + (120 * 0.02);
    resto = 1200 - c1 - c2;

    printf("Joao ficou com: %.2f\n", resto);
    return 0;
}