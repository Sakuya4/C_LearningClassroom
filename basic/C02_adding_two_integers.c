#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;

    printf("enter two integers\n");
    
    printf("enter first integer:");
    scanf("%d", &a);
    printf("enter second integer:");
    scanf("%d", &b);

    int sum = 0;
    sum = a + b;
    printf("sum = %d\n", sum);

}