/*Faça uma função que receba um número inteiro entre 1 a 12 e imprima em tela o mês e a
sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo:
Entrada = 4. Saída = abril.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>

/*========= Prototipos das Funções ========*/
void mes(int n1);

/*============== EXECUÇÃO ================*/

    int main(){
//======= VARIAVEIS 
    int mesNumero;

//======= ESCOPO

    printf("Digite um numero de mes (1 a 12):");
    scanf("%d", &mesNumero);

        while (mesNumero < 1 || mesNumero > 12) { //== Validação
            printf("Mes invalido !! \nDigite um mes valido (de 1 a 12):");
            scanf("%d", &mesNumero);
        }

    mes(mesNumero);

    return 0;
    }

/*=============== FUNÇõES =============== */

//----> Fumção imprime o mês
void mes(int n1){

    switch (n1) {
        case 1:
            printf("Janeiro");
        break;
        case 2:
            printf("Fevereiro");
        break;
        case 3:
            printf("Março");
        break;
        case 4:
            printf("Abril");
        break;
        case 5:
            printf("Maio");
        break;
        case 6:
            printf("Junho");
        break;
        case 7:
            printf("Julho");
        break;
        case 8:
            printf("Agosto");
        break;
        case 9:
            printf("Setembro");
        break;
        case 10:
            printf("Outubro");
        break;
        case 11:
            printf("Novembro");
        break;
        case 12:
            printf("Desembro");
        break;
    }

}