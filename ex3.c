#include <stdio.h>

void notaValida(float nota);
float situacao(float nota);

int main(){
    float nota;
    
    printf("Digite sua nota: \n");
    scanf("%f", &nota);


     while (!voidnotaValida(nota)){
        printf("Digite uma nota valida: ");
    }
}



void notaValida(float nota){
    return nota >= 0 || nota <= 10;
}

float situacao(float nota){
        printf("Nota validada");
        if (nota >=7){
            printf("Aprovado");
        }
        else if (nota <= 5 && nota <= 7){
            printf("Recuperação");
        }
        else{
            printf("Reprovado");
        }
}