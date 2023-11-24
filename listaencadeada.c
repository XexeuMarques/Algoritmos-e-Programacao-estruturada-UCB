#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct pessoa{
    int id;
    char nome[20];
    int idade;
    struct Pessoa *prox;
}Pessoa;

Pessoa* criarListaVazia(){
    return NULL; //Retorna vazio
}

//adiciona uma nova pessoa na lista
//Retorna o ebdereço da novaPessoa 
Pessoa* criarPessoa(){
    //Aloca memoria
    Pessoa *novaPessoa = (Pessoa*)malloc(sizeof(Pessoa));
    //Verificar se a memoria inssuficiente
    if (novaPessoa == NULL){
        printf("Erro de alocação!! \n");
        //Tratamento de erro
        exit(EXIT_FAILURE);
    }

    novaPessoa->prox = NULL;    
    return novaPessoa;//retorna enderreço de memoria alocado para a nova pessoa
}

//cadastra a pessoa
Pessoa cadastra(Pessoa *lista){
    //pega enderesso da nova pessoa retornado por criarPessoa()
    Pessoa *novaPessoa = criarPessoa();

    //gera um id
    srand(time(NULL));
    novaPessoa->id = rand() % 100;
    
    //pega o nome da pessoa
    printf("Digite o nome: ");
    fgets(novaPessoa->nome, sizeof(novaPessoa), stdin);

    //pega a idade da pessoa
    printf("\nDigite a idade: ");
    scanf("%d", &novaPessoa->idade);

    //Duas situações
    //1 - Lista vazia -> primeiro da lista
    //2 - ja tem alguem na lista 

    if (lista == NULL){
        return novaPessoa;
    }else{
        // atual começão sempre pelo primeiro da lista
        Pessoa *atual = lista; // ponteiro alxiliar
        // pesrcorrer a lista ate achar a utima pessoa que aponta para = NULL
        while (atual->prox != NULL){
            atual = atual->prox;
        }
        
        // atual agora e a nova pessoa
        atual->prox = novaPessoa;

        // retorna a lista atualizada
        return lista;
        
    }
    
}

int main(){
    int opcao;
    Pessoa *lista = criarListaVazia(); // inicia a lista com NULL

    do
    {
        printf("\n============================================\n");
        printf("|      Menu Principal                      |\n");
        printf("|==========================================|\n");
        printf("|    1. cadastra usuario                   |\n");
        printf("|    2. Listar todos os usuarios           |\n");
        printf("|    3. Busque um usuário                  |\n");
        printf("|    4. Edite um usuário                   |\n");
        printf("|    5. Exclua um usuário                  |\n");
        printf("|    0. Sair do programa                   |\n");
        printf("|==========================================|\n");
        printf("|   Escolha uma opcao:                     |\n");
        printf("============================================\n");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
                lista = cadastra(lista);//cadastra tem um retorno return novaPessoa;

            default:
                break;
        }
    } while (opcao != 0);


}