#include <stdio.h>
int main(){
/*  int i = 1;
    
    while (i <= 5){
        printf("%d\n", i);
        i++;
    }*/

    /*int x = 5, y; // incremento
    y = ++x;
    printf("x = %d, y = %d", x,y);

    int x = 5, y; // decremento
    printf("x = %d, y = %d", x,y);*/

    /*int i = 1;
    while (i <= 5){
        printf("%d", i);
        i--;
    }*/

    /*int soma = 0;
    int i = 1;

    while (i <= 4){
        soma = soma + i;
        //soma += i;
        i++;   
    }
    printf("%d", soma);*/

    char resp = 's';

    while (resp == 's' || resp == 'S'){
        printf("Preso no Loop\n");
        printf("Deseja permanecer no Loop?\n");
        scanf("%c", &resp);
    } printf("Saiu!");

}


// += -= *= /= %= atribução composta.