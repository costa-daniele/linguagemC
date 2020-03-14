#include <stdio.h>
#include <stdlib.h>

int main(){

    /* && Operador "E"
     || Operador "OU"
     !  Operador "NEGAÇÃO"

     expressão "operador lógico" expressão

     0: falso
     1: verdadeiro

     NEGAÇÃO
     ! (expressão)

     0: se a expressão valer 1
     1: se a expressão valer 0

    */

    int a, b = 5, c = 2;
    a = (b < 2) && (c < b);
    printf("%d \n", a);

    a = (b%2 == 0) || (c > 0);
    printf("%d \n", a);
    system("pause");
    return 0;
}