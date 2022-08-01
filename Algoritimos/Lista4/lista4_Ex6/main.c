#include <stdio.h>

void main()
{
    const n = 10; // tamanho do vetor
    int idade[n]; // declarando o vetor para armazenar as idades de um grupo de "n" pessoas
    int i;        // indice (ou posicao)

    // declarando as variaveis que definem a menor e a maior idade respectivamente
    int menor, posmenor, maior, posmaior;

    for (i = 0; i < n; i++)
    {
        printf("Informe a idade da %2da. pessoa de %d: ", (i + 1), n);
        scanf("%d", &idade[i]);
    }

    // usa a primeira idade informada como referencia
    menor = idade[0];
    posmenor = 0;
    maior = idade[0];
    posmaior = 0;

    // compara com as demais idades verificando a menor e a maior idades
    for (i = 1; i < n; i++)
    {
        if (idade[i] < menor)
        {
            menor = idade[i];
            posmenor = i;
        }
        else if (idade[i] > maior)
        {
            maior = idade[i];
            posmaior = i;
        }
    }

    printf("\nMenor idade = %d informada na posicao %d.", menor, (posmenor + 1));
    printf("\nMaior idade = %d informada na posicao %d.", maior, (posmaior + 1));
}