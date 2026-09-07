#include <stdio.h>

int main(){
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("O numero 1 e maior.");
    }
    else if (num2 > num1){
        printf("O numero 2 e maior");
    }
    else{
        printf("Os dois numeros sao iguais");
    }

}