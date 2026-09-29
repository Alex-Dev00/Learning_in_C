// Criar um While com um switch case dentro. Para fazer o Painel de cadastro do usuario. 
// Criar as funcoes de um jeito simples para nao dar problema e ser facil de entender.
// Organizar com as funcoes em baixo para nao dar problema de poluir o codigo.
// Comentar em cada linha para que todos do Pim entenda o que esta acontecendo.
// Estudar sobre como armazenar os dados e salvar em algum lugar.
// GO TO WORK!

#include <stdio.h> 

int main(){
    
    int opcao = -1;

    while(opcao !=0){
    printf("===== OPCOES =====\n");
    printf("[1] Cadastrar um Agente.\n[2] Ver lista dos Agentes.\n[3]Dar funcao ao Agente.\n[0] Sair do Programa.\n");

    printf("Digite a opcao de 0 a 3.\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Cadastro de agentes");

            break;
        case 2:
            printf("Lista de agentes");

            break;
        
        case 3:
            printf("Dar uma funcao para o Agente");

            break;

        case 0:

            default:

    }

    }

}