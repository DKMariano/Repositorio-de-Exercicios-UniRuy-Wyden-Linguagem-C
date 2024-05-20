/***************************************************************************************************
* Data atual: 12/05/2024                                                                           *
* Instituição de Ensino: UniRuy - Wyden                                                            *
* Disciplina: Introdução à Programação Estruturada em C                                            *
* Professor: Pedro Kislansky                                                                       *
* Aluno: Dimitrius Khouri                                                                          *
* Descrição:  Crie um programa que calcule a área de um retângulo dado seu lado e altura.          *
************************************************************************************************ */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float base = 0;
    float altura = 0;

    printf("Digite o valor da base do retângulo em cm: ");
    scanf("%f", &base);

    printf("Digite o valor da altura do retângulo em cm: ");
    scanf("%f", &altura);

    float area = base * altura;

    printf("A área do retângulo é igual a %.2f cm².\n", area);

    return 0;
}
