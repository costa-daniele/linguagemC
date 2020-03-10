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

    return 0;
}