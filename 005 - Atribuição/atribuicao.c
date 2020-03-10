#include <stdio.h>
#include <stdlib.h>

int main(){
    //variável = expressão

    int x;
    int y;
    int soma;

    printf("Digite o valor de x: ");
    scanf("%i", &x);
    printf("Digite o valor de y: ");
    scanf("%i", &y);
    
    soma = x + y;
    
    printf("A soma de x e y é: %i\n", soma);

    system("pause");
    return 0;
}