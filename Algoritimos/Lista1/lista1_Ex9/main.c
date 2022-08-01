#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pequena, media, grande, total;

void calculo()
{

    total = ((pequena * 10) + (media * 12) + (grande * 15));
}

int main()
{
    printf("Quantas Camisetas pequenas? :");
    scanf("%d", &pequena);
    printf("Quantas Camisetas Medias? :");
    scanf("%d", &media);
    printf("Quantas Camisetas Grandes? :");
    scanf("%d", &grande);

    calculo();

    printf("O valor total da sua compra eh : %d \n", total);
    return 0;
}