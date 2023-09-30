/*O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um
algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
float custoDeFabricacao;
float custoFinal;

/*=============Execução==============*/
int main(){

    printf("Quanto custou para fabricar o carro?\n");
    scanf("%f", &custoDeFabricacao);

    custoFinal = custoDeFabricacao + (custoDeFabricacao * 28 / 100) + (custoDeFabricacao * 45 / 100);

    printf("com 28%% do distribuidor e 45%% de impostos o valor final do veiculo e: $ %.2f Reais", custoFinal);

}