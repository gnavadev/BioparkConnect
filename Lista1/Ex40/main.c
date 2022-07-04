#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int co, ca;
float hip;

void calculo()
{
    hip = sqrt((pow(co, 2)) + (pow(ca, 2)));
}
int main()
{
    printf("Qual o valor do cateto oposto?: ");
    scanf("%d", &co);
    printf("Qual o valor do cateto adjacente?:");
    scanf("%d", &ca);

    calculo();
    printf("O valor da hipotenusa eh: %.2f", hip);

    return 0;
}