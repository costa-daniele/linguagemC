#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int valor1;
    int valor2;
    int maior;

    printf("Digite um valor: ");
    scanf("%d", &valor1);

    printf("Digite outro valor: ");
    scanf("%d", &valor2);
    // PRIMEIRA FORMA
    // maior = valor1 > valor2 ? valor1 : valor2;
    // printf("Maior valor = %d \n", maior);

    //SEGUNDA FORMA
    (valor1 > valor2) ? printf("O primeiro valor é maior que o segundo \n")
                     : printf("O segundo valor é maior que o primeiro \n");

    return 0;
}