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
                printf("Digite o codigo do produto para busca: ");
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
    Produto* criarProduto(){
        Produto *novoProduto = (Produto*)malloc(sizeof(Produto));
        if(novoProduto == NULL){
            printf("Erro de alocacao de memoria");
            exit(EXIT_FAILURE);
        }
        novoProduto->proximo = NULL;
        return novoProduto;
    }
    Produto* adicionarProduto(Produto *lista){
        Produto *novoProduto = criarProduto();

        printf("Digite o codgo do produto: ");
        scanf("%d", &novoProduto->codigo);

        printf("Digite a descricao do produto: ");
        fflush(stdin);
        fgets(novoProduto->descricao, sizeof(novoProduto->descricao), stdin);

        printf("Quantidade do produto: ");
        scanf("%d", &novoProduto->quantidade);

        printf("qual valor do codgo do produto: ");
        scanf("%f", &novoProduto->valorProduto);

        //verificar se a lista é nula
        if(lista == NULL){
            return novoProduto;
        }else{
            Produto *atual = lista;
            while(atual->proximo != NULL){
                atual = atual->proximo;
                //sai da repeticao quanto encontrar o elemento que aponta pra NULL
            }
            atual->proximo = novoProduto;
            return lista;//atualizar a lista 
        }
    }

//---> Imprimir todos os produtos na tela
    void imprimirRelatorio(Produto *lista){
            Produto *atual = lista;
            if(lista == NULL){
                printf("\nLista nula\n");
                return;
            }
            else{
                while(atual != NULL){
                    printf("\nDiscrição:         %s", atual->descricao);
                    printf("\nQuantidade:        %d", atual->quantidade);
                    printf("\nValor:             %.2f", atual->valorProduto);
                    printf("\nCodigo do produto: %d", atual->quantidade);
                    printf("\n");
                    atual = atual->proximo;
                }
            }
    }

//---> Faz a busca do produto pelo codgo
    Produto* pesquisarProduto(Produto *lista, int idBusca){
        Produto *atual = lista;
            while(atual != NULL){
                if(atual->codigo == idBusca){
                    printf("\nDiscrição:         %s", atual->descricao);
                    printf("\nQuantidade:        %d", atual->quantidade);
                    printf("\nValor:             %.2f", atual->valorProduto);
                    printf("\nCodigo do produto: %d", atual->quantidade);
                    printf("\n");
                    return atual;
                }
                atual = atual->proximo;
            }
        printf("Pessoa nao encontrada");
        return NULL;
    }

//---> apaga um produto
    Produto* removerProduto(Produto *lista, int idBusca){
        Produto *atual = lista;
        Produto *anterior = NULL;

        while(atual != NULL && atual->codigo != idBusca){
            anterior = atual;//atencao, aqui a ordem de declaracao importa (esse era nosso problema na exclusao)
            atual = atual->proximo;
            
        }
        if(atual != NULL){
            if(anterior != NULL){
                //exclusão alguem depois da maria
                anterior->proximo = atual->proximo;
            }else{
                //excluir a maria (primeiro da lista)
                lista = atual->proximo;
            }
            free(atual);
            printf("Removido com sucesso");
        }else{
            printf("Produto nao encontrada");
        }
        return lista;
    }