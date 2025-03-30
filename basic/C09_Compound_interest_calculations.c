#include <stdio.h>
#include <math.h>
// a = p(1+r)^n

int main(void){
    double principal = 1000.0;
    double rate = 0.05;
    
    printf("%4s%21s\n","year", "amount on deposit");
    for(int year = 1; year <= 10; ++year){
        double amount = principal * pow(1.0 + rate, year);
        printf("%4d%21.2f\n", year, amount);
    }
}