/********************************************************************************************************************
* Data atual: 20/05/2024                                                                                            *
* Institui��o de Ensino: UniRuy - Wyden                                                                             *
* Disciplina: Introdu��o � Programa��o Estruturada em C                                                             *
* Professor: Pedro Kislansky                                                                                        *
* Aluno: Dimitrius Khouri                                                                                           *
* Descri��o: Crie um programa que verifique se um n�mero � divis�vel por outro.                                     *
********************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int numero1 = 0, numero2 = 0;

    printf("Digite um n�mero: ");
    scanf("%d", &numero1);

    printf("Digite outro n�mero: ");
    scanf("%d", &numero2);

    if (numero2 == 0) {
        printf("Divis�o por zero n�o � permitida.\n");

    }else if (numero1 % numero2 == 0) {
        printf("O %d � divis�vel por %d.\n", numero1, numero2);
    } else {
        printf("O %d N�O � divis�vel por %d.\n", numero1, numero2);
    }

    return 0;
}

