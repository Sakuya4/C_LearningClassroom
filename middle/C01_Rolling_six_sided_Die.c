#include <stdio.h>
#include <stdlib.h>
// #include <time.h>

int main(void){
    // srand(time(NULL));
    
    for(int i=1;i<=10;++i)
    {
        printf("%d ", 1+(rand() % 6)); // rand()%6只有1到5, 因此+1變成六面骰
    }
    puts("");
}

