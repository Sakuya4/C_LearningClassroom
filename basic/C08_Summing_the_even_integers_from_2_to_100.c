#include <stdio.h>

int main(void){
    int i = 0;
    int sum = 0;
    for(i = 2; i <= 100; i+=2){
        sum += i;
    }
    printf("Sum is :%d\n", sum);
}