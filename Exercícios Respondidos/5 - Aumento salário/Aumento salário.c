/******************************************************************************************************************
* Data atual: 13/05/2024                                                                                          *
* Institui��o de Ensino: UniRuy - Wyden                                                                           *
* Disciplina: Introdu��o � Programa��o Estruturada em C                                                           *
* Professor: Pedro Kislansky                                                                                      *
* Aluno: Dimitrius Khouri                                                                                         *
* Descri��o:  Crie um programa que receba do usu�rio o seu sal�rio e imprima o valor do sal�rio acrescentado 20%. *          *
******************************************************************************************************************/


#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

	double salario = 0;

	printf("Por favor, digite o valor do seu sal�rio: R$ ");
	scanf("%lf", &salario);

	double novo_salario = salario * 1.2;

    printf("O valor do seu sal�rio com o aumento � igual a R$ %.2lf .\n", novo_salario);

    return 0;

    }
