//strcmp() para comparar 

#include <stdio.h>

int main(){

    float notas[8];
    float soma = 0;
    float media;

    for (int i = 0; i < 8; i++){
        printf("Digite a nota: \n");
        scanf("%f", &notas);

        if (notas >= 0 || notas <= 10){
            for(int j = 0; j < 8; j++){

                soma += notas[i];

                media = soma / 8;

                
            }
        }else {
            printf("Nota incorreta");
        }
    }
    printf("%f\n", media);







}