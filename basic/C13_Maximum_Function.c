#include <stdio.h>

int max(int x, int y, int z);

int main(void){
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    printf("%s", "Enter 3 integers: ");
    scanf("%d%d%d", &number1, &number2, &number3); 

    printf("Maximum number is: %d", max(number1, number2, number3));
}

int max(int x, int y, int z){
    int maxnum = x;
    if(y > maxnum){maxnum = y;}
    if(z > maxnum){maxnum = x;}

    return maxnum;
}