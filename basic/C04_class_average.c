/*
#include <stdio.h>
int main(void){
    int total = 0;
    int count = 1;

    while(count <= 10){
        printf("%s", "Enter a grade: ");
        int grade = 0;
        scanf("%d", &grade);
        total += grade;
        count += 1;
    }
    int average = total / 10;
    printf("average = %d\n", average);
}

*/


#include <stdio.h>
// version 2
int main(void){
    int total = 0;
    int count = 0;

    printf("%s","enter a grade, while entering -1, stop counting\n");
    int grade = 0;
    scanf("%d", &grade);
    
    while(grade != -1){
        total += grade;
        count += 1;
        printf("%s","enter a grade, while entering -1, stop counting\n");
        scanf("%d", &grade);
    }

    if(count!=0){
        double average = (double)total/count;
        printf("average = %.2f\n", average);
    }
    else{
        puts("No grades were entered");
    }
}