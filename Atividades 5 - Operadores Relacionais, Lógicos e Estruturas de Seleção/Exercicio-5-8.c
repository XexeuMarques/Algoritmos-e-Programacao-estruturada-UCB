/*8. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se  aposentar. 
As condições para aposentadoria são: 
• Ter pelo menos 65 anos; • Ou ter trabalhado pelo menos 30 anos;, 
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. */
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*=============VARIAVEIS=============*/
int idade, tempoTrabalhado;

/*=============Execução==============*/
int main(){

    printf("Quantos anos voce tem? \n");
    scanf("%d", &idade);

    printf("Quantos anos trabalhados voce tem? \n");
    scanf("%d", &tempoTrabalhado);

    if (idade >= 65 || tempoTrabalhado >= 30 || (idade >= 60 && tempoTrabalhado >= 25)) {
        printf("Voce tem condições para se aposentar. \n");
    }
    else {
        printf("Voce não tem as condições para se aposentar \n");
    }
}