/*Faça um programa em que o usuário digite o custo de uma determinada mercadoria,
em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado).
Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
float valorMercadoria;
float frete;
float valoresAdicionais;
float valorTotal;
float valorParaVender;
float lucro;
int porcentagem;

/*=============Execução==============*/
int main(){

    printf("Digite o valor do seu produto:\n");
    scanf("%f", &valorMercadoria);
    printf("quanto vai custa o freete:\n");
    scanf("%f", &frete);
    printf("valor adicional:\n");
    scanf("%f", &valoresAdicionais);
    printf("qual a porsentagem de lucro voce quer ter?? \n coloque um numero inteiro:\n");
    scanf("%d", &porcentagem);

    valorTotal = valorMercadoria + frete + valoresAdicionais;
    lucro = valorMercadoria * porcentagem / 100;
    valorParaVender = valorTotal + lucro;
    
    printf("Vendendo a mercadoria a $ %.2f voce vai ter $ %.2f de lucro que vale a %d %% do valor do produto.\n", valorParaVender, lucro, porcentagem);
}