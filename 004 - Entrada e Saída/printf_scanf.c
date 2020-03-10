#include <stdio.h>
#include <stdlib.h>

int main(){
    //scanf("tipos de entrada", variaveis);
    
    char letra;
    int i;
    float f;
    double d;

    printf("Digite uma letra: ");
    scanf("%c",&letra);
    printf("Letra digitada: %c \n", letra);
    printf("\n");

    printf("Digite um número: ");
    scanf("%d",&i);
    printf("Número digitado: %i \n", i);
    printf("\n");

    printf("Digite outro número: ");
    scanf("%f",&f);
    printf("Número digitado: %f \n", f);
    printf("\n");

    system("pause");
    return 0;
}