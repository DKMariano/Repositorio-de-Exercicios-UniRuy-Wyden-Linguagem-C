/***********************************************************************************************************************
* Data atual: 23/05/2024                                                                                               *
* Institui��o de Ensino: UniRuy - Wyden                                                                                *
* Disciplina: Introdu��o � Programa��o Estruturada em C                                                                *
* Professor: Pedro Kislansky                                                                                           *
* Equipe:                                                                                                              *
* Descri��o: Modelo de array para se usar no projeto (sem estrutura de repeti��o)                                      *                                     *
***********************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

// Definindo a estrutura fora da fun��o para que possa ser usada em qualquer lugar do c�digo
struct Jedi {
    char titulo[50];
    char autor[50];
    char isbn[20];
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Jedi arquivo;

    printf("\n\n--------------- CADASTRO DE LIVROS ----------------\n");

    printf("Nome do livro: ");
    fgets(arquivo.titulo, sizeof(arquivo.titulo), stdin);

    printf("Nome do autor: ");
    fgets(arquivo.autor, sizeof(arquivo.autor), stdin);

    printf("ISBN: ");
    fgets(arquivo.isbn, sizeof(arquivo.isbn), stdin);

    printf("\n\n---------<<< BIBLIOTECA ARQUIVOS JEDI >>>--------- \n");
    printf("T�tulo do livro: %s", arquivo.titulo);
    printf("Autor do livro: %s", arquivo.autor);
    printf("ISBN: %s", arquivo.isbn);

    return 0;
}

