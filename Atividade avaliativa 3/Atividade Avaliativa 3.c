/*
Implementar um sistema de controle de estoque com as funcionalidades de cadastrar produtos, consultar produtos, 
gerar relatório de produtos e remover produtos do estoque. Funções que deverão estar presentes no código:

Função que inicializa uma lista vazia; (0,5 ponto)
Função que adiciona um novo produto à lista de estoque. Ela solicita ao usuário informações como código, descrição, quantidade e valor do produto. (0,5 ponto)
Função que percorre a lista de estoque e imprime um relatório com as informações de cada produto, incluindo código, descrição, quantidade e valor. (0,5 ponto)
Função que permite ao usuário pesquisar um produto pelo código. (0,5 ponto)
Função que permite ao usuário remover um produto do estoque. Ela solicita o código do produto a ser removido e busca na lista o produto correspondente. 
Se encontrar o produto, o remove da lista. Caso contrário, exibe uma mensagem informando que o produto não está cadastrado. (1,0 ponto)

O sistema deverá exibir um menu com as opções disponíveis e realizar as chamadas correspondentes às funções acima, de acordo com a escolha do usuário. 
O loop deverá continuar até que o usuário escolha sair do programa.
*/
//
//Michel Marques Dos Santos
//
#include<stdio.h>
#include<stdlib.h>

//======= STRUCTS
typedef struct Produto {
  int codigo;
  char descricao[50];
  int quantidade;
  float valorProduto;
  struct Produto *proximo;//ponteiro que armazena o endereco do proximo produto
} Produto;

/*========= Prototipos das Funções ========*/
Produto* iniciarListaVazia();
Produto* adicionarProduto(Produto *lista);
Produto* pesquisarProduto(Produto *lista, int);
Produto* removerProduto(Produto *lista, int);
void imprimirRelatorio(Produto *lista);

/*============== EXECUÇÃO ================*/
    int main(){
//======= VARIAVEIS 
Produto *lista = iniciarListaVazia();
int opcao;
int idBusca;

//======= ESCOPO

    Produto *encontrada;//armazenar a pessoa encontrada para excluir ou alterar

    do{
        printf("\nDigite 1 para adicinar um produto");
        printf("\nDigite 2 para gerar relatorio dos produtos");
        printf("\nDigite 3 para buscar por produto");
        printf("\nDigite 0 para remover um");
        printf("\nDigite 0 para sair");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                lista = adicionarProduto(lista);
            break;
            case 2:
                imprimirRelatorio(lista);
            break;
            case 3:
                printf("Digite o id para busca");
                scanf("%d", &idBusca);
                encontrada = pesquisarProduto(lista, idBusca);
            break;

            case 5:
                printf("\nDigite o id para exclusao");
                scanf("%d", &idBusca);
                lista = removerProduto(lista, idBusca);
            break;
        }
    }while(opcao != 0);


    return 0;
    }

/*=============== FUNÇõES =============== */

//---> Iniciar lista vazia
    Produto* iniciarListaVazia(){
        return NULL;
    }

//---> adiciona um novo produto

//---> Imprimir todos os produtos na tela

//---> Faz a busca do produto pelo codgo

//---> apaga um produto