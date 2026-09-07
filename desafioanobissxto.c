#include <stdio.h>
int main(){
    int ano, bis1, bis2, bis3;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    bis1 = ano % 400;
    bis2 = ano % 100;
    bis3 = ano % 4;

    if(bis1 == 0){
        printf("O ano e bissexto!");
    }
    else if(bis2 != 0 && bis3 ==0){
        printf("O ano e bissexto");
    }
    else{
        printf("O ano nao e bissexto!");
    }
}