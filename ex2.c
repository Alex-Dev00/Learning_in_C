#include <stdio.h>

float calcularDesconto(float valor){
    if(valor <= 100.00){
        return valor;
    }
    else if(valor > 100 && valor <= 499.99){
       
        return valor * 0.1;
    }
    return valor * 0.85;
}

int main(){
    float Compra;
    float Desconto;

    printf("Digite o valor: \n");
    scanf("%f", &Compra);

    Desconto = calcularDesconto(Compra);
    
    printf("O valor total é: %.2f", Compra);
    printf("O valor do desconto é: %.2f", Compra - Desconto);
    printf("O valor com desconto é: %.2f", Desconto);

    return 0;
}






// abaixo de 100 sem desconto
// 100 ate 499,99