/*
1. Fazer um programa que solicita o total gasto pelo cliente de uma loja, 
imprime as opções de pagamento, solicita a opção desejada e imprime o valor total das prestações (se houverem).

a) Opção: a vista com 10% de desconto

b) Opção: em duas vezes (preço da etiqueta)

c) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).

OBS: fazer uma função que imprime as opções, solicita a opção desejada e retorna a opção escolhida. 
No programa principal, testar a opção escolhida e ativar a função correspondente (uma função para cada opção). 
*/
#include <stdio.h>
#include <stdlib.h>

int EscolherOpçãoMenu();
void parcelarDuas(float);
void parcelarTres(float);
void avista(float);

int main(){
    float totalCompra;
    int opcaoescolida;

    printf("Qual foi o seu gasto total na loja?? \n")
    scanf("%f", &totalCompra);

    opcaoescolida = EscolherOpçãoMenu();

    switch (opcaoescolida)
    {
    case 1: 
        avista(totalCompra);
        break;
    case 2: 
        parcelarDuas(totalCompra);
        break;
    case 2: 
        parcelarTres(totalCompra);
        break;
    default:
        break;
    }

}

//===================
// Validador
int EscolherOpçãoMenu(){
    int opcao;

    printf("Deseja parcelar em quantas vezes?? \n");
    printf("Digite 1 -> Pagar a vista. \nDigite 2 -> Pagar a em duas vezes. \nDigite 3 -> de 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00) \n");
    scanf("%d", &opcao);

        do
        {
            system("cls");
            printf("Opção invalida, digite um numero valido!!");
            printf("Digite 1 -> Pagar a vista. \nDigite 2 -> Pagar a em duas vezes. \nDigite 3 -> de 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00) \n");
            scanf("%d", &opcao); 
        } while (opcao < 1 || opcao > 10);
        
        return opcao;

}

void avista(float totalCompra){
    float totalFinalCompra = totalCompra - (totalCompra * 10 / 100);

    printf("Voce vai pagar avista com 10%% de esconto, o final sai $ %.2f reais", totalFinalCompra);
}

void parcelarDuas(float totalCompra){
    float valorParcelas = totalCompra / 2;

    printf("Voce vai pagar duas parcelas de $ %.2f reais", valorParcelas);
}

void parcelarTres(float totalCompra){
    float juros = totalCompra * 3 / 100;
    float totalCompra = totalCompra + juros;
    int quantidadeParcelas;
    float valorDasParcelas = totalCompra / quantidadeParcelas;

    if (totalcompra < 100)
    {
        printf("Não e possivel parcelar");
        return;
    }
    printf("Em quantas parcelas voce que pagar?")
    scanf("%d", &quantidadeParcelas);

    while (quantidadeParcelas < 3 || quantidadeParcelas > 10)
    {
        system("cls");
        printf("Opção invalida, so pode entra 3 e 10\n");
        printf("Digite novamente");
        scanf("%d", quantidadeParcelas)
    }
    

    printf("Voce vai pagar R$ %.2f de juros ao mes \n", juros);
    printf("Voce vai pagar %d parcelas de %.2f", quantidadeParcelas, valorDasParcelas);
    printf("O final vc vai pagar %.2f reais", )
    


}
