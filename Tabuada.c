#include <stdio.h>

int main(){
    
    int i ;
    int tabuada;
    int resultado;


    for( tabuada = 0; tabuada <= 10; tabuada++){
        printf("\nTabuada do %d:\n", tabuada);
        for(i = 0; i <= 10; i++){
            resultado = tabuada * i;
            printf("%d x %d = %d\n", tabuada, i, resultado);
        }
    }
}