#include <stdio.h>
#include <math.h>

int multiply(int a, int b)
{
    return a * b;
}

int gcd(int a, int b){
    int max = (a > b) ? a : b;
    int gcd = 0;
    for (int i = 1; i <= max / 2; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

float absolute(float a){
    if (a<0) return 0-a;
    return a;
}

float squareRoot(float number){
    if(number<0) return -1.0;
    return sqrt(number);
}

float squareRootCalculate(float number){
    float guess = 1.0;
    float epsilon = .0001; // just a name for very small number
    if(number<0) return -1.0;
    while (absolute(guess *guess - number) >= epsilon)
    {
        guess = (number / guess + guess) / 2.0;
    }
    return guess;
}


int main()
{

    int x = multiply(3, 6);
    printf("The result of 3*6 is: %d\n", x);
    int theGCD = gcd(18, 6);
    printf("The gcd is: %d\n", theGCD);
    printf("The absolute is: %lf\n", absolute(-8.8456));
    printf("The square root is: %lf\n", squareRoot(31));
    printf("The square root (v2) is: %lf\n", squareRootCalculate(31));

    return 0;
}