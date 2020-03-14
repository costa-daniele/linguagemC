#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2;
    
    printf("Digite um valor: ");
    scanf("%i",&n1);

    printf("Digite outro valor: ");
    scanf("%i",&n2);

    if (n1 > n2) {
        printf("O primeiro número é maior que o segundo. \n");
    } else {
        printf("O segundo número é maior que o primeiro. \n");
    }
    return 0;
}