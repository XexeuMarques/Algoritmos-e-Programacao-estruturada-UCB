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
#include<string.h>
#include<locale.h>
#include<time.h>

//======= STRUCTS
    typedef struct Veiculo{
        int id;
        char *Proprietario;
        char *modelo;
        char *cor;
        char *chassi;
        char *placa;
        int ano;
        int tipoDeCombustivel; //1 - álcool, 2 - diesel, 3 - gasolina
        struct Veiculo *proximo; //ponteiro que armazena o endereco do proxima veiculo
    }Veiculo;


/*========= Prototipos das Funções ========*/
    Veiculo* cadastrar(Veiculo *lista);
    Veiculo* buscarVeiculo(Veiculo *lista, int);
    Veiculo* BuscaPorChassi(Veiculo *lista, char chassiBusca[20]);
    Veiculo* excluir(Veiculo *lista, int);
    void liberarLista(Veiculo *lista);
    void mostrarLista(Veiculo *lista);
    void alterar(Veiculo *Veiculo);
    void listarDiesel2010OuPosterior(Veiculo *lista);
    void listarPlacasJ(Veiculo *lista);
    void listarModeloCorVogalSomaPar(Veiculo *lista);
    void trocarProprietarioSemZero(Veiculo *Veiculo);
    // Outros
    void despedidaAleatoria();
    void limparTela();
    int validadorCombustivel(int);
   // int validaCombustivel(Veiculo tipoDeCombustivel);    

/*============== EXECUÇÃO ================*/
    int main(){
//======= VARIAVEIS main
int opcao;
int idBusca;
char chassiBusca[20];
Veiculo *encontrado;//armazenar o veiculo encontrada para excluir ou alterar
Veiculo *lista = NULL;

//======= ESCOPO 
setlocale(LC_ALL, "Portuguese");

    do{

        printf("\n============================================\n");
        printf("|      Menu Principal                      |\n");
        printf("|==========================================|\n");
        printf("|    1. Cadastrar veículo                  |\n");
        printf("|    2. Mostar veículos                    |\n");
        printf("|    3. Buscar por veículo                 |\n");
        printf("|    4. Alterar um veículo                 |\n");
        printf("|    5. Excluir um veículo                 |\n");
        printf("|==========================================|\n");
        printf("|    6. Função [A] do projeto              |\n");
        printf("|    7. Função [B] do projeto              |\n");
        printf("|    8. Função [C] do projeto              |\n");
        printf("|    8. Função [D] do projeto              |\n");
        printf("|                                          |\n");
        printf("|    0. Sair do programa                   |\n");
        printf("|==========================================|\n");
        printf("|   Escolha uma opcao:                     |\n");
        printf("============================================\n");
        scanf("%d", &opcao);
        void limparTela();

        switch(opcao){
            case 0:// coisas para acontecer quando sair
                despedidaAleatoria();
            break;
            
            case 1:// Cadastra os veiculos 
                lista = cadastrar(lista);
            break;

            case 2://Mostra (Lista) os ceiculos cadastrados
                mostrarLista(lista);
            break;

            case 3: // Busca os veiculos cadastrados(Pesquisa)
                printf("Digite o id para busca: ");
                scanf("%d", &idBusca);
                encontrado = buscarVeiculo(lista, idBusca);
            break;

            case 4:// Altera as informações de algum veiculo cadastrado
                printf("\nDigite o do veiculo id para alteração: ");
                scanf("%d", &idBusca);
                encontrado = buscarVeiculo(lista, idBusca);
                if(encontrado != NULL){
                    alterar(encontrado);
                }
            break;

            case 5:// Exclui algum veiculo da lista
                printf("\nDigite do Veiculo id para exclusão: ");
                scanf("%d", &idBusca);
                lista = excluir(lista, idBusca);
            break;

            case 6:
                listarDiesel2010OuPosterior(lista);
            break;

            case 7:
                listarPlacasJ(lista);
            break;

            case 8:
            listarModeloCorVogalSomaPar(lista);
            break;

            case 9:
                printf("Digite o chassi do veiculo: ");
                fgets(chassiBusca, sizeof(chassiBusca), stdin);
                encontrado = BuscaPorChassi(lista, chassiBusca);
                if (encontrado != NULL) {
                    trocarProprietarioSemZero(encontrado);
                }
                
            break;

            default:// O que acontece se nem um das opções for escolida
                limparTela();
                printf("/***************************/\n");
                printf("/*       Opção invalida!   */\n");
                printf("/* Digite uma opção valida */\n");
                printf("/                           /\n");
                printf("/***************************/\n");
                
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
            printf("/*****************************/\n");
            printf("/ Erro de alocação de memoria /\n");
            printf("/*****************************/\n");
            exit(EXIT_FAILURE);//tipo de tratamento de erro
        }
        novoVeiculo->proximo = NULL;
        return novoVeiculo;
    }

//---> Cadastra as informações do veiculo na memoria ja alocada
    Veiculo* cadastrar(Veiculo *lista){
        int valido;
        srand(time(NULL));
        Veiculo *novoVeiculo = criarVeiculo();
        novoVeiculo->id = rand() % 1000;

        printf("Nome do proprietario: ");
        fflush(stdin);
        //fgets(novoVeiculo->Proprietario, sizeof(novoVeiculo->Proprietario), stdin);
        scanf("%ms", &novoVeiculo->Proprietario);

        printf("\nQual modelo do carro: ");
        fflush(stdin);
        //fgets(novoVeiculo->modelo, sizeof(novoVeiculo->modelo), stdin);
        novoVeiculo->modelo = (char *)malloc(50 * sizeof(char));
        scanf("%ms", &novoVeiculo->modelo)
        ;

        printf("\nCor do veiculo: ");
        fflush(stdin);
        //fgets(novoVeiculo->cor, sizeof(novoVeiculo->cor), stdin);
        scanf("%ms", &novoVeiculo->cor);

        printf("\nNumero do chassi: ");
        fflush(stdin);
        //fgets(novoVeiculo->chassi, sizeof(novoVeiculo->chassi), stdin);
        scanf("%ms", &novoVeiculo->chassi);

        printf("\nPlaca do veiculo: ");
        fflush(stdin);
        //fgets(novoVeiculo->placa, sizeof(novoVeiculo->placa), stdin);
        scanf("%ms", &novoVeiculo->placa);

        printf("\nAno de fabricação do veiculo: ");
        scanf("%d", &novoVeiculo->ano);

        printf("\nTipo de combustivel: ");
        printf("\n1 --> para álcool \n2 --> para diesel \n3 --> gasolina \n");
        scanf("%d", &novoVeiculo->tipoDeCombustivel);

        do {
            printf("Tipo de combustivel: ");
            printf("\n1 --> para álcool"); 
            printf("\n2 --> para diesel");
            printf("\n3 --> gasolina \n");
            scanf("%d", &novoVeiculo->tipoDeCombustivel);
            valido = validadorCombustivel(novoVeiculo->tipoDeCombustivel);
            if (valido == 1) {
                printf("\n/*********************************/\n");
                printf("/ Opção invalida! tente novamente /\n");
                printf("/*********************************/\n");
            }
        }while (valido == 1);

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
                    printf("\n============================================\n");
                    printf("|  Nome do proprietario: %s", atual->Proprietario);
                    printf("\n============================================");
                    printf("\n|  Modelo do veiculo: %s", atual->modelo);
                    printf("\n|  Cor do veiculo: %s", atual->cor);
                    printf("\n|  Tipo combustiveu: %d", validadorCombustivel(atual->tipoDeCombustivel));
                    printf("\n|  Ano do veiculo: %d", atual->ano);
                    printf("\n|  Chassi do Veiculo: %s", atual->chassi);
                    printf("\n|  Placa do Veiculo: %s", atual->chassi);
                    printf("\n============================================");
                    printf("\n      ID: %d", atual->id);
                    printf("\n============================================\n");
                    atual = atual->proximo;
                }
            }
    }

