// caractere char c = 'A';
// vetor char texto [10];
// string char [4] = ana;

/*char titulo[50];
fgets(titulo, 50, stdin);
printf("%s", titulo);*/

#include <stdio.h>
#define TAM 50

int main(){
    char nome[TAM];

    fgets(nome, TAM, stdin);

    for (int i = 0; nome[i] != '\0'; i++){
        if (nome[i] == '\n'){
            nome[i] = '\0';
            break;
        }
    }
}
