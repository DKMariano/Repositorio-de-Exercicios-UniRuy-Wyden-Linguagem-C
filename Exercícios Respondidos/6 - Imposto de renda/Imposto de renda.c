/********************************************************************************************************************
* Data atual: 13/05/2024                                                                                            *
* Instituição de Ensino: UniRuy - Wyden                                                                             *
* Disciplina: Introdução à Programação Estruturada em C                                                             *
* Professor: Pedro Kislansky                                                                                        *
* Aluno: Dimitrius Khouri                                                                                           *
* Descrição:  Crie um programa que receba do usuário o seu salário e o percentual de aumento dele e imprima o valor *
* do novo salário e quanto de imposto de renda ele irá pagar( <2000 paga 10%; maior ou igual a 2000 paga 20%).      *
********************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    double salario=0;
    double percentual=0;

    printf("Qual é o valor do seu salário? R$ ");
    scanf(" %lf", &salario);

    printf("Qual foi o percentual de aumento do seu salário? %% ");
    scanf(" %lf", &percentual);

    double novo_salario=salario*(1+percentual/100);
    printf("O valor do seu salário com aumento é igual a R$ %.2lf . \n", novo_salario);


    if (novo_salario<2000){
        double imposto=novo_salario*0.1;
        printf("Além disso, você deve pagar 10%% de imposto de renda. Isto equivale a R$ %.2lf .\n", imposto);
    }else{
        double imposto=novo_salario*0.2;
        printf("Além disso, você deve pagar 20%% de imposto de renda. Isto equivale a R$ %.2lf .\n", imposto);
    }
    return 0;
}
