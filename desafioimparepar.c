#include <stdio.h>
int main(){
    int num1, resultado;

    printf("Vamos ver se o numero é impar ou par: \n");

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    resultado = num1 % 2;

    if (resultado ==0){
        printf("O numero e par!");}
    else{
        printf("O numero e impar!");
    }
}

