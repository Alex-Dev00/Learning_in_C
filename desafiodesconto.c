#include <stdio.h>

int main(){

    float valor, precof, desconto;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    desconto = (valor * 0.10);

    precof = valor - desconto;

    if(valor >= 100){
        printf("Voce vai pagar: $ %.2f", precof);
    }
    else{
        printf("Sua compra nao teve desconto o valor e: $ %.2f", valor);
    }

}