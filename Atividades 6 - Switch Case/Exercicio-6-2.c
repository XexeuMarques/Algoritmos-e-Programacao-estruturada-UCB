/*2.O cardápio de uma lanchonete é o seguinte: 

|Especificações       |Preço Unitario|
|100 - Cachorro quente|R$ 10,10      |
|101 - Bauru simples  |R$ 8,30       |
|102 - Bauru com ovo  |R$ 8,50       |
|103 - Hamburgue      |R$ 12,50      |
|104 - cheeseburguer  |R$ 13,25      |

Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. 
Considere que a cada execução somente será calculado um item.
*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>
#include <stdlib.h>

/*=============VARIAVEIS=============*/
float valorAPagar = 0;
int fimMenu = 1, pedido, quantidade;

/*=============Execução==============*/
int main(){

    do {
        printf("Escolha um lanche: \n \n");
        printf(" 100 - Cachorro quente -> R$ 10,10 \n 101 - Bauru simples -> R$ 8,30 \n 102 - Bauru com ovo -> R$ 8,50 \n 103 - Hamburgue -> R$ 12,50 \n 104 - cheeseburguer -> R$ 13,25 \n \n");
        printf("Digite o numero do lanche: \n");
        scanf("%d", &pedido);
        printf("Quantos voce vai querer?? \n \n");
        scanf("%d", &quantidade);

        switch (pedido) {
            case 100:
                valorAPagar = valorAPagar + quantidade * 10.10;
                printf("Voce pediu %d cachorros quentes \n deu %.2f reais \n \n", quantidade, quantidade * 10.10);
                break;
            
            case 101:
                valorAPagar = valorAPagar + quantidade * 8.30;
                printf("Voce pediu %d Bauru simples \n deu %.2f reais \n \n", quantidade, quantidade * 8.30);
                break;

            case 102:
                valorAPagar = valorAPagar + quantidade * 8.50;
                printf("Voce pediu %d Bauru com ovo \n deu %.2f reais \n \n", quantidade, quantidade * 8.50);
                break;

            case 103:
                valorAPagar = valorAPagar + quantidade * 12.50;
                printf("Voce pediu %d Hamburgue \n deu %.2f reais \n \n", quantidade, quantidade * 12.50);
                break;

            case 104:
                valorAPagar = valorAPagar + quantidade * 13.25;
                printf("Voce pediu %d cheeseburguer \n deu %.2f reais \n \n", quantidade, quantidade * 13.25);
                break;

            default:
                printf("digite um pedido valido! \n \n");
        }

        printf("deseja continuar pedindo? \n digite '1' para sim \n digite '0' para não \n");
        scanf("%d", &fimMenu);
        system("clear");

    }while (fimMenu == 1);

    printf("O valor do seu pedido e $ %2.f reais!! \n", valorAPagar);
}