#include <stdio.h>

int main(void){
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;

    puts("Enter a letter grade (a,b,c,d,f).\n");
    puts("Enter EOF to end input.\n");
    int grade = 0;
    
    while((grade = getchar())!= EOF){
        switch(grade){
            case 'a':
            case 'A':
                ++aCount;
                break;

            case 'b':
            case 'B':
                ++bCount;
                break;
            case 'c':
            case 'C':
                ++cCount;
                break;
            case 'd':
            case 'D':
                ++dCount;
                break;
            case 'f':
            case 'F':
                ++fCount;
                break;
            case '\n':
            case '\t':
            case ' ':
                break;
            default:
                printf("%s", "Incorrct letter grade entered.\n");
                puts("Enter a new grade.\n");
                break;
        }
    }
 
    puts("Totals for each letter grade are:\n");
    printf("A: %d\n", aCount);    
    printf("B: %d\n", bCount);    
    printf("C: %d\n", cCount);    
    printf("D: %d\n", dCount);    
    printf("F: %d\n", fCount);    
}