/*
Com a proposta para ampliação da terceirização da mão de obra, o Ministério da Fazenda está empenhado em elaborar uma análise sobre o recebimento de salário regular através do registro em carteira profissional dos funcionários no país. 
Assim, elabore um algoritmo que obtenha, para *cada assalariado*, com carteira profissional assinada, o seu *sexo* *M*(masculino) e *F*(feminino) e o *valor de seu salário*, devendo este salário ser maior que um real (R$1,00). 
Seu algoritmo deverá analisar e classificar este assalariado em *Acima*, *Igual* ou *Abaixo* do salário mínimo. 
Sabe-se que o salário mínimo nacional é de R$ 1400,00. Após a leitura dos dados de *cada assalariado cadastrado* pelo ministério deverá ser apresentado o seu *salário em reais*, a *classificação por extenso* em relação ao salário mínimo e o *sexo por extenso* (Masculino ou Feminino).
    
A *classificação* em relação ao salário mínimo nacional deverá ser feita pelo sub-algoritmo *classificaSalario* e os resultados solicitados para cada assalariado deverão ser apresentados pelo sub-algoritmo denominado *mostraClassifica*.

Você deverá fazer a entrada de dados para todos os assalariados que foram pesquisados pelo ministério, lembrando de fazer sempre a validação de todos os dados informados em *sub-algoritmos específicos*.

Na solução deste problema os resultados finais de cada assalariado que participou desta pesquisa deverão ser apresentados.

*Após a leitura dos dados de todos os assalariados pesquisados* o seu algoritmo deverá apresentar a quantidade de *assalariados com salário abaixo* do salário mínimo e a quantidade *assalariados com salário acima* do salário mínimo
*/
//
//Michel Marques Dos Santos
//
#include <stdio.h>
//======= STRUCTS
typedef struct PessoasAssalariadas{
    char nome[30];
    char sexo[12];
    char classificacao[6];
    float salario;
} assalariado;

/*========= Prototipos das Funções ========*/

/*============== EXECUÇÃO ================*/
    int main(){
//======= VARIAVEIS 

//======= ESCOPO

    return 0;
    }

/*=============== FUNÇõES =============== */

//---> Validador e leitor de sexo
    char validaSexo() {
        char sexo;
        do {
            printf("Digite o sexo: \n[F] -> para feminino \n[M] -> para masculino \n[O] -> para outro:");
            scanf(" %c", &sexo);

            if (sexo != 'M' || sexo != 'F' || sexo != 'O') {
            printf("Sexo digitado é inválido!! \nDigite novamente\n");
            }
        } while (sexo != 'M' || sexo != 'F');

        return sexo;
    }

//---> Classificador de salario
    void classificaSalario(float salario, char *classificacao) {
        if (salario > 1400) {
            sprintf(classificacao, "Acima");
        } else if (salario < 1400) {
            sprintf(classificacao, "Abaixo");
        } else {
            sprintf(classificacao, "Igual");
        }
    }

//---> Validador e leitor de salario
    float validaSalario() {
        float salario;
        do {
            printf("Digite o salário: R$ ");
            scanf(" %f", &salario);

            if (salario < 1) {
            printf("Valor de salário inválido\n");
            }
        } while (salario < 1);

    return salario;
    }

//---> Mostra as informações
    void mostraClassificacao(char sexo, float salario, char *classificacao) {
        printf("Sexo: %s\n", (sexo == 'M' || sexo == 'm') ? "Masculino" : (sexo == 'F' || sexo == 'f') ? "Feminino" : "Outro"); // Operador ternário aninhado
        printf("Salário: R$%.2f\n", salario);
        printf("Classificação em relação ao salário mínimo: %s do salário mínimo\n", classificacao);
    }