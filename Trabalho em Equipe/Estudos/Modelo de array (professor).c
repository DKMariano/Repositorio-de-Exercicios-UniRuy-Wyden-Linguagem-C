/***********************************************************************************************************************
* Data: 23/05/2024                                                                                               *
* Institui��o de Ensino: UniRuy - Wyden                                                                                *
* Disciplina: Introdu��o � Programa��o Estruturada em C                                                                *
* Professor: Pedro Kislansky                                                                                           *
* Equipe:                                                                                                              *
* Descri��o: Modelo de array para se usar no projeto                                                                   *                                     *
***********************************************************************************************************************/
#include <stdio.h>
#include <locale.h>

void Jedi() {
    char* arquivos[3][3] = {
        {"Senhor dos Aneis", "J. R. R. Tolkien", "9788845292613"},
        {"Ladr�o de Raios", "Rick Riordan", "9780307245304"},
        {"O Guerra dos Tronos", "George R. R. Martin", "9780007237500"}
    };

    printf("\n\n---------<<< BIBLIOTECA ARQUIVOS JEDI >>>--------- \n");

    for (int x = 0; x < 3; x++) {
        printf("T�tulo: %s\n", arquivos[x][0]);
        printf("Autor: %s\n", arquivos[x][1]);
        printf("ISBN: %s\n\n", arquivos[x][2]);
    }

    system("pause");
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    Jedi();

    return 0;
}
