/*Fazer um programa que solicita o total gasto pelo cliente de uma loja, imprime as opções de pagamento, 
solicita a opção desejada e imprime o valor total das prestações (se houverem).

a) Opção: a vista com 10% de desconto

b) Opção: em duas vezes (preço da etiqueta)

c) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).

OBS: fazer uma função que imprime as opções, solicita a opção desejada e retorna a opção escolhida. 
No programa principal, testar a opção escolhida e ativar a função correspondente (uma função para cada opção). 
*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>
#include <stdlib.h>
/*========= Prototipos das Funções ========*/
int escolherOpção();
void avista(float);
void parcelarDuas(float);
void parcelarTresouMais(float);

/*============== EXECUÇÃO ================*/
    int main(){
//======= VARIAVEIS 
    int escolha;
    float totalCompra;

//======= ESCOPO
    printf("Qual foi o seu gasto total na loja?? \n");
    scanf("%f", &totalCompra);

    escolha = escolherOpção();

        switch (escolha)
        {
        case 1: 
            avista(totalCompra);
            break;
        case 2: 
            parcelarDuas(totalCompra);
            break;
        case 3: 
            parcelarTresouMais(totalCompra);
            break;
        default:
            break;
        }

    return 0;

    }

/*=============== FUNÇõES =============== */

//---> Ecolher a opção correta
    int escolherOpção(){
        int escolha;

        printf("Deseja parcelar em quantas vezes?? \n");
        printf("Digite 1 -> Pagar a vista. \nDigite 2 -> Pagar a em duas vezes. \nDigite 3 -> de 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00) \n");
        scanf("%d", &escolha);

            while(escolha < 1 || escolha > 10){
                system("clear");
                printf("Opção invalida, digite um numero valido!!");
                printf("Digite 1 -> Pagar a vista. \nDigite 2 -> Pagar a em duas vezes. \nDigite 3 -> de 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00) \n");
                scanf("%d", &escolha);                
            }
            
            return escolha;
            
    }

//---> Compra a vista
    void avista(float totalCompra){
        float totalFinalCompra = totalCompra - (totalCompra * 10 / 100);

        printf("Voce vai pagar avista com 10%% de esconto, o final sai $ %.2f reais", totalFinalCompra);
    }    

//---> Parcela em duas vezes
    void parcelarDuas(float totalCompra){
        float valorParcelas = totalCompra / 2;

        printf("Voce vai pagar duas parcelas de $ %.2f reais", valorParcelas);
    }

//---> Parcela em 3 ou mais vezes
    void parcelarTresouMais(float totalCompra){
        int quantidadeParcelas;
        float juros;
        float finalCompra;
        float valorDasParcelas;

        if (totalCompra < 100)
        {
            printf("Não e possivel para parcelar desta forma e precizo ter uma compra acima de 100 reais");
            return;
        }

        printf("Em quantas parcelas voce que pagar? \n");
        scanf("%d", &quantidadeParcelas);

        while (quantidadeParcelas < 3 || quantidadeParcelas > 10)
        {
            system("clear");
            printf("Opção invalida, so pode ser parcelado entre 3 e 10 \n");
            printf("Digite novamente, ou digite 100 para sair \n");
            scanf("%d", &quantidadeParcelas);

            if (quantidadeParcelas == 100) {
                return;
            }
        }
        
        juros = totalCompra * 3 / 100;
        finalCompra = totalCompra + (juros * quantidadeParcelas);
        valorDasParcelas = finalCompra / quantidadeParcelas;

        printf("Voce vai pagar R$ %.2f de juros ao mês \n", juros);
        printf("Voce vai pagar %d parcelas de %.2f \n", quantidadeParcelas, valorDasParcelas);
        printf("No final voce vai pagar %.2f reais", finalCompra);
        
    }