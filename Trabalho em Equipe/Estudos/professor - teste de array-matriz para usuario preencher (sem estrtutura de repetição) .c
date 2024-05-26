/***********************************************************************************************************************
* Data: 23/05/2024                                                                                               *
* Institui��o de Ensino: UniRuy - Wyden                                                                                *
* Disciplina: Introdu��o � Programa��o Estruturada em C                                                                *
* Professor: Pedro Kislansky                                                                                           *
* Equipe:                                                                                                              *
* Descri��o: Modelo de array para se usar no projeto                                                                   *                                     *
***********************************************************************************************************************/
#include <stdio.h>
#include <locale.h>

void Jedi() { // Define a estrutura para armazenar as informa��es dos livros
    char* arquivos[3][3][30]= { };

    printf("\n\n---------<<< BIBLIOTECA ARQUIVOS JEDI >>>--------- \n");

    for (int x = 0; x < 3; x++) {     // Inicializa um array de estruturas Livro
        printf("T�tulo: ");
        scanf("%29s", &arquivos[x][0]);
        fflush(stdin);
        printf("Autor: ");
        scanf("%29s", &arquivos[x][1]);
        fflush(stdin);
        printf("ISBN: ");
        scanf("%29s", &arquivos[x][2]);
        fflush(stdin);
        printf("\n");
    }


    system("pause");
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    Jedi();

    return 0;
}
