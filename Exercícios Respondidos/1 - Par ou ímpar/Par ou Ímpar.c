/***************************************************************************************************
* Data atual: 11/05/2024                                                                           *
* Institui��o de Ensino: UniRuy - Wyden                                                            *
* Disciplina: Introdu��o � Programa��o Estruturada em C                                            *
* Professor: Pedro Kislansky                                                                       *
* Aluno: Dimitrius Khouri                                                                          *
* Descri��o: Crie um programa que verifique se um n�mero dado pelo usu�rio � par ou �mpar.         *
***************************************************************************************************/


#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero=0;

    printf("Digite um n�mero inteiro maior que zero: ");
    scanf("%d", &numero);

    printf((numero%2==0)?"O n�mero � par! \n":"O n�mero � �mpar! \n");

    return 0;
}
