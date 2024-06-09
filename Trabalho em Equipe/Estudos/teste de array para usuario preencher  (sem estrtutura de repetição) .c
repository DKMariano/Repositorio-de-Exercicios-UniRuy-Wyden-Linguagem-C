/* *********************************************************************************************************************
* Data atual: 23/05/2024                                                                                               *
* Instituição de Ensino: UniRuy - Wyden                                                                                *
* Disciplina: Introdução à Programação Estruturada em C                                                                *
* Professor: Pedro Kislansky                                                                                           *
* Equipe:                                                                                                              *
* Descrição: Modelo de array para se usar no projeto (sem estrtutura de repetição)                                     *                                     *
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


    struct Biblioteca livro;

    printf("\n\n--------------- CADASTRO DE LIVROS ----------------\n");

    printf("Nome do livro: ");
    fgets(livro.titulo, sizeof(livro.titulo), stdin);

    printf("Nome do autor: ");
    fgets(livro.autor, sizeof(livro.autor), stdin);

    printf("ISBN: ");
    fgets(livro.isbn, sizeof(livro.isbn), stdin);

    printf("\n\n---------<<< BIBLIOTECA ARQUIVOS JEDI >>>--------- \n");
    printf("Título do livro: %s", livro.titulo);
    printf("Autor do livro: %s", livro.autor);
    printf("ISBN: %s", livro.isbn);

    return 0;

}
