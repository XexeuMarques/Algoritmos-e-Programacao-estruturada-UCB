/*
Para o controle dos veículos que circulam em uma determinada cidade, a Secretaria dos Transportes criou o seguinte registro padrão:

    Proprietário:_______ Combustível:____
    Modelo: ____________ Cor: ___________
    Nº chassi: _________ Ano: ___________ Placa: _______

Em que:
Combustível pode ser álcool, diesel ou gasolina;
Placa possui os três primeiros valores alfabéticos e os quatro restantes valores numéricos.
Sabendo que não temos uma definição do número máximo de veículos da cidade e que é preciso armazenar todos os valores em uma lista encadeada simples, construa:

a. Uma função que liste todos os proprietários cujos carros são do ano de 2010 ou posterior e que sejam movidos a diesel. (1,0 ponto)
b. Uma função que liste todas as placas que comecem com a letra J e terminem com 0, 2, 4 ou 7 e seus respectivos proprietários. (1,0 ponto)
c. Uma função que liste o modelo e a cor dos veículos cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numéricos fornece um número par. (1,0 ponto)
d. Uma função que permita a troca de proprietário com o fornecimento do número do chassi apenas para carros com placas que não possuam nenhum dígito igual a zero. (1,0 ponto)
*/
//
//Michel Marques Dos Santos
//
#include<stdio.h>
#include<stdlib.h>

/*========= Prototipos das Funções ========*/
    void limparTela();

//======= STRUCTS

/*============== EXECUÇÃO ================*/
    int main(){
//======= VARIAVEIS 
int opcao;

//======= ESCOPO 

    do{
        printf("\n ____________________________");
        printf("\n/\\                           \\");
        printf("\n\\_| MENU PRINCIPAL: digite   |");
        printf("\n  |                          |");
        printf("\n  |         1 ---> Cadastrar |");
        printf("\n  |         2 ---> Mostar    |");
        printf("\n  |         3 ---> Buscar    |");
        printf("\n  |         1 ---> Alterar   |");
        printf("\n  |         1 ---> Excluir   |");
        printf("\n  |                          |");
        printf("\n  | Digite 0 para SAIR       |");
        printf("\n  |   _______________________|_");
        printf("\n   \\_/_________________________/\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 0:
            break;
            
            case 1:

            break;

            default:
                limparTela();
                printf("Opção Invalida!!!\nDigite um numeto valido\n");
                
            break;
        }

    }while(opcao != 0);

    return 0;
    }

/*=============== FUNÇõES =============== */

//---> Limpa a tela em qualquer sistema 
    void limparTela() {
        #ifdef _WIN64 // Comando para limpar tela no Windows
            system("cls");  
        #elif _WIN32
            system("cls");  
        
        #elif __linux // Comando para limpar tela no Linux
            system("clear");
        #else //Outros
            printf("\nSistena não reconhecido\nNão e possivei lipar o temina");
            getchar();
        #endif
    }