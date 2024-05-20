/***************************************************************************************************
* Data atual: 12/05/2024                                                                           *
* Institui��o de Ensino: UniRuy - Wyden                                                            *
* Disciplina: Introdu��o � Programa��o Estruturada em C                                            *
* Professor: Pedro Kislansky                                                                       *
* Aluno: Dimitrius Khouri                                                                          *
* Descri��o: Desenvolva um programa que verifique se um n�mero � positivo, negativo ou zero.       *
***************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero = 0;

    printf("Digite um n�mero qualquer: ");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("O n�mero � zero.\n");
    } else if (numero > 0) {
        printf("O n�mero � positivo.\n");
    } else {
        printf("O n�mero � negativo.\n");
    }

    return 0;

}
