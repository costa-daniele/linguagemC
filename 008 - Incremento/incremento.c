#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10, y = 10;
    int x1 = 10, y1 = 10;
    int x2 = 10, y3, y2;

    x++; //x=x+1
    ++y; //y=y+1

    x1--; // x = x - 1
    --y1; // y = y - 1

    y2 = x2++;
    y3 = ++x2;
   
    printf("x = %d \n", x);
    printf("y = %d \n", y);
    printf("x1 = %d \n", x1);
    printf("y1 = %d \n", y1);
    printf("x2 = %d \n", y2);
    printf("y2 = %d \n", y3);

    system("pause");
    return 0;
}