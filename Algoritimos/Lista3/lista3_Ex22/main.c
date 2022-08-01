// 22. Um viajante decidiu se aventurar e percorrer toda a BR 101 de carro a partir do quilômetro 0 até
// ultrapassar o quilômetro 4000, parando em várias cidades durante o percurso
// a. Crie um algoritmo que, em cada cidade que o viajante parar, leia a informação da quilometragem percorrida
// b. adicione ao valor da quilometragem total.
// c. Encerre o algoritmo quando o valor da quilometragem total percorrida for igual a 4000
// d. Encerre o algoritmo quando o valor da quilometragem total percorrida ultrapassar os 4000 km

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int parada;
float kilometragem = 0, percorrida = 0;

int main()
{

    while (percorrida < 4000)
    {

        printf("Deseja Parar? 1-Sim, 2-Nao \n");
        scanf("%d", &parada);

        if (parada == 1)
        {
            printf("Voce Parou! \n");
            printf("Quantos quilometros voce percorreu?: ");
            scanf("%f", &kilometragem);

            percorrida = percorrida + kilometragem;
        }
    }

    printf("Voce percorreu %.2f Kilometros \n", percorrida);
    return 0;
}