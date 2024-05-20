/***************************************************************************************************
* Data atual: 12/05/2024                                                                           *
* Instituição de Ensino: UniRuy - Wyden                                                            *
* Disciplina: Introdução à Programação Estruturada em C                                            *
* Professor: Pedro Kislansky                                                                       *
* Aluno: Dimitrius Khouri                                                                          *
* Descrição: Desenvolva um programa que verifique se um número é positivo, negativo ou zero.       *
***************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero = 0;

    printf("Digite um número qualquer: ");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("O número é zero.\n");
    } else if (numero > 0) {
        printf("O número é positivo.\n");
    } else {
        printf("O número é negativo.\n");
    }

    return 0;

}
