/*
Em uma fábrica de peças, o salário base dos operários é de R$ 600,00. 
Além do salário base, cada operário recebe um adicional de produtividade baseado na quantidade de peças fabricadas por mês. 
Este adicional é pago de acordo com o seguinte critério:

- Se o número de peças for inferior ou igual a 50, não existe adicional de produtividade;
- Se o número de peças for superior a 50 e inferior ou igual a 80, o adicional de produtividade será de R$ 0,50 para cada peça fabricada acima de 50;
- Se o número de peças for superior a 80, o adicional de produtividade será de R$ 0,50 para cada peça fabricada acima de 50 até 80 e de R$ 0,75 por peça fabricada acima das 80.

Elabore um algoritmo para solicitar de cada funcionário a quantidade de peças fabricadas naquele mês e apresentar o seu salário. 
Isto deve se repetir para todos os funcionários da empresa, ***onde o usuário não sabe, inicialmente***, 
quantos funcionários existem nesta empresa, ou seja, o número de funcionários não será fornecido.
Sua solução proposta deverá possuir as lógicas bem definidas que sejam necessárias a implementação separada em sub-algoritmos específicos, devendo pelo menos os seguintes sub-algoritmos:

1. ***validaQuantidade*** que validará o número de peças fabricadas por cada funcionário;
2. ***calculaSalario*** que efetuará o cálculo do salário total para cada funcionário.
    
O resultado final será mostrado ao usuário por meio de um procedimento (***mostraFinal***).
*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>
/*========= Prototipos das Funções ========*/
    
    float calculaSalario(int);
    int validaQuantidade(int);
    void mostraFinal(int);

/*============== EXECUÇÃO ================*/
    int main(){
//======= VARIAVEIS 
        int numeroDePecas;
        float salarioBase = 600.00;
        char i;

//======= ESCOPO

        do {
            printf("Quantas peças voce fabricou hoje?: ");
            scanf("%d", &numeroDePecas);
            mostraFinal(numeroDePecas);

            printf("ainda a funcionarios?: Y para sim N para não\n\n");
            scanf(" %c", &i);
            if (i == 'n' || i =='N') {
                numeroDePecas = -1;
            }

        } while (numeroDePecas >= 0);

        return 0;
    }

/*=============== FUNÇõES =============== */

//--->
    int validaQuantidade(int numeroPecas) {
        if (numeroPecas >= 0) {
            return numeroPecas;
        } else {
            return 1;
        }
    }

    float calculaSalario(int numeroPecas) {
        if (numeroPecas < 50) {
            return 600.00;
        } else if (numeroPecas <= 80) {
            return 600.00 + (numeroPecas - 50) * 0.50;
        } else {
            return (numeroPecas - 80) * 0.75 + 600.00 + 15.00;
        }
    }

    void mostraFinal(int numeroPecas) {
        if (validaQuantidade(numeroPecas) == 1) {
            printf("Quantidade inválida\n");
        } else {
            printf("O seu salário final é de: %.2f\n", calculaSalario(numeroPecas));
        }
    }

    