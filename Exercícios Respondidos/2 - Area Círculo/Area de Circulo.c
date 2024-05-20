/***************************************************************************************************
* Data atual: 11/05/2024                                                                           *
* Instituição de Ensino: UniRuy - Wyden                                                            *
* Disciplina: Introdução à Programação Estruturada em C                                            *
* Professor: Pedro Kislansky                                                                       *
* Aluno: Dimitrius Khouri                                                                          *
* Descrição: Crie um programa que calcule a área de um círculo dado o raio.                        *
************************************************************************************************ */

#include <stdio.h>
#include <locale.h>
#define PI 3.14

int main(){

    setlocale(LC_ALL, "Portuguese");

    double raio = 0;
    double area = 0;


    printf("Digite o valor do raio em cm: ");
    scanf("%lf", &raio);

    area = PI*(raio*raio);
    printf("A area do círculo é %.2f cm².\n", area);

    return 0;
}
