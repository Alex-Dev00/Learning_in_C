#include <stdio.h>

int main(){
    int i= 0;
    int numero = 0;
    int soma = 0;

    for (i = 1; i <= 5; i++){
    printf("Digite os numeros: \n");
    scanf("%d", &numero);

    soma = numero + soma;

    printf("Soma = %d\n", soma);
    
    if (soma >= 0){
        printf("E positivo\n");
    }else{
        printf("E negativo\n");
    }
    
    if (soma % 2 == 0){
        printf("E par\n");
        
    }else{
        printf("E impar\n");
    }
    }
    
    

}