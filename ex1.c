// QUal é a responsabilidade? nome da função
// De QUais informações precisa? parametros
// Oque deve fornecer de volta? 

#include <stdio.h>

int dobro (int valor){
    return valor * 2;
}

int main(){
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    int resultado = dobro(numero);
    printf("%d\n", resultado);
    return 0;
}

