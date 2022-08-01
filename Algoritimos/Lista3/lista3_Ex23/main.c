// 23. Foi feita uma pesquisa de canal de TV em várias casas da cidade de João Câmara. Para cada
// casa visitada, foi preenchida uma ficha contendo o número do canal (3, 5, 8, 11 ou 13) e o número
// de pessoas que estavam assistindo o canal naquela casa. Faça um algoritmo que:
// a. Leia a informação da quantidade de casas participantes da pesquisa.
// b. Receba as informações coletadas em cada uma das casas participantes da pesquisa:
// c. A informação do canal que estava sendo assistido.
// d. A quantidade de pessoas que estava assistindo aquele canal na casa.
// e. Contabilize quantas pessoas estava assistindo cada canal (leve em conta a
// quantidade de pessoas que assistia cada canal em cada casa)
// g. Ao finalizar a leitura de todas as fichas, escreva o número do canal e sua respectiva porcentagem de audiência.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float canal3 = 0, canal5 = 0, canal8 = 0, canal11 = 0, canal13 = 0;
int canal = 0, contador, quantidade, acumuladorPessoas = 0, pessoas = 0;
float canal3p = 0, canal5p = 0, canal8p = 0, canal11p = 0, canal13p = 0;

int main()
{

    printf("Quantas casas existem?: ");
    scanf("%d", &quantidade);

    for (contador = 1; contador <= quantidade; contador++)
    {
        printf("Quantas pessoas existem na casa?: ");
        scanf("%d", &pessoas);
        acumuladorPessoas = acumuladorPessoas + pessoas;
        printf("Qual canal estavam assistindo?: \nOpcoes: 3,5,8,11,13: ");
        scanf("%d", &canal);

        if (canal == 3)
        {
            canal3 = canal3 + pessoas;
        }
        else if (canal == 5)
        {
            canal5 = canal5 + pessoas;
        }
        else if (canal == 8)
        {
            canal8 = canal8 + pessoas;
        }
        else if (canal == 11)
        {
            canal11 = canal11 + pessoas;
        }
        else if (canal == 13)
        {
            canal13 = canal13 + pessoas;
        }
        else
        {
            printf("Canal Invalido! \n");
        }
    }

    canal3p = (canal3 / acumuladorPessoas) * 100;
    canal5p = (canal5 / acumuladorPessoas) * 100;
    canal8p = (canal8 / acumuladorPessoas) * 100;
    canal11p = (canal11 / acumuladorPessoas) * 100;
    canal13p = (canal13 / acumuladorPessoas) * 100;

    printf("A porcentagem de espectadores nos canais sao: \n");
    printf("Canal3: %.2f \n", canal3p);
    printf("Canal5: %.2f \n", canal5p);
    printf("Canal8: %.2f \n", canal8p);
    printf("Canal11: %.2f \n", canal11p);
    printf("Canal13: %.2f \n", canal13p);
    return 0;
}