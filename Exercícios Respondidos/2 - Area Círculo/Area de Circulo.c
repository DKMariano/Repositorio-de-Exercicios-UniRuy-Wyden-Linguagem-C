/***************************************************************************************************
* Data atual: 11/05/2024                                                                           *
* Institui��o de Ensino: UniRuy - Wyden                                                            *
* Disciplina: Introdu��o � Programa��o Estruturada em C                                            *
* Professor: Pedro Kislansky                                                                       *
* Aluno: Dimitrius Khouri                                                                          *
* Descri��o: Crie um programa que calcule a �rea de um c�rculo dado o raio.                        *
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
    printf("A area do c�rculo � %.2f cm�.\n", area);

    return 0;
}
