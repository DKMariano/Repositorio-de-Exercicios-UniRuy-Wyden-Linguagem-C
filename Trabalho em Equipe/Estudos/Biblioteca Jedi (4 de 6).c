/* *********************************************************************************************************************
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
void listarLivros(){

    setlocale(LC_ALL, "Portuguese");

    printf("\n--------- Lista de Livros Cadastrados ----------- \n");

    if (total_livros == 0){
        printf("Não há livros cadastrado, Jedi!\n");
    }else{
        for(int i=0; i <total_livros; i++){
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

    printf("\n--------- Busca de Livros Cadastrados ----------- \n");
    printf("Digite o título do livro que deseja encontrar: ");
    fgets(titulo_procurado, sizeof(titulo_procurado), stdin);
    titulo_procurado[strcspn(titulo_procurado, "\n")] = '\0';

    for (int i = 0; i < total_livros; i++) {
        if (strcmp(titulos[i], titulo_procurado) == 0) {
            printf("\n \t Livro localizado: \n");
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


int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;

    do {

        printf("\n---------<<< BIBLIOTECA ARQUIVOS JEDI >>>--------- \n");
        printf("1 - Cadastrar livro\n");
        printf("2 - Listar livros\n");
        printf("3 - Buscar livro\n");
        printf("4 - Alterar livro\n");
        printf("5 - Apagar livro\n");
        printf("0 - Sair\n");
        printf("\nOpção desejada: ");
        scanf("%d", &opcao);
        while (getchar() != '\n');

        switch(opcao) {
            case 1:
                setlocale(LC_ALL, "Portuguese");
                cadastrarLivros();
                break;
            case 2:
                setlocale(LC_ALL, "Portuguese");
                listarLivros();
                break;
            case 3: {
                setlocale(LC_ALL, "Portuguese");
                buscarLivros();
                break;
            }
            case 4: {


                break;
            }
            case 5: {


                break;
            }
        }
    } while(opcao != 0);

}
