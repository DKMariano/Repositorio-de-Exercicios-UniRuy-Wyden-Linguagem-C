/* *********************************************************************************************************************
* Data: 31/05/2024                                                                                               *
* Instituição de Ensino: UniRuy - Wyden                                                                                *
* Disciplina: Introdução à Programação Estruturada em C                                                                *
* Professor: Pedro Kislansky                                                                                           *
* Equipe:                                                                                                              *
* Descrição: Modelo de array para se usar no projeto                                                                   *                                     *
***********************************************************************************************************************/



#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

#define LIMITE_LIVROS 300
#define TAMANHO_TITULO 100
#define TAMANHO_AUTOR 100
#define TAMANHO_ISBN 15



char titulos[LIMITE_LIVROS][TAMANHO_TITULO];
char autores[LIMITE_LIVROS][TAMANHO_AUTOR];
char isbns[LIMITE_LIVROS][TAMANHO_ISBN];
int total_livros = 0;

void cadastrarLivros(){

    setlocale(LC_ALL, "Portuguese");

    printf("\n-------------- Cadastro de Livros --------------- \n");

    if (total_livros >= LIMITE_LIVROS) {
        printf("Sinto muito, jedi, mas não há mais espaço para livros na nossa biblioteca!\n");
    }else{
        printf("Título do livro: ");
        fgets(titulos[total_livros], TAMANHO_TITULO, stdin);
        fflush(stdin);

        printf("Nome do autor: ");
        fgets(autores[total_livros], TAMANHO_AUTOR, stdin);
        fflush(stdin);

        printf("ISBN: ");
        fgets(isbns[total_livros], TAMANHO_AUTOR, stdin);
        fflush(stdin);

        printf("\nSeu livro foi cadastrado em nosso arquivos com sucesso, jedi!\n");

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
            printf("Título: %s", titulos[i]);
            printf("Autor: %s", autores[i]);
            printf("ISBN: %s", isbns[i]);
            printf("\n");
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;

    do {

        printf("\n---------<<< BIBLIOTECA ARQUIVOS JEDI >>>--------- \n");
        printf("1-Cadastrar livro\n");
        printf("2-Listar livros\n");
        printf("3-Buscar livro\n");
        printf("4-Apagar livro\n");
        printf("0-Sair\n");
        printf("Opcao desejada: ");
        scanf("%d", &opcao);
        fflush(stdin);

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

                break;
            }
            case 4: {


                break;
            }
        }
    } while(opcao != 0);

}
