#include <stdio.h>

int main(void){
    int a = 0;
    int b = 0;
    printf("enter two integers, Program will show two integers relation\n");
    printf("enter first integer:");
    scanf("%d", &a);
    printf("enter second integer:");
    scanf("%d", &b);
    if(a==b) {printf("First number %d equl Second number %d\n", a, b);}
    if(a!=b) {printf("First number %d not equl Second number %d\n", a, b);}
    if(a>b) {printf("First number %d greater than Second number %d\n", a, b);}
    if(a<b) {printf("First number %d less than Second number %d\n", a, b);}
    if(a>=b) {printf("First number %d greater than or equl to Second number %d\n", a, b);}
    if(a<=b) {printf("First number %d less than or equl to Second number %d\n", a, b);}
}