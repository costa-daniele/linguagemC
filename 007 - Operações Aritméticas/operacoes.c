#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    soma             +
    subtração        -
    multiplicação    *
    divisão          /
    resto            %
    */
    
    int x, y;
    int soma, sub, mult, divi, resto;   
    int z = 2, y2 = 10, y3 = 10, z1 = 2;

    printf("Digite um valor para x: ");
    scanf("%i",&x);
    printf("Digite um valor para y: ");
    scanf("%i",&y); 

    soma = x + y;
    sub = x - y;
    mult = x * y;
    divi = x / y;
    resto = x % y;
    
    printf("\n");
    printf("A soma dos valores é: %i\n", soma);
    printf("A subtração dos valores é: %i\n", sub);
    printf("A multiplicação dos valores é: %i\n", mult);
    printf("A divisão dos valores é: %i\n", divi);
    printf("O resto da divisão é: %i\n", resto);

    //simplificada
    y2 += z; //y = y + z
    printf("y = %d\n",y2);

    y3 -= z1; //y = y - z
    printf("y = %d \n", y3);

    return 0;
}