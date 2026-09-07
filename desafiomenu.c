#include <stdio.h>
int main(){
    int opcao;

    printf("Esse e o menu de hoje:\n[1] Arroz, feijao, Frango e Fritas| R$25,00\n[2]Arroz, feijao, Carne e salada | R$27,00\n[3]Arroz e strogonoff | R$23,00.");

    printf("\nEscolha uma das opcao acima: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
        printf("Arroz, feijao, Frango e Fritas| R$25,00");
        break;

        case 2:
        printf("Arroz, feijao, Carne e salada | R$27,00");
        break;

        case 3:
        printf("Arroz e strogonoff | R$23,00");
        break;
        
        default:
        printf("Opcao invalida!");
    }

}