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
//Desenho no terminal feito "boxes"
//
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

//======= STRUCTS
    typedef struct Veiculo{
        int id;
        char Proprietario[20];
        char cor[20];
        char chassi[20];
        char placa[10];
        int ano;
        int tipoDeCombustivel; //1 - álcool, 2 - diesel, 3 - gasolina
        struct Veiculo *proximo; //ponteiro que armazena o endereco do proxima veiculo
    }Veiculo;


/*========= Prototipos das Funções ========*/
    Veiculo* cadastrar(Veiculo *lista);
    Veiculo* buscarVeiculo(Veiculo *lista, int);
    Veiculo* excluir(Veiculo *lista, int);
    void liberarLista(Veiculo *lista);
    void mostrarLista(Veiculo *lista);
    void alterar(Veiculo *Veiculo);
    void limparTela();
    void listarDiesel2010OuPosterior(Veiculo *lista);
   // int validaCombustivel(Veiculo tipoDeCombustivel);    

/*============== EXECUÇÃO ================*/
    int main(){
//======= VARIAVEIS main
int opcao;
int idBusca;
Veiculo *encontrado;//armazenar o veiculo encontrada para excluir ou alterar
Veiculo *lista = NULL;

//======= ESCOPO 
setlocale(LC_ALL, "Portuguese");

    do{
        printf("\n ____________________________");
        printf("\n/\\                           \\");
        printf("\n\\_| MENU PRINCIPAL: digite      |");
        printf("\n  |                              |");
        printf("\n  |   1 --> Cadastrar veículo    |"); 
        printf("\n  |   2 --> Mostar veículos      |");
        printf("\n  |   3 --> Buscar por veículo   |");
        printf("\n  |   4 --> Alterar um veículo   |");
        printf("\n  |   5 --> Excluir um veículo   |");
        printf("\n  |   6 --> Para função A        |");
        printf("\n  |                              |");
        printf("\n  | Digite 0 para SAIR           |");
        printf("\n  |   ___________________________|_");
        printf("\n   \\_/_________________________/\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 0:// coisas para acontecer quando sair
            
            break;
            
            case 1:// Cadastra os veiculos 
                lista = cadastrar(lista);
            break;

            case 2://Mostra (Lista) os ceiculos cadastrados
                mostrarLista(lista);
            break;

            case 3: // Busca os veiculos cadastrados(Pesquisa)
                printf("Digite o id para busca");
                scanf("%d", &idBusca);
                encontrado = buscarVeiculo(lista, idBusca);
            break;

            case 4:// Altera as informações de algum veiculo cadastrado
                printf("\nDigite o do veiculo id para alteração");
                scanf("%d", &idBusca);
                encontrado = buscarVeiculo(lista, idBusca);
                if(encontrado != NULL){
                    alterar(encontrado);
                }
            break;

            case 5:// Exclui algum veiculo da lista
                printf("\nDigite do Veiculo id para exclusão");
                scanf("%d", &idBusca);
                lista = excluir(lista, idBusca);
            break;

            case 6:
                listarDiesel2010OuPosterior(lista);
            break;

            default:// O que acontece se nem um das opções for escolida
                limparTela();
                printf("Opção Invalida!!!\nDigite um numeto valido\n");
                
            break;
        }

    }while(opcao != 0);

    liberarLista(lista);
    return 0;
    }

/*=============== FUNÇõES =============== */

//---> Aloca espaço na memoria para um novo veiculos
    Veiculo* criarVeiculo(){
        Veiculo *novoVeiculo = (Veiculo*)malloc(sizeof(Veiculo));
        if(novoVeiculo == NULL){
            printf("Erro de alocação de memoria");
            exit(EXIT_FAILURE);//tipo de tratamento de erro
        }
        novoVeiculo->proximo = NULL;
        return novoVeiculo;
    }

//---> Cadastra as informações do veiculo na memoria ja alocada
    Veiculo* cadastrar(Veiculo *lista){
        srand(time(NULL));
        Veiculo *novoVeiculo = criarVeiculo();
        novoVeiculo->id = rand() % 1000;

        printf("Nome do proprietario: ");
        fflush(stdin);
        fgets(novoVeiculo->Proprietario, sizeof(novoVeiculo->Proprietario), stdin);
        
        printf("Cor do veiculo: ");
        fflush(stdin);
        fgets(novoVeiculo->cor, sizeof(novoVeiculo->cor), stdin);

        printf("Numero do chassi: ");
        fflush(stdin);
        fgets(novoVeiculo->chassi, sizeof(novoVeiculo->chassi), stdin);

        printf("Placa do veiculo: ");
        fflush(stdin);
        fgets(novoVeiculo->placa, sizeof(novoVeiculo->placa), stdin);

        printf("Ano de fabricação do veiculo: ");
        scanf("%d", &novoVeiculo->ano);

        printf("Tipo de combustivel: ");
        printf("1 --> para álcool \n2 --> para diesel \3 --> gasolina \n"); /// !!! ATENÇÃO !!! Criar um validador aqui estilo atividade avaliativa 2-1
        scanf("%d", &novoVeiculo->tipoDeCombustivel);

        //verificar se a lista é nula
        if(lista == NULL){
            return novoVeiculo;
        }else{
            Veiculo *atual = lista;
            while(atual->proximo != NULL){
                atual = atual->proximo;
                //sai da repeticao quanto encontrar o elemento que aponta pra NULL
            }
            atual->proximo = novoVeiculo;
            return lista;//atualizar a lista 
        }
    }

