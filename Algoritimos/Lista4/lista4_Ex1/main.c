#include <stdio.h>
int main()
{
    int a[10], b[10]; /* vetores adicionados */
    int c[10];        /* vetor resultante */
    int i;
    /* Ler vetores a e b */
    printf("Adicione os elmentos do vetor a:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    printf("Adicione os elmentos do vetor b:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &b[i]);
    /* Adição de vetores */
    for (i = 0; i < 10; i++)
        c[i] = a[i] + b[i];
    /* resultado */
    printf("Resultado:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", c[i]);

    return 0;
}