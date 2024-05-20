/********************************************************************************************************************
* Data atual: 13/05/2024                                                                                            *
* Institui��o de Ensino: UniRuy - Wyden                                                                             *
* Disciplina: Introdu��o � Programa��o Estruturada em C                                                             *
* Professor: Pedro Kislansky                                                                                        *
* Aluno: Dimitrius Khouri                                                                                           *
* Descri��o:  Crie um programa que receba do usu�rio o seu sal�rio e o percentual de aumento dele e imprima o valor *
* do novo sal�rio e quanto de imposto de renda ele ir� pagar( <2000 paga 10%; maior ou igual a 2000 paga 20%).      *
********************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    double salario=0;
    double percentual=0;

    printf("Qual � o valor do seu sal�rio? R$ ");
    scanf(" %lf", &salario);

    printf("Qual foi o percentual de aumento do seu sal�rio? %% ");
    scanf(" %lf", &percentual);

    double novo_salario=salario*(1+percentual/100);
    printf("O valor do seu sal�rio com aumento � igual a R$ %.2lf . \n", novo_salario);


    if (novo_salario<2000){
        double imposto=novo_salario*0.1;
        printf("Al�m disso, voc� deve pagar 10%% de imposto de renda. Isto equivale a R$ %.2lf .\n", imposto);
    }else{
        double imposto=novo_salario*0.2;
        printf("Al�m disso, voc� deve pagar 20%% de imposto de renda. Isto equivale a R$ %.2lf .\n", imposto);
    }
    return 0;
}
