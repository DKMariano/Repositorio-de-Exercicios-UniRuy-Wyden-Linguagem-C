/********************************************************************************************************************
* Data atual: 20/05/2024                                                                                            *
* Instituição de Ensino: UniRuy - Wyden                                                                             *
* Disciplina: Introdução à Programação Estruturada em C                                                             *
* Professor: Pedro Kislansky                                                                                        *
* Aluno: Dimitrius Khouri                                                                                           *
* Descrição: Crie um programa que verifique se um número é divisível por outro.                                     *
********************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int numero1 = 0, numero2 = 0;

    printf("Digite um número: ");
    scanf("%d", &numero1);

    printf("Digite outro número: ");
    scanf("%d", &numero2);

    if (numero2 == 0) {
        printf("Divisão por zero não é permitida.\n");

    }else if (numero1 % numero2 == 0) {
        printf("O %d É divisível por %d.\n", numero1, numero2);
    } else {
        printf("O %d NÃO é divisível por %d.\n", numero1, numero2);
    }

    return 0;
}

