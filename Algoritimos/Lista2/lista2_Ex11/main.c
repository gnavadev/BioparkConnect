#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Uma escola faz o pagamento de seus professores por hora/aula. Faça um algoritmo que solicite ao usuário, o
// nível do professor e a quantidade de horas/aula ele tem na semana. Em seguida, calcule e exiba o salário de
// um professor sabendo que a fórmula para o cálculo do salário é 𝑠𝑠𝑠𝑠𝑠𝑠 = 𝑣𝑣𝑠𝑠𝑠𝑠𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑠𝑠𝑣𝑣𝑣𝑣𝑠𝑠𝑠𝑠 ∗ 𝑞𝑞𝑞𝑞𝑞𝑞𝑣𝑣𝑣𝑣𝑠𝑠𝑠𝑠 ∗ 4.5. O valor
// da hora/aula do professor é dado em função do seu nível:
// Professor Nível 1 R$12,00 por hora/aula
// Professor Nível 2 R$17,00 por hora/aula
// Professor Nível 3 R$25,00 por hora/aula

float sal, valorHoraAula, qtdAula;
int nivel;

int main()
{
    printf("Digite no nivel do professor: ");
    scanf("%d", &nivel);

    if (nivel == 1)
        valorHoraAula = 12;
    if (nivel == 2)
        valorHoraAula = 17;
    if (nivel == 3)
        valorHoraAula = 25;
    printf("Quantas horasAula na semana?: ");
    scanf("%f", &qtdAula);

    sal = valorHoraAula * qtdAula * 4.5;

    printf("Seu salario ficou: %.2f\n", sal);

    return 0;
}