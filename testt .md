``livro c como programar AVA pg 188``

# funções / procedimentos
## o que tem na declaração da função
 - nome
    - segue regras da variaveis
    - geralmente e um verbo
- tipo de retorno
    - tipo de dado que vai retornar
    -_int, float, char
    - retorno da função
    - tipo void -> não retorna nada, apenas executa algo -> procedimento
- Parametros
    - ex:. pow(2,3) -> parametros dentros do ()
    - dados de entrada usados para executar o codigo
    - local que vai passar as informações
    - parametros são decididos apartir dos tipos 
    - ex:, int somar(int n1, int n2, int n3){}
    - evite muitos parametros
    - parametros são variaveis ja declaradas;

    ```
    int somar(int n1, int n2){
        // variaveis locais
        int n1;
        int n2;
        int soma;

        soma = n1 + n2;

        return soma//retorno do função 
    }
    ```
    ``caso fosse -> void não teria o return; mas poderia print a soma``

    ver passagem de parametro por referencia -> ponteiros