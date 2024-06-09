/* *********************************************************************************************************************
* Data atual: 31/05/2024                                                                                               *
* Instituição de Ensino: UniRuy - Wyden                                                                                *
* Disciplina: Introdução à Programação Estruturada em C                                                                *
* Professor: Pedro Kislansky                                                                                           *
* Equipe:                                                                                                              *
* Descrição: Modelo de array para se usar no projeto (sem estrtutura de repetição)                                     *                                     *
***********************************************************************************************************************/



#include <stdio.h>
#include <locale.h>
#include <string.h>

#define MAX_LIVROS 300

struct Jedi {
    char titulo[50];
    char autor[50];
    char isbn[14];
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Jedi arquivo[MAX_LIVROS];

    int contador = 0;
    char resposta;

    do {
        printf("\n\n--------------- CADASTRO DE LIVROS ----------------\n");

        printf("Nome do livro: ");
        fgets(arquivo[contador].titulo, sizeof(arquivo[contador].titulo), stdin);
        arquivo[contador].titulo[strcspn(arquivo[contador].titulo, "\n")] = '\0'; // Remove trailing newline

        printf("Nome do autor: ");
        fgets(arquivo[contador].autor, sizeof(arquivo[contador].autor), stdin);
        arquivo[contador].autor[strcspn(arquivo[contador].autor, "\n")] = '\0'; // Remove trailing newline

        printf("ISBN: ");
        fgets(arquivo[contador].isbn, sizeof(arquivo[contador].isbn), stdin);
        arquivo[contador].isbn[strcspn(arquivo[contador].isbn, "\n")] = '\0'; // Remove trailing newline

        contador++;

        if (contador >= MAX_LIVROS) {
            printf("O limite máximo de livros foi alcançado!\n");
            break;
        } else {
            printf("Você deseja continuar?[S/N] ");
            scanf(" %c", &resposta); // Reading a single character
            getchar(); // Consume newline character left in the input buffer
        }

    } while (resposta != 'N' && resposta != 'n');

    printf("\n\n---------<<< BIBLIOTECA ARQUIVOS JEDI >>>--------- \n");

    for (int i = 0; i < contador; i++) {
        printf("\nTítulo do livro: %s\n", arquivo[i].titulo);
        printf("Autor do livro: %s\n", arquivo[i].autor);
        printf("ISBN: %s\n", arquivo[i].isbn);
    }

    return 0;
}
