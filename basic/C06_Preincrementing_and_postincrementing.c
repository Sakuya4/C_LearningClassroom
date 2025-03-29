#include <stdio.h>
// 運算演示
// 配合C05進行學習，了解 "++在前" 和 "++在後" 的差異
int main(void){
    int c = 5;
    printf("%d\n", c); // print 5
    printf("%d\n", c++); // print 5, and c = 6 now
    printf("%d\n\n", c); // print 6

    c = 5;
    printf("%d\n", c); // print 5
    printf("%d\n", ++c); // print 6, and c = 6 now
    printf("%d\n", c); // print 6
}

int demo(void){
    int x = 7;
    printf("%d\n", x);
    printf("%d\n", x++);
    printf("%d\n", x);

    x = 8;
    printf("%d\n", x);
    printf("%d\n", ++x);
    printf("%d\n", x);
}
// fill in by yourself