#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float chip = 3.50, alimento = 7.00, total;
int galinhas;

void calculo()
{
    total = (galinhas * chip) + (galinhas * alimento);
}
int main()
{
    printf("Quantas galinhas voce tem?: ");
    scanf("%d", &galinhas);

    calculo();

    printf("Voce gasta %.2f com galinhas. \n", total);
    return 0;
}