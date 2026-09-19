//reorganizar as bibliotecas

#include <stdio.h>

/*void mostrarCabecalho(){
    printf("=== SISTEMA DE NOTAS===\n"); //Executando a função
}

int main(){
    mostrarCabecalho();  //chamar a função
}*/

int maior(int a, int b){
    if (a>b){
        return a;
    }
    return b;
}

int main(){

int resultado = maior(10, 7);

    printf("%d\n", resultado);

    return 0;
}