#include <stdio.h>
#include <stdlib.h>

char olaMundo;
int main(){
    olaMundo = system("echo 'Ola mundo!!'");
    printf("%c \n", olaMundo);
    // system("ls -lha ..");
    system("exa -l --icons ..");
    printf("Pasta do codigo \n");
    printf("Teste 123");
}