/********************************************************************************************************************
* Data atual: 20/05/2024                                                                                            *
* Instituição de Ensino: UniRuy - Wyden                                                                             *
* Disciplina: Introdução à Programação Estruturada em C                                                             *
* Professor: Pedro Kislansky                                                                                        *
* Aluno: Dimitrius Khouri                                                                                           *
* Descrição: Escreva um programa que calcule o quadrado de um número.                                               *
********************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese");

    float numero = 0, quadrado = 0;

    printf("Digite um número: ");
    scanf("%f", &numero);

    quadrado = numero * numero;

    printf("(%.2f)² =  %.2f \n", numero, quadrado);

     return 0;
}
