#include <stdio.h>
#include <stdlib.h>

int main(){
    
    /* > "maior"
       >= "maior ou igual"
       < "menor"
       <= "menor ou igual"
       == "igual"
       != "diferente de"
    */
    int a = 5, b = 5, c = 3;

    printf("%d \n", a == b);
    printf("%d \n", c != a);
    printf("%d \n", b < c);

    system("pause");
    return 0;
}