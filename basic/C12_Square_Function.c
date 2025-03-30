#include <stdio.h>

int square(int number);

int main(void){
    int x = 0;
    for(x=1;x<=10;x++)
    {
        printf("Square is %d\n", square(x)); //printf("%d ", square(x));
    }
    puts("");
}

int square(int number){
    return number*number;
}