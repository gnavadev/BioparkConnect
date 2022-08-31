#include <stdio.h>

int main()
{
    int repetir = 1;
    int opcao;

    while (repetir == 1)
    {
        printf("Selecione uma Opcao: \n 1 - Reservar Poltrona \n 2 - Comprar Poltrona \n 3 - Cancelar Reserva \n 4 - Sair \n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Reserva de Poltrona \n");
            break;
        case 2:
            printf("Compra de Poltrona \n");
            break;
        case 3:
            printf("Cancelar Reserva \n");
            break;
        case 4:
            printf("Sair \n");
            break;

        default:
            break;
        }

        printf("Deseja realizar mais alguma operacao? || 1-Sim , 2-Nao \n");
        scanf("%d", &repetir);
    }
}