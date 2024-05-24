/* *********************************************************************************************************************
* Data atual: 23/05/2024                                                                                               *
* Institui��o de Ensino: UniRuy - Wyden                                                                                *
* Disciplina: Introdu��o � Programa��o Estruturada em C                                                                *
* Professor: Pedro Kislansky                                                                                           *
* Equipe:                                                                                                              *
* Descri��o: Modelo de array para se usar no projeto                                                                   *                                     *
***********************************************************************************************************************/


#include <stdio.h>
#include <locale.h>

struct Biblioteca {
    char titulo[20];
    char autor[20];
    char isbn[20];
    };

int main(){

    setlocale(LC_ALL, "Portuguese");

    struct Biblioteca livro = {
        "Senhor dos Aneis",
        "J. R. R. Tolkien",
        "9788845292613"
    };

    printf("T�tulo do livro: %s\n", livro.titulo);
    printf("Autor do livro: %s\n", livro.autor);
    printf("ISBN: %s \n", livro.isbn);

    return 0;

}
