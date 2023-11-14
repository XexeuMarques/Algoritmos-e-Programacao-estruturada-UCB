/*Instruções
Implemente um algoritmo que:

Inclua até 1000 usuários;
Edite um usuário;
Exclua um usuário;
Busque um usuário pelo e-mail;
Imprima todos os usuários cadastrados;

Obrigatório uso de struct, vetor e função. 

Obrigatório uso de switch case com char para escolha da opção desejada.

ATENÇÃO: 
(1) NA CRIAÇÃO DE NOMES DE IDENTIFICADORES; 
(2) NOS TEXTOS DE INTERAÇÃO COM USUÁRIOS – ENTRADA E SAÍDA; 
(3) NA ORGANIZAÇÃO DO CÓDIGO.

Dados do usuário:
Id (int) => preenchido automaticamente por números randômicos e não podem ser repetir.
Nome completo (string)
Email (string) => validação do campo: verificar se o caractere "@" aparece
Sexo (string) => validação do campo: aceitar somente as palavras Feminino, Masculino e Indiferente.
Endereço (string)
Altura (double) => validação do campo: aceitar valores entre 1 e 2 m.
Vacina (int) => validação de 1 para sim e 0 para não Individual*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include<time.h>
#define TAM 100

struct usuario { // dados dos usuarios cadastrado
    char nome[20];
    char email[20];
    char sexo[3];
    char endereco[20];
    double altura;
    int vacina;
    int id;
}typedef usu;

// Prototio das funções
void cadastrar();
void editar(usuario p[], int totalCadastros, int idBusca);
void deletar(usuario p[], int totalCadastros, int idBusca);
void buscar(usuario p[], int totalCadastros, int emailBusca);
void imprimir(usuario p[], int totalCadastrados);


int main(){
    usuario p[TAM];
    int opcao;
    int totalCadastros = 0; 
    int idBusca;

    setlocale(LC_ALL, "Portuguese");

    do
    {
        printf("\n============================================\n");
        printf("|      Menu Principal                      |\n");
        printf("|==========================================|\n");
        printf("|    1. incluir usuario                    |\n");
        printf("|    2. Listar todos os usuarios           |\n");
        printf("|    3. Busque um usuário pelo e-mail      |\n");
        printf("|    4. Edite um usuário                   |\n");
        printf("|    5. Exclua um usuário                  |\n");
        printf("|    0. Sair do programa                   |\n");
        printf("|==========================================|\n");
        printf("|   Escolha uma opcao:                     |\n");
        printf("============================================\n");
        scanf("%d", &opcao);
        fflush(stdin);

    } while (opcao != 0);

    switch (opcao)
    {
    case 1:
        if (totalCadastros > TAM){
            cadastrar();
            totalCadastros++;
        }else{
            printf("Não e possivel cadastrar usuarios");
        }
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    case 5:
        /* code */
        break;
    case 0:
        return 0;
        break;
    default:
        printf("Opção invalida!!");
        printf("pressione ENTER para continuar");
        scanf("");
        break;
    }
    
}
/*========= Funções ==========*/
void cadastrar(usuario usu[], int indice){
    srand(time(NULL)); // para os numeros aleatorios não se repetir
    usu.id = rand() % 100;

    printf("Digite o seu nome: \n");
    fgets(usu.nome, sizeof(usu.nome), stdin);

    //Email com validador
    do
    {
        printf("Digite seu Email:\n")
        fgets(usu.email, sizeof(usu.email), stdin)
        int res = strchr(usu.email, "@");
            if (res == NULL){
                printf("Email invalido!!!\n\n");
                printf("aperte ENTER para continuar ...");
                scanf("");
                fflush(stdin);
            }
            
    } while (res == NULL);

    //Sexo com validador
    do
    {
        printf("Digite o seu sexo:\n");
        pritf(" 'mas' para mascolino\n fem para feminino\n ou neutro para ind para indefinido\n");
        fgets(usu.sexo, sizeof(usu.sexo), stdin);
            if (strcmp(usu.sexo, "mas") != 0 || strcmp(usu.sexo, "fem") != 0 || strcmp(usu.sexo, "ind") != 0){
                int res = 44;
                printf("Sexo invalido ");
                printf("aperte ENTER para continuar ...");
                scanf("");
                fflush(stdin);
                
            }else{
                break;
            }

    } while (usu.sexo == 44);
    
    printf("Digite o inderesso do usuario")
    printf("O usuario ja foi vacinado?? \n1 - Para sim \n2- Para não")
    printf("Qual a sua altura: do ususario\n")

    
    
}