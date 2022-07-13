// O restaurante da questão 17 realiza reservas de mesas através de ligações telefônicas e possui 50
// mesas disponíveis para reserva. Dessas mesas, 25 são na área de fumantes e 25 na área de não
// fumantes. Para cada ligação recebida, o restaurante deve verificar se a reserva é para a mesa na
// área de fumantes ou de não fumantes e contabilizar a quantidade de mesas restantes disponíveis
// em cada área. Construa um algoritmo que realize a reserva das mesas e encerre a execução
// quando não houver mais mesas disponíveis (nem na área de fumantes, nem na área de não
// fumantes).

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float acumulador = 0, pagar = 0, quilo = 23.59;
    int contador = 0, mesaFumantes = 0, mesaNormais = 0, ligacao, tipoMesa, mesas = 0;

    printf("Ligacao de reserva? 1-Sim 2-Nao: \n");
    scanf("%d", &ligacao);

    while (ligacao == 1 && contador <= 50)
    {

        contador++;
        printf("Voce vai querer uma Mesa Normal, Ou Mesa de Fumante? 1-Normal, 2-Fumante: ");
        scanf("%d", &tipoMesa);

        if (tipoMesa == 1 && mesaNormais <= 25)
        {
            mesaNormais = mesaNormais + 1;
            printf("Reserva feita em mesa normal! \n");
        }
        else if (tipoMesa == 1 && mesaNormais > 25)
        {
            printf("Acabaram as mesas normais! \n");
        }
        if (tipoMesa == 2 && mesaFumantes <= 25)
        {
            mesaFumantes = mesaFumantes + 1;
            printf("Reserva feita em mesa de fumante! \n");
        }
        else if (tipoMesa == 2 && mesaFumantes > 25)
        {
            printf("Acabaram as mesas de fumantes! \n");
        }

        printf("Ligacao de reserva? 1-Sim 2-Nao: \n");
        scanf("%d", &ligacao);
    }

    if (contador > 50)
    {
        printf("resturante Cheio! \n");
    }

    printf("Fim de reserva \n");
    return 0;
}