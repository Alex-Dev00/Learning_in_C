#include <stdio.h>


int main(){
    float testes[6];
    float soma = 0;
    float media = 0 ;

    for (int i = 0; i < 6; i++){
    
    printf("\nDigite os tempos dos testes: \n");
    scanf("%f", &testes[i]);

    soma += testes[i];

    media = soma / 6;

    }
    printf("A media do tempo e: %.2f\n", media);
    
    for (int i = 0; i < 6; i++){
        if (testes[i] < media){
            printf("Esse esta a fora da media\n");
        }else{
            printf("Esta dentro da media\n");
        }
    }

}