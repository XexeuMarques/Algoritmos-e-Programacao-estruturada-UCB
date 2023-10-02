/*9. Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salario atual e o tempo de serviço de cada funcionário. 
Os funcionários com menor salario terão um aumento proporcionalmente maior do que os funcionários  com um salario maior, e conforme o tempo de serviço na empresa, 
cada funcionário irá receber um bônus adicional de salário. Faça um programa que leia:

• o valor do salario atual do funcionário; 

• o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).

Use as tabelas abaixo para calcular o salario reajustado deste funcionário e imprima o valor do salario final reajustado, 
ou uma mensagem caso o funcionário não tenha direito a nenhum aumento.

|Salario Atual   |Reajuste(%) |Tempo de Serviso|Bonus    |
|Ate 500,00      |25%         |Abaixo de 1 ano |Sem bonus|
|Ate 1000,00     |20%         |De 1 a 3 Anos   |100,00   |
|Ate 1500,00     |15%         |De 4 a 6 Anos   |200,00   |
|Ate 2000,00     |10%         |De 7 a 10 Anos  |300,00   |
|Acima de 2000,00|Sem Reajuste|Mais de 10 Anos |500,00   |
*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
float salarioAtual, salarioAjustado;
int anos;

/*=============Execução==============*/
int main(){

    printf("Qual e o seu salario atual?? \n");
    scanf("%f", &salarioAtual);

    printf("A quanto anos voce esta na empresa? \n");
    scanf("%d", &anos);

// Reajuste em %%
    if (salarioAtual <= 500) {
        salarioAjustado = salarioAtual + (salarioAtual * 25 / 100);
        printf("Voce tem um reajuste de 25%% no salario \n");
    }
    else if (salarioAtual > 500 && salarioAtual <= 1000 ) {
        salarioAjustado = salarioAtual + (salarioAtual * 20 / 100);
        printf("Voce tem um reajuste de 20%% no salario \n");
    }
    else if ( salarioAtual > 1000 && salarioAtual <= 1500) {
        salarioAjustado = salarioAtual + (salarioAtual * 15 / 100);
        printf("Voce tem um reajuste de 15%% no salario \n");
    }
    else if (salarioAtual > 1500 && salarioAtual <= 2000) {
        salarioAjustado = salarioAtual + (salarioAtual * 10 / 100);
        printf("Voce tem um reajuste de 10%% no salario \n");
    }
    else {
        printf("Não teve aumento \n");
        salarioAjustado = salarioAtual;
        printf("ou seja -> ");
    }

    printf("Seu salario reajustado e %.2f \n", salarioAjustado);

//Bonus por tempo de serviso
    if (anos < 1) {
        printf("Infelizmente voce tambem tem 0 reais de bonus \n");
    }
    else if (anos >= 1 && anos < 3) {
        printf("Voce tambem tem um bonus de 100 reais. \n");
    }
    else if (anos >= 4 && anos < 6) {
        printf("Voce tambem tem um bonus de 200 reais. \n");
    }
    else if (anos >= 7 && anos < 10) {
        printf("Voce tambem tem um bonus de 300 reais. \n");
    }
    else {
        printf("Voce tambem tem um bonus de 500 reais. \n");
    }
}