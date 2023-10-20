/*Faça uma função que receba um número inteiro entre 1 a 12 e imprima em tela o mês e a
sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo:
Entrada = 4. Saída = abril.*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>
#include <string.h>

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

    char nomeMes[20];
    int diasMes = 0;

    switch (n1) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            diasMes = 31;

            if (n1 == 1)
            {
                strcpy(nomeMes, "Janeiro");
            }else if (n1 == 3)
            {
                strcpy(nomeMes, "Março");
            }else if (n1 == 5)
            {
                strcpy(nomeMes, "Maio");
            }else if (n1 == 7)
            {
                strcpy(nomeMes, "Julho");
            }else if (n1 == 8)
            {
                strcpy(nomeMes, "Agosto");
            }else if (n1 == 10)
            {
                strcpy(nomeMes, "Outubro");
            }else if (n1 == 12)
            {
                strcpy(nomeMes, "Desembro");
            }
            break;
        case 4: case 6: case 9: case 11:
            diasMes = 30;
            if (n1 == 4)
            {
                strcpy(nomeMes, "Abril");
            }else if (n1 == 6)
            {
                strcpy(nomeMes, "Junho");
            }else if (n1 == 9)
            {
                strcpy(nomeMes, "Setembro");
            }else if (n1 == 11)
            {
                strcpy(nomeMes, "novembro");
            }
            break;
        
        case 2:
            diasMes = 28;
            strcpy(nomeMes, "Fevereiro");
            break;

        default:
            printf("Opção invalida!!");
            break;

    }

    printf("O mes tem %d dias e o mes %s", diasMes, nomeMes);        

}