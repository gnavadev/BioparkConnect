#include <stdio.h>
int main()
{
    int a[10], b[10]; /* vetores adicionados */
    int i;
    /* Ler vetores a e b */
    printf("Adicione os elmentos do vetor a:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 10; i++)
        b[i] = a[i] * 2;

    printf("Vetor B:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", b[i]);
    return 0;
}