/***************************************************************************************************
* Data atual: 12/05/2024                                                                           *
* Institui��o de Ensino: UniRuy - Wyden                                                            *
* Disciplina: Introdu��o � Programa��o Estruturada em C                                            *
* Professor: Pedro Kislansky                                                                       *
* Aluno: Dimitrius Khouri                                                                          *
* Descri��o:  Crie um programa que calcule a �rea de um ret�ngulo dado seu lado e altura.          *
************************************************************************************************ */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float base = 0;
    float altura = 0;

    printf("Digite o valor da base do ret�ngulo em cm: ");
    scanf("%f", &base);

    printf("Digite o valor da altura do ret�ngulo em cm: ");
    scanf("%f", &altura);

    float area = base * altura;

    printf("A �rea do ret�ngulo � igual a %.2f cm�.\n", area);

    return 0;
}