//---> Lista todos veiculos cadastrados
    void mostrarLista(Veiculo *lista){
            Veiculo *atual = lista;
            if(lista == NULL){
                printf("\nLista nula\n");
                return;
            }
            else{
                while(atual != NULL){
                    printf("\n/*       _\\|/_");
                    printf("\n         (o o)");
                    printf("\n +----oOO-{_}-OOo----------------------+\n|");
                    printf("\n|  Nome do proprietario: %s", atual->Proprietario);
                    printf("\n|  Cor do veiculo: %s", atual->cor);
                    printf("\n|  Tipo combustiveu: %d", atual->tipoDeCombustivel);
                    // Printa futura validação do combustivel
                    printf("\n|  Ano do veiculo: %d", atual->ano);
                    printf("\n|  Chassi do Veiculo: %s", atual->chassi);
                    printf("\n|  Placa do Veiculo: %s", atual->chassi);
                    printf("\n|\n|          ID: %d", atual->id);
                    printf("\n|\n +------------------------------------*/");
                    atual = atual->proximo;
                }
            }
    }

//---> Buscar veiculos na lista
    Veiculo* buscarVeiculo(Veiculo *lista, int idBusca){
        Veiculo *atual = lista;
            while(atual != NULL){
                if(atual->id == idBusca){
                    printf("\nNome do proprietario: %s", atual->Proprietario);
                    printf("\nCor do veiculo: %s", atual->cor);
                    printf("Tipo combustiveu: %d", atual->tipoDeCombustivel);
                    // Printa futura validação do combustivel
                    printf("Ano do veiculo: %d", atual->ano);
                    printf("Chassi do Veiculo: %s", atual->chassi);
                    printf("Placa do Veiculo: %s", atual->chassi);
                    printf("\nID: %d", atual->id);
                    printf("\n");
                    return atual;
                }
                atual = atual->proximo;
            }
        printf("Veiculo nao encontrada");
        return NULL;
    }

//---> Altera as informações dos veiculos cadastrados
    void alterar(Veiculo *Veiculo){
        printf("Digite nome do novo proprietario: ");
        fflush(stdin);
        fgets(Veiculo->Proprietario, sizeof(Veiculo->Proprietario), stdin);

        printf("Cor do veiculo: ");
        fflush(stdin);
        fgets(Veiculo->cor, sizeof(Veiculo->cor), stdin);

        printf("Numero do chassi: ");
        fflush(stdin);
        fgets(Veiculo->chassi, sizeof(Veiculo->chassi), stdin);

        printf("Placa do veiculo: ");
        fflush(stdin);
        fgets(Veiculo->placa, sizeof(Veiculo->placa), stdin);

        printf("Ano de fabricação do veiculo: ");
        scanf("%d", &Veiculo->ano);

        printf("Tipo de combustivel: ");
        printf("\n1 --> para álcool"); 
        printf("\n2 --> para diesel");
        printf("\n3 --> gasolina \n");
        /// !!! ATENÇÃO !!! Criar um validador aqui estilo atividade avaliativa 2-1
        scanf("%d", &Veiculo->tipoDeCombustivel);
    }

//---> Exclui algum veiculo da lista
    Veiculo* excluir(Veiculo *lista, int idBusca){
        Veiculo *atual = lista;
        Veiculo *anterior = NULL;

        while(atual != NULL && atual->id != idBusca){
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
            printf("Veiculo nao encontrada");
        }
        return lista;
    }

//---> Apaga toda a lista da memoria
void liberarLista(Veiculo *lista){
    Veiculo *atual = lista;
    Veiculo *proximo;
    while(atual != NULL){
        proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
}

//---> Limpa a tela do terminal 
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

//---> Lista carros do ano de 2010 ou posterior e que sejam movidos a diesel
    void listarDiesel2010OuPosterior(Veiculo *lista){
        Veiculo *atual = lista;
        if(lista == NULL){
            printf("\nLista nula\n");
            return;
        }
        else{
            while(atual != NULL){
                if (atual->ano >= 2010 && atual->tipoDeCombustivel == 2) {
                    printf("Nome do proprietario: %s \n", atual->Proprietario);
                }
            }
        }
    }   

//---> Pausa o terminal
  //  void pausarTela(const char *mensagem) {
  //  printf("%s", mensagem);
//    getchar();  // Aguarda a entrada de um caractere
//}


//---> Valida e entrega tipo de combustivel
//int validaCombustivel(Veiculo tipoDeCombustivel){}