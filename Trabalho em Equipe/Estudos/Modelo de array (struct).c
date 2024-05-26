/***********************************************************************************************************************
* Data: 23/05/2024                                                                                                      *
* Instituição de Ensino: UniRuy - Wyden                                                                                 *
* Disciplina: Introdução à Programação Estruturada em C                                                                 *
* Professor: Pedro Kislansky                                                                                            *
* Equipe:                                                                                                               *
* Descrição: Modelo de array para se usar no projeto                                                                    *                                     *
***********************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

// Define a estrutura para armazenar as informações dos Jedi
struct Jedi {
    char titulo[50];
    char autor[50];
    char isbn[20];
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Inicializa um array de estruturas Jedi
    struct Jedi arquivos[3] = {
        {"Senhor dos Aneis", "J. R. R. Tolkien", "9788845292613"},
        {"Ladrão de Raios", "Rick Riordan", "9780307245304"},
        {"Guerra dos Tronos", "George R. R. Martin", "9780007237500"}
    };

    printf("\n\n---------<<< BIBLIOTECA ARQUIVOS JEDI >>>--------- \n");

    for (int x = 0; x < 3; x++) {
        printf("Título: %s\n", arquivos[x].titulo);
        printf("Autor: %s\n", arquivos[x].autor);
        printf("ISBN: %s\n\n", arquivos[x].isbn);
    }

    return 0;
}
