/********************************************************************************************************************
* Data atual: 20/05/2024                                                                                            *
* Institui��o de Ensino: UniRuy - Wyden                                                                             *
* Disciplina: Introdu��o � Programa��o Estruturada em C                                                             *
* Professor: Pedro Kislansky                                                                                        *
* Aluno: Dimitrius Khouri                                                                                           *
* Descri��o: Escreva um programa que calcule o quadrado de um n�mero.                                               *
********************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese");

    float numero = 0, quadrado = 0;

    printf("Digite um n�mero: ");
    scanf("%f", &numero);

    quadrado = numero * numero;

    printf("(%.2f)� =  %.2f \n", numero, quadrado);

     return 0;
}
