/* *********************************************************************************************************************
* Data atual: 31/05/2024                                                                                               *
* Instituição de Ensino: UniRuy - Wyden                                                                                *
* Disciplina: Introdução à Programação Estruturada em C                                                                *
* Professor: Pedro Kislansky                                                                                           *
* Equipe:                                                                                                              *
* Descrição: Modelo de array para se usar no projeto                                                                   *                                     *
***********************************************************************************************************************/



#include <stdio.h>
#include <locale.h>
#include <string.h>

#define MAX_LIVROS 600

struct Livro {
    char titulo[50];
    char autor[50];
    char isbn[14];
};

int cadastrarLivro(struct Livro livros[MAX_LIVROS], int totalLivros) {
// perguntar ao professor pq quando muda pra void dar erro
    if (totalLivros >= MAX_LIVROS) {
        printf("Sinto muito, jedi, mas não há mais espaço para livros!\n");

    }

    printf("\n-------------- Cadastro de Livros --------------- \n");

    printf("\nNome do livro: ");
    fgets(livros[totalLivros].titulo, sizeof(livros[totalLivros].titulo), stdin);
    fflush(stdin);

    printf("Nome do autor: ");
    fgets(livros[totalLivros].autor, sizeof(livros[totalLivros].autor), stdin);
    fflush(stdin);

    printf("ISBN: ");
    fgets(livros[totalLivros].isbn, sizeof(livros[totalLivros].isbn), stdin);
    fflush(stdin);

    printf("Seu livro foi cadastrado em nosso arquivos com sucesso, jedi!\n");

    totalLivros++;

}

void listarLivros(struct Livro livros[MAX_LIVROS], int totalLivros) {
// perguntar ao professor pq não aparece os livros cadastrados

    printf("\n--------------- Livros Cadastrados --------------");

    for (int i = 0; i < totalLivros; i++) {
        printf("\nTítulo: %s", livros[i].titulo);
        printf("Autor: %s", livros[i].autor);
        printf("ISBN: %s", livros[i].isbn);
    }
}


int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Livro livros[MAX_LIVROS];
    int totalLivros = 0;
    int opcao;

    do {

        printf("\n---------<<< BIBLIOTECA ARQUIVOS JEDI>>>--------- \n");
        printf("1-Cadastrar livro\n");
        printf("2-Listar livros\n");
        printf("3-Buscar livro\n");
        printf("4-Apagar livro\n");
        printf("0-Sair\n");
        printf("Opcao desejada: ");
        scanf("%d", &opcao);
        getchar();

        switch(opcao) {
            case 1:
                totalLivros = cadastrarLivro(livros, totalLivros);
                break;
            case 2:
                listarLivros(livros, totalLivros);
                break;
            case 3: {

                break;
            }
            case 4: {
                char titulo[50];

                break;
            }
        }
    } while(opcao != 0);

    return 0;
}
