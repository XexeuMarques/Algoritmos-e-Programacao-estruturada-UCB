#include<stdio.h>
#include<stdlib.h>
#define TAM 3 // variavel global defininando a quantidade maximas de cadastros

typedef struct{ // dados da pessoa cadastrado
    char nome[20];
    int idade;
    int id; // garar um numero
    int status; // ativo, inativo etc ...
}Pessoa;

void cadastrar(Pessoa p[], int indice){ // função para cadastra pessoa
    p[indice].status = 1; // status inicial ativo
    p[indice].id = rand() % 100; // gera id aleatorio
    printf("Digite o nome do aluno: ");
    fflush(stdin);
    fgets(p[indice].nome, sizeof(p[indice].nome), stdin);
    fflush(stdin);
    printf("Digite a idade ");
    fflush(stdin);
    scanf("%d", &p[indice].idade);
    fflush(stdin);
    printf("\n\n ");
}
void imprimirLista(Pessoa p[], int totalCadastrados){ // função para listar pessoa
    for(int i = 0; i < totalCadastrados; i++){
        printf("Nome: %s \n", p[i].nome);
        printf("Idade: %d \n", p[i].idade);
        printf("Id: %d \n", p[i].id);


        if (p[i].status == 1){ // imprime o status de forma agradavel para o usuariog
            printf("Status: Ativo\n");
        }else{
            printf("Status: Inativo\n");
        }
        
        printf("\n\n ");
    }

}

void buscar(Pessoa p[], int totalCadastros, int idBusca){ // função para fazer uma busca, pesquisa
    if (totalCadastros == 0){// verificar se a lista ta vazia
        printf("A lista ta vazia"); 
        return;
    }else{
        for (int i = 0; i < totalCadastros; i++) // percorre para achar o id
        {
            if (p[i].id == idBusca){// verifica se o id e o mesmo pesquisado
            
                printf("Nome e: %s", p[i].nome);
                printf("\nA idade e: %d", p[i].idade);
                return;
            }
        }
    }
    printf("ID não encontrado");

}
void alterar(Pessoa p[], int totalCadastros, int idBusca){ // função para fazer uma modifiacar pessoa
    int escolha;
    if (totalCadastros == 0){// verificar se a lista ta vazia
        printf("A lista ta vazia"); 
        return;
    }else{
        for (int i = 0; i < totalCadastros; i++) // percorre para achar o id
        {
            if (p[i].id == idBusca){// verifica se o mesmo id, e altera
            // Achei o id
                printf("O que vove quer modificar??:\n");
                printf("Alterar nome = 1\n");
                printf("Alterar idade = 2\n");
                printf("Alterar status = 3\n");
                printf("Alterar tudo = 4\n");
                scanf("%d", &escolha);

                switch (escolha)
                {
                case 1:
                    printf("Digite o novo nome:\n");
                    fgets(p[i].nome, sizeof(p[i].nome), stdin);
                    fflush(stdin);
                    break;
                 case 2: // e uma boa ideia fazer uma verificação aqui dentro
                    printf("Digite o nova idade:\n");
                    scanf("%d", &p[i].idade);
                    fflush(stdin);
                    break;
                case 3:
                    printf("Digite o nova status: 1 ativo / 0 inativo\n");
                    scanf("%d", &p[i].status);
                    fflush(stdin);
                    break;
                case 4:
                    printf("Digite o novo nome:\n");
                    fgets(p[i].nome, sizeof(p[i].nome), stdin);
                    fflush(stdin);

                    printf("Digite o nova idade:\n");
                    scanf("%d", &p[i].idade);
                    fflush(stdin);

                    printf("Digite o nova status: 1 ativo / 0 inativo\n");
                    scanf("%d", &p[i].status);
                    fflush(stdin);
                    break;               
                default:
                    break;
                }
                
            }
        }
    }
    printf("ID não encontrado");

}
void deletar(Pessoa p[], int totalCadastros, int idBusca){ // função para fazer uma busca do id para deletar
    if (totalCadastros == 0){// verificar se a lista ta vazia
        printf("A lista ta vazia"); 
        return;
    }else{
        for (int i = 0; i < totalCadastros; i++) // percorre para achar o id
        {
            if (p[i].id == idBusca){// verifica se o id e o mesmo pesquisado
            
                // percorre as possiçõs subsequentes (depois das que eu encontrei; e realocar a lista 
                for (int j = 0; j < totalCadastros - 1; j++)
                {
                    p[j] = p[j-1];
                }
                
            }
        }
    }
    printf("ID não encontrado");

}

int main(){

    Pessoa p[TAM]; // O [] da struct sempre passa o tamanho da variavel struct -> variavel global "TAM"
    int opcao, totalCadastros = 0, idBusca;

    do{
       // system("cls"); // Limpa a tela no Windows

        printf("\n============================================\n");
        printf("|      Menu Principal                      |\n");
        printf("|==========================================|\n");
        printf("|    1. Adicionar um novo registro         |\n");
        printf("|    2. Listar todos os registros          |\n");
        printf("|    3. Para buscar o registro             |\n");
        printf("|    4. Para alterar o registro            |\n");
        printf("|    5. deletar                            |\n");
        printf("|    0. Sair do programa                   |\n");
        printf("|==========================================|\n");
        printf("|   Escolha uma opcao:                     |\n");
        printf("============================================\n");
        scanf("%d", &opcao);
        fflush(stdin);
        switch (opcao){
            case 1:
                if(totalCadastros < TAM){
                    cadastrar(p, totalCadastros);
                    totalCadastros++;
                }else{
                    printf("\n\nTotal de cadastros atingido");
                }
                break;
            case 2:
                system("cls");
                if(totalCadastros == 0){
                    printf("\n\nNão existem pessoas na lista");
                }else{
                    imprimirLista(p, totalCadastros);
                }
                break;
            case 3:
                printf("Digite o id que quer buscar: \n");
                scanf("%d", idBusca);
                fflush(stdin);
                buscar(p,totalCadastros, idBusca);
                break;
            case 4:
                printf("Digite o id que quer alterar: \n");
                scanf("%d", idBusca);
                fflush(stdin);
                alterar(p, totalCadastros, idBusca);
                break;
            case 5:
                printf("Digite o id que quer deletar: \n");
                scanf("%d", idBusca);
                fflush(stdin);
                deletar(p, totalCadastros, idBusca);
                totalCadastros--;
                break;
            default:
                printf("Voce digitou 0 o sistema sera encerrado");
                return 0;
        }

    }while(opcao != 0);

    return 0;
    
}