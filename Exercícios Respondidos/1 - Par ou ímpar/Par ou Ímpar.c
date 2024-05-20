/***************************************************************************************************
* Data atual: 11/05/2024                                                                           *
* Instituição de Ensino: UniRuy - Wyden                                                            *
* Disciplina: Introdução à Programação Estruturada em C                                            *
* Professor: Pedro Kislansky                                                                       *
* Aluno: Dimitrius Khouri                                                                          *
* Descrição: Crie um programa que verifique se um número dado pelo usuário é par ou ímpar.         *
***************************************************************************************************/


#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero=0;

    printf("Digite um número inteiro maior que zero: ");
    scanf("%d", &numero);

    printf((numero%2==0)?"O número é par! \n":"O número é ímpar! \n");

    return 0;
}