//---> Buscar veiculos na lista
    Veiculo* buscarVeiculo(Veiculo *lista, int idBusca){
        Veiculo *atual = lista;
            while(atual != NULL){
                if(atual->id == idBusca){
                    printf("\n============================================\n");
                    printf("|  Nome do proprietario: %s", atual->Proprietario);
                    printf("\n============================================");
                    printf("\n|  Modelo do veiculo: %s", atual->modelo);
                    printf("\n|  Cor do veiculo: %s", atual->cor);
                    printf("\n|  Tipo combustiveu: %d", validadorCombustivel(atual->tipoDeCombustivel));
                    printf("\n|  Ano do veiculo: %d", atual->ano);
                    printf("\n|  Chassi do Veiculo: %s", atual->chassi);
                    printf("\n|  Placa do Veiculo: %s", atual->chassi);
                    printf("\n============================================");
                    printf("\n      ID: %d", atual->id);
                    printf("\n============================================\n");
                    return atual;
                }
                atual = atual->proximo;
            }
        printf("/*****************************/\n");
        printf("/   Veiculo nao encontrado    /");
        printf("/*****************************/\n");
        return NULL;
    }

    Veiculo* BuscaPorChassi(Veiculo *lista, char chassiBusca[20]){
        Veiculo *atual = lista;
            while (atual != NULL) {
                if (atual->chassi == chassiBusca) {
                    return atual;
                }
               atual = atual->proximo; 
            }
        printf("/*****************************/\n");
        printf("/   Veiculo nao encontrado    /");
        printf("/*****************************/\n");
        return NULL;
    }

