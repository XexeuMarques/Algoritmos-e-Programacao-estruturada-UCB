// CRUD basico utilizando estrutura de dados de lista
// o variavel ponteiro lista -> armazena o endereço de memoria do primeira pessoa da lista, para dar inicio a lista
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct Pessoa{
    char nome[50];
    int idade;
    int id;
    struct Pessoa *proximoDaLisa;//ponteiro que armazena o endereco do proxima pessoa
}Pessoa;

Pessoa* criarListaVazia(){
    return NULL;
}

//funcao para criar um novo registro separado
Pessoa* criarPessoa(){
    Pessoa *novaPessoa = (Pessoa*)malloc(sizeof(Pessoa)); //aloca espaço na uma memoria
    if(novaPessoa == NULL){ // validação se a memoria
        printf("Erro de alocacao de memoria");
        exit(EXIT_FAILURE);
    }
    novaPessoa->proximoDaLisa = NULL; //o prox ta como nullo, por que e o utimo da lista sempre aponta para o null
    return novaPessoa;
}
//inserir informações no campo ja alocado criarPessoa()
Pessoa* cadastrar(Pessoa *lista){ 
    srand(time(NULL));
    Pessoa *novaPessoa = criarPessoa(); // chamada para cria aloca memoria e colocar null no prox dela
    novaPessoa->id = rand() % 100;
    printf("\nDigite o nome: ");
    fflush(stdin);
    fgets(novaPessoa->nome, sizeof(novaPessoa->nome), stdin);
    printf("\nDigite a idade: ");
    scanf("%d", &novaPessoa->idade);

    //--> agora tem que colocar o cadastrado na lista

    //duas situações 1 - colocar no inicio da lista se vazia 2 - ja tem alguem na lista colocar no final e o prox e null

    //verificar se a lista é nula
    if(lista == NULL){
        return novaPessoa; // agora a lista armazena enderesso da primeira pessoa cadastada, retornado 
    }else{
        Pessoa *atual = lista; 
        while(atual->proximoDaLisa != NULL){ // percorre a lista ate achar o null, ate o atual for null, porque o ultimo da fila e null
            atual = atual->proximoDaLisa; // pinteiro atual recebe o ponteiro do proximo da fila
            //sai da repeticao quanto encontrar o elemento que aponta pra NULL
        }
        atual->proximoDaLisa = novaPessoa; // o atual que e nulll ,recebe o enderesso na nova pessoa cadastrada
        return lista;//atualizar a lista
    }
}
 void mostrarLista(Pessoa *lista){
        if(lista == NULL){ // se não tiver niguem na lista
            printf("\nLista nula\n");
            return;
        }
        else{
            Pessoa *atual = lista; // passa a lista para atual
            while(atual != NULL){ // sai quando o pronimo da lista for null
                printf("\nNome: %s", atual->nome);
                printf("Idade: %d", atual->idade);
                printf("\nID: %d", atual->id);
                printf("\n");
                atual = atual->proximoDaLisa; // aponta para a proxima da lista
            }
        }
 }
 Pessoa* buscarPessoa(Pessoa *lista, int idBusca){
        Pessoa *atual = lista;
         if(lista == NULL){ // se não tiver niguem na lista
            printf("\nLista nula\n");
            return;
        }else{  
            while(atual != NULL){
                if(atual->id == idBusca){ // compara os id busca com id do atual
                    printf("\nNome: %s", atual->nome);
                    printf("\nIdade: %d", atual->idade);
                    printf("\nID: %d", atual->id);
                    return atual; // retorna e feicha a função porque conseguil achar
                }
                atual = atual->proximoDaLisa;
            }

            printf("Pessoa não foi encontrada\n");
            return NULL; // retona nullo porque não achoun niguem

        }

    printf("Pessoa nao encontrada");
    return NULL;
 }

void alterar(Pessoa *pessoa){ //a função faz todo o trabalho de enconta a pessoa, aqui so altera
    printf("Alteração nos campos!!\n");
    printf("Digite o novo nome");
    fflush(stdin);
    fgets(pessoa->nome, sizeof(pessoa->nome), stdin);
    fflush(stdin);
    printf("Digite a nova idade");
    fflush(stdin);
    scanf("%d", &pessoa->idade);

    // não precisa retorna nada, pois não vai altera a lista, so a informação de alguem dentro da lista, não os enderreços de memoria
    //nunca muda o id
}


 Pessoa* excluir(Pessoa *lista, int idBusca){
    Pessoa *atual = lista; // aponta para primeira pessoa da lista
    Pessoa *anterior = NULL; // o primeiro sempra e null o anterior
    // e precisso saber quem vem antes, para realocar -> ponteiro para guardar quem vem antes
    // se não se perde na memoria

    while(atual != NULL && atual->id != idBusca){ //enquanto existe alguem antes && exiate alguem depois e id foi encontrado pela busca
    	anterior = atual;//atencao, aqui a ordem de declaracao importa (esse era nosso problema na exclusao)
        atual = atual->proximoDaLisa;
        // em uma ora o ponteiro atual sera null, pois e apontado para o proximo da lista    
    }
    // agora temos o inderesso do atual e do anterio a excluir
    if(atual != NULL){
        if(anterior != NULL){
            //exclusão alguem que não exta no inicio da lista
            anterior->proximoDaLisa = atual->proximoDaLisa;
        }else{
            //excluir a maria (primeiro da lista)
            lista = atual->proximoDaLisa;
        }
        free(atual);// free libera endereço de memoria, para uso
        printf("Removido com sucesso");
    }else{// caso não encontrado
        printf("Pessoa nao encontrada");
    }
    return lista; //lista com os apontamentos dos ponteiros atualizados
}

//da um free() na lista inteira, limpa toda memoria da lista, um por um da lista

void liberarLista(Pessoa *lista){
    Pessoa *atual = lista;
    Pessoa *proximaPessoa;

    while(atual != NULL){ // enquanto não chagar no final da fila
        proximaPessoa = atual->proximoDaLisa;
        free(atual);
        atual = proximaPessoa;
    }
}


int main(){
    int opcao;
    int idBusca;
    Pessoa *encontrada;//armazenar a pessoa encontrada para excluir ou alterar
    Pessoa *lista = criarListaVazia();//sempre vai ser o primeiro da lista
    do{
        printf("\nDigite 1 para cadastrar");
        printf("\nDigite 2 para mostrar");
        printf("\nDigite 3 para buscar");
        printf("\nDigite 4 para alterar");
        printf("\nDigite 5 para excluir");
        printf("\nDigite 0 para sair\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                lista = cadastrar(lista); // atalizando a lista com o retorno da função
            break;
            case 2:
                mostrarLista(lista);
            break;
            case 3:
                printf("Digite o id para busca:");
                scanf("%d", &idBusca);
                encontrada = buscarPessoa(lista, idBusca);
            break;
            case 4:
                printf("\nDigite o id para Busca o id e fazer a alteracao");
                scanf("%d", &idBusca);
                //primeiro busca, depois pega o id do encontra e chama a função alterar
                encontrada = buscarPessoa(lista, idBusca); // caso não encontra retorna o não encontrado do busca
                if(encontrada != NULL){ // encontrou a pessoa então agora pode alterar
                    alterar(encontrada);
                }
            break;
            case 5:
             printf("\nDigite o id para exclusao");
             scanf("%d", &idBusca);
             lista = excluir(lista, idBusca);
            break;
        }
    }while(opcao != 0);

    liberarLista(lista); // Libera memoria

return 0;
}