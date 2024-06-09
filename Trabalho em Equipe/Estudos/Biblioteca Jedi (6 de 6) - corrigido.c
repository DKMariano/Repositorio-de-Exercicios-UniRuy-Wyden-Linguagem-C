/***********************************************************************************************************************
* Data: 31/05/2024                                                                                                     *
* Instituição de Ensino: UniRuy - Wyden                                                                                *
* Disciplina: Introdução à Programação Estruturada em C                                                                *
* Professor: Pedro Kislansky                                                                                           *
* Equipe:                                                                                                              *
* Descrição: Modelo de array para se usar no projeto                                                                   *                                     *
***********************************************************************************************************************/




#include <stdio.h>
#include <locale.h>
#include <string.h>

#define LIMITE_LIVROS 300
#define TAMANHO_TITULO 100
#define TAMANHO_AUTOR 100
#define TAMANHO_ISBN 15

char titulos[LIMITE_LIVROS][TAMANHO_TITULO];
char autores[LIMITE_LIVROS][TAMANHO_AUTOR];
char isbns[LIMITE_LIVROS][TAMANHO_ISBN];
int total_livros = 0;

void MenuPrimario() {
    printf("\n****************************************************\n");
    printf("\n*             BIBLIOTECA ARQUIVOS JEDI             *\n");
    printf("\n****************************************************\n");
    printf("\nBem vindo a BIBLIOTECA ARQUIVOS JEDI!\n");
    printf("\Por favor, escolha uma das opções abaixo!\n");
    printf("\n1 - Cadastrar livro\n");
    printf("2 - Listar livros\n");
    printf("3 - Buscar livro\n");
    printf("4 - Alterar livro\n");
    printf("5 - Apagar livro\n");
    printf("0 - Sair\n");
}

void cadastrarLivros() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n-------------- Cadastro de Livros --------------- \n");

    if (total_livros >= LIMITE_LIVROS) {
        printf("Sinto muito, jedi, mas não há mais espaço para livros na nossa biblioteca!\n");
    } else {
        printf("Título do livro: ");
        fgets(titulos[total_livros], TAMANHO_TITULO, stdin);
        titulos[total_livros][strcspn(titulos[total_livros], "\n")] = '\0';

        printf("Nome do autor: ");
        fgets(autores[total_livros], TAMANHO_AUTOR, stdin);
        autores[total_livros][strcspn(autores[total_livros], "\n")] = '\0';

        printf("ISBN: ");
        fgets(isbns[total_livros], TAMANHO_ISBN, stdin);
        isbns[total_livros][strcspn(isbns[total_livros], "\n")] = '\0';

        printf("\nSeu livro foi cadastrado em nossos arquivos com sucesso, jedi!\n");

        total_livros++;
    }
}

void listarLivros() {
    setlocale(LC_ALL, "Portuguese");

    if (total_livros == 0) {
        printf("Não há livros cadastrados, Jedi!\n");
    } else {
        for (int i = 0; i < total_livros; i++) {
            printf("\n \t Livro %d \n", i + 1);
            printf("Título: %s\n", titulos[i]);
            printf("Autor: %s\n", autores[i]);
            printf("ISBN: %s\n", isbns[i]);
            printf("\n");
        }
    }
}

void buscarLivros() {
    setlocale(LC_ALL, "Portuguese");

    int livro_localizado = 0;
    char titulo_procurado[TAMANHO_TITULO];

    printf("Digite o título do livro que deseja encontrar: ");
    fgets(titulo_procurado, sizeof(titulo_procurado), stdin);
    titulo_procurado[strcspn(titulo_procurado, "\n")] = '\0';

    for (int i = 0; i < total_livros; i++) {
        if (strcmp(titulos[i], titulo_procurado) == 0) {
            printf("\nLivro localizado: \n");
            printf("Título: %s\n", titulos[i]);
            printf("Autor: %s\n", autores[i]);
            printf("ISBN: %s\n", isbns[i]);
            livro_localizado = 1;
            break;
        }
    }

    if (!livro_localizado) {
        printf("Sinto muito, jedi. Mas esse livro não foi localizado.\n");
    }
}

void editarLivros() {
    setlocale(LC_ALL, "Portuguese");

    char livro_editado[TAMANHO_TITULO];
    int indice = -1;

    printf("Digite o título do livro que deseja editar: ");
    fgets(livro_editado, sizeof(livro_editado), stdin);
    livro_editado[strcspn(livro_editado, "\n")] = '\0';

    for (int i = 0; i < total_livros; i++) {
        if (strcmp(titulos[i], livro_editado) == 0) {
            indice = i;
            break;
        }
    }
    if (indice == -1) {
        printf("O livro não foi encontrado, Jedi.\n");
    } else {
        printf("Digite o novo título do livro: ");
        fgets(titulos[indice], sizeof(titulos[indice]), stdin);
        titulos[indice][strcspn(titulos[indice], "\n")] = '\0';

        printf("Digite o novo autor do livro: ");
        fgets(autores[indice], sizeof(autores[indice]), stdin);
        autores[indice][strcspn(autores[indice], "\n")] = '\0';

        printf("Digite o novo ISBN do livro: ");
        fgets(isbns[indice], sizeof(isbns[indice]), stdin);
        isbns[indice][strcspn(isbns[indice], "\n")] = '\0';

        printf("O seu livro foi editado com sucesso, Jedi!\n");
    }
}

void apagarLivros() {
    setlocale(LC_ALL, "Portuguese");

    int livro_apagado = 0;
    char isbn_buscado[TAMANHO_ISBN];

    printf("\nJedi, você já cadastrou os seguintes livros: \n");
    listarLivros();

    printf("\nDigite o ISBN do livro que deseja apagar: ");
    fgets(isbn_buscado, sizeof(isbn_buscado), stdin);
    isbn_buscado[strcspn(isbn_buscado, "\n")] = '\0';

    for (int i = 0; i < total_livros; i++) {
        if (strcmp(isbns[i], isbn_buscado) == 0) {
            for (int j = i; j < total_livros - 1; j++) {
                strcpy(titulos[j], titulos[j + 1]);
                strcpy(autores[j], autores[j + 1]);
                strcpy(isbns[j], isbns[j + 1]);
            }
            total_livros--;
            printf("\nO livro foi apagado com sucesso, Jedi! \n");
            livro_apagado = 1;
            break;
        }
    }
    if (!livro_apagado) {
        printf("Sinto muito, jedi. Mas esse livro não foi localizado.\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;

    do {
        MenuPrimario();

        printf("\nOpção desejada: ");
        scanf("%d", &opcao);
        while (getchar() != '\n');

        switch (opcao) {
            case 1:
                cadastrarLivros();
                break;
            case 2:
                printf("\n--------- Lista de Livros Cadastrados ----------- \n");
                listarLivros();
                break;
            case 3:
                printf("\n---------- Buscar Livros Cadastrados ------------ \n");
                buscarLivros();
                break;
            case 4:
                printf("\n-------- Editar Livros Cadastrados ----------- \n");
                editarLivros();
                break;
            case 5:
                printf("\n---------- Apagar Livros Cadastrados ------------ \n");
                apagarLivros();
                break;
        }
    } while (opcao != 0);
}