//---> Altera as informações dos veiculos cadastrados
    void alterar(Veiculo *Veiculo){
        int valido;

        printf("\nDigite nome do novo proprietario: ");
        fflush(stdin);
        //fgets(Veiculo->Proprietario, sizeof(Veiculo->Proprietario), stdin);
        scanf("%ms", &Veiculo->Proprietario);

        printf("\nQual modelo do carro: ");
        fflush(stdin);
        //fgets(Veiculo->modelo, sizeof(Veiculo->modelo), stdin);
        scanf("%ms", &Veiculo->modelo);

        printf("\nCor do veiculo: ");
        fflush(stdin);
        //fgets(Veiculo->cor, sizeof(Veiculo->cor), stdin);
        scanf("%ms", &Veiculo->cor);

        printf("\nNumero do chassi: ");
        fflush(stdin);
        //fgets(Veiculo->chassi, sizeof(Veiculo->chassi), stdin);
        scanf("%ms", &Veiculo->chassi);

        printf("\nPlaca do veiculo: ");
        fflush(stdin);
        //fgets(Veiculo->placa, sizeof(Veiculo->placa), stdin);
        scanf("%ms", &Veiculo->placa);

        printf("\nAno de fabricação do veiculo: ");
        scanf("%d", &Veiculo->ano);

        do {
            printf("Tipo de combustivel: ");
            printf("\n1 --> para álcool"); 
            printf("\n2 --> para diesel");
            printf("\n3 --> gasolina \n");
            scanf("%d", &Veiculo->tipoDeCombustivel);
            valido = validadorCombustivel(Veiculo->tipoDeCombustivel);
            if (valido == 1) {
                printf("\n/*********************************/\n");
                printf("/ Opção invalida! tente novamente /\n");
                printf("/*********************************/\n");
            }
        }while (valido == 1);
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
            printf("\nRemovido com sucesso !!!");
        }else{
            printf("\nVeiculo nao encontrada !!!");
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
                atual = atual->proximo;
            }
        }
    }   

//---> liste todas as placas que comecem com a letra J
    void listarPlacasJ(Veiculo *lista){
        Veiculo *atual = lista;
        if(lista == NULL){
            printf("\nLista nula\n");
            return;
        }
        else{
            while(atual != NULL){
                if (atual->placa[0] == 'J' && (atual->placa[6] == '0' || atual->placa[6] == '2' || atual->placa[6] == '4' || atual->placa[6] == '7')) {
                    printf("Nome do proprietario: %s \n", atual->Proprietario);
                }
                atual = atual->proximo;
            }
        }        
    }

//---> listar modelo e cor dos veículos com placas de segunda letra vogal e soma dos valores numéricos é par
    void listarModeloCorVogalSomaPar(Veiculo *lista){
        Veiculo *atual = lista;
        if(lista == NULL){
            printf("\nLista nula\n");
            return;
        }
        else{
            while(atual != NULL){
                if (strchr("aeiouAEIOU", atual->placa[1]) != NULL) {
                            int somaDigitos = atoi(atual->placa + 3) + atoi(atual->placa + 4) + atoi(atual->placa + 5) + atoi(atual->placa + 6);
                            if (somaDigitos % 2 == 0) {
                                printf("Modelo: %s, Cor: %s\n", atual->modelo, atual->cor);
                            }
                }
            atual = atual->proximo;
            }        
        }
    }

//---> Função para trocar o proprietário com base no número do chassi para carros sem dígito igual a zero na placa
    void trocarProprietarioSemZero(Veiculo *Veiculo){
        printf("Digite nome do novo proprietario: ");
        fflush(stdin);
        fgets(Veiculo->Proprietario, sizeof(Veiculo->Proprietario), stdin);        
    }

//---> Pausa o terminal
  //  void pausarTela(const char *mensagem) {
  //  printf("%s", mensagem);
//    getchar();  // Aguarda a entrada de um caractere
//}

//---> Função de frase de despedida aleatória
void despedidaAleatoria() {
    srand(time(NULL));
    int escolha = 1 + rand() % (4 - 1 + 1);
    switch (escolha) {
        case 1:
            printf("\n/*********************************/");
            printf("\n|    Até logo! Volte em breve.    \n|");
            printf("\n/*********************************/\n");
            break;
        case 2:
            printf("\n/**************************************/\n");
            printf("\n  Obrigado pela visita. Até a próxima!  \n");
            printf("\n/**************************************/\n");
            break;
        case 3:
            printf("\n/*********************************/\n");
            printf("\n   Tenha um ótimo dia! Até mais.   \n");
            printf("\n/*********************************/\n");
            break;
        case 4:
            printf("\n/******************************************/\n");
            printf("\n  Foi um prazer ajudar. Até a próxima vez!  \n");
            printf("\n/******************************************/\n");
            break;
        default:
            break;
    }
}

//---> Valida e entrega tipo de combustivel
int validadorCombustivel(int comubustivel){
    switch (comubustivel) {
        case 1:
        printf("álcool");
        return 0;
        break;
        
        case 2:
        printf("diesel");
        return 1;
        break;

        case 3:
        printf("gasolina");
        return 1;
        break;
    }
    return 1;
}