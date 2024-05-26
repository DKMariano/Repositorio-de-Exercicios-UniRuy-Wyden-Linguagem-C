/***********************************************************************************************************************
* Data atual: 23/05/2024                                                                                               *
* Instituição de Ensino: UniRuy - Wyden                                                                                *
* Disciplina: Introdução à Programação Estruturada em C                                                                *
* Professor: Pedro Kislansky                                                                                           *
* Equipe:                                                                                                              *
* Descrição: Modelo de array para se usar no projeto (sem estrutura de repetição)                                      *                                     *
***********************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

// Definindo a estrutura fora da função para que possa ser usada em qualquer lugar do código
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
    printf("Título do livro: %s", arquivo.titulo);
    printf("Autor do livro: %s", arquivo.autor);
    printf("ISBN: %s", arquivo.isbn);

    return 0;
}

