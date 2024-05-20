/******************************************************************************************************************
* Data atual: 13/05/2024                                                                                          *
* Instituição de Ensino: UniRuy - Wyden                                                                           *
* Disciplina: Introdução à Programação Estruturada em C                                                           *
* Professor: Pedro Kislansky                                                                                      *
* Aluno: Dimitrius Khouri                                                                                         *
* Descrição:  Crie um programa que receba do usuário o seu salário e imprima o valor do salário acrescentado 20%. *          *
******************************************************************************************************************/


#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

	double salario = 0;

	printf("Por favor, digite o valor do seu salário: R$ ");
	scanf("%lf", &salario);

	double novo_salario = salario * 1.2;

    printf("O valor do seu salário com o aumento é igual a R$ %.2lf .\n", novo_salario);

    return 0;

    }
