#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Ler um vetor D de 10 elementos. Retire todos os valores nulos ou negativos do vetor D. Escrever o vetor
// após a retirada dos nulos e negativos.

void bubbleSort(int arr[], int num)
{

    int x, y, temp;

    for (x = 0; x < num - 1; x++)
    {

        for (y = 0; y < num - x - 1; y++)
        {

            if (arr[y] > arr[y + 1])
            {

                temp = arr[y];

                arr[y] = arr[y + 1];

                arr[y + 1] = temp;
            }
        }
    }
}

int main()
{

    int arr[10] = {11, -1, -2, -3, 4, 5, -6, 7, 8, 9}, position = 0, c;
    int n = 10, x;

    bubbleSort(arr, n);

    printf("Ordenando o Vetor: ");

    for (x = 0; x < n; x++)
    {

        printf("%d  ", arr[x]);
    }

    while (arr[position] <= 0)
    {
        for (c = position; c < n - 1; c++)
        {
            arr[c] = arr[c + 1];
        }
        n--;
    }
    printf("\nVetor Resultante:\n");
    for (c = 0; c < n; c++)
        printf("%d  ", arr[c]);
    return 0;
}
