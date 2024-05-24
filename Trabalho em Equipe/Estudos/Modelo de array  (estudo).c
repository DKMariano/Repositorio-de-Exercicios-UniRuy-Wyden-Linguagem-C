/* *********************************************************************************************************************
* Data atual: 23/05/2024                                                                                               *
* Instituição de Ensino: UniRuy - Wyden                                                                                *
* Disciplina: Introdução à Programação Estruturada em C                                                                *
* Professor: Pedro Kislansky                                                                                           *
* Equipe:                                                                                                              *
* Descrição: Modelo de array para se usar no projeto                                                                   *                                     *
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

    printf("Título do livro: %s\n", livro.titulo);
    printf("Autor do livro: %s\n", livro.autor);
    printf("ISBN: %s \n", livro.isbn);

    return 0;

}
