#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;

    printf("Vamos calcular a hipotenusa: ");
    
    printf("Digite o valor B: \n");
    scanf("%f", &b);

    printf("Digite o valor C: \n");
    scanf("%f", &c);

    a = sqrt((b*b)+ (c*c));


    printf("A hipotenusa deu: a^2 = %f", a);
}