#include <stdio.h>
// use while
int main(){
    int counter = 1;
    while(counter <= 5)
    {
        printf("%d ",counter);
        ++counter;
    }
    puts("");
}

// use do...while
int Do_While_domo(){
    int counter = 1;
    do
    {printf("%d ", counter);} while(++counter <= 5);
}


// use for
int For_demo(){
    for(int counter = 1; counter<=5; ++counter)
    {
        printf("%d ", counter);
    }
    {puts("");}
}