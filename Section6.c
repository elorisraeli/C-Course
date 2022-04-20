#include <stdio.h>

int main(){
    // double minutes;
    // printf("Enter a number of minutes: ");
    // scanf("%lf", &minutes);
    // double hours = minutes/60;
    // double days = hours/24;
    // double years = days/365;
    // printf("The number of years is: %lf, and %.2lf days", years, days);

    // some data types
    printf("Variable of type char occupy %u bytes\n", sizeof(char));
    printf("Variable of type short occupy %u bytes\n", sizeof(short));
    printf("Variable of type int occupy %u bytes\n", sizeof(int));
    printf("Variable of type long occupy %u bytes\n", sizeof(long));
    printf("Variable of type long long occupy %u bytes\n", sizeof(long long));
    printf("Variable of type float occupy %u bytes\n", sizeof(float));
    printf("Variable of type double occupy %u bytes\n", sizeof(double));
    printf("Variable of type long double occupy %u bytes\n", sizeof(long double));
    return 0;
}