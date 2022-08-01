#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, con-
// forme a tabela abaixo. Faça um algoritmo que leia o salário e o cargo de um funcionário e calcule o novo sa-
// lário. Se o cargo do funcionário não estiver na tabela, ele deverá, então, receber 40% de aumento. Mostre o
// salário antigo, o novo salário e a diferença.
// Código Cargo Percentual
// 101 Gerente 10%
// 102 Engenheiro 20%
// 103 Técnico 30%

float salario, novoSalario, aumento, direferenca;
int cargo;

int main()
{
    printf("Qual o seu salario?: \n");
    scanf("%f", &salario);
    printf("Seu cargo? 1 - Gerente, 2- Engenheiro, 3- Técnico: ");
    scanf("%d", &cargo);

    if (cargo == 1)
    {
        aumento = (salario * 0.1);
        novoSalario = aumento + salario;
    }
    else if (cargo == 2)
    {
        aumento = (salario * 0.2);
        novoSalario = aumento + salario;
    }

    else if (cargo == 3)
    {
        aumento = (salario * 0.3);
        novoSalario = aumento + salario;
    }

    else
    {
        aumento = (salario * 0.4);
        novoSalario = aumento + salario;
    }

    printf("Salario Antigo: R$%.2f \n Salario Novo: R$%.2f \n Diferença R$%.2f \n\n", salario, novoSalario, aumento);
    return 0;
}