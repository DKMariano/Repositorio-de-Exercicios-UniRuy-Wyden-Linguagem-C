/********************************************************************************************************************
* Data atual: 20/05/2024                                                                                            *
* Institui��o de Ensino: UniRuy - Wyden                                                                             *
* Disciplina: Introdu��o � Programa��o Estruturada em C                                                             *
* Professor: Pedro Kislansky                                                                                        *
* Aluno: Dimitrius Khouri                                                                                           *
* Descri��o: Crie um programa que converta graus Celsius para Fahrenheit.                                           *
********************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    double celsius = 0, fahrenheit = 0;

    printf("Digite o valor da temperatura em Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("%.2lf �C corrresponde a %.2lf �F.\n", celsius, fahrenheit);

     return 0;

}
