#include <stdio.h>

int main(void){
    int x = 0;
    for(;x<=10;x++)
    {
        if(x==5) break;    
        printf("%d", x);
    }
    printf("\n Broke out of loop at x==%d \n", x);
}
// 如果走到5，結束計數

int Continue_demo(void){
    int i = 0;
    for(;i<=10;i++)
    {
        if(i==5) continue;
        printf("%d", i);
    }
    printf("\n Broke out of loop at i==%d \n", i);
}
