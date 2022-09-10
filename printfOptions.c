#include <stdio.h>
#include <stdlib.h>
#define printf __mingw_printf   // to allow the printf of long double with %Lf

int main(){
    printf("\nLets write all the options to print: \n\n");

    int x = 1;
    float y = 2.7;
    double z = 6.5456456;
    long double w = 8.9654754867;
    char c = 'g';
    char myString[10] = "something";
    unsigned int a = 2;
    long b = 3;
    long long d = 43746789786876;
    unsigned long long e = 255;
    size_t something;

    printf("Int: \n size of bytes - %d, printed int - %d \n", sizeof(int), x);
    printf("Float: \n size of bytes - %d, printed float - %lf \n", sizeof(float), y);
    printf("Double: \n size of bytes - %d, printed double - %.2lf \n", sizeof(double), z);
    printf("Long double: \n size of bytes - %d, printed long double - %Lf \n", sizeof(long double), w);
    printf("Char: %c \n", c);
    printf("String: %s \n", myString);
    printf("Unsigned int: \n size of bytes - %d, printed unsigned int - %u \n", sizeof(unsigned int), a);
    printf("Long: \n size of bytes - %d, printed long - %ld \n", sizeof(long), b);
    printf("Long long: \n size of bytes - %d, printed long long - %lld \n", sizeof(long long), d);
    printf("Unsigned long long: \n size of bytes - %d, printed unsigned long long - %llu \n", sizeof(unsigned long long), e, sizeof(e));
    printf("size of e - %llu \n", sizeof(e));

    printf("Other tricks: \n");
    int a1 = 1234;
    int a2 = 867;
    printf("Spaces before number:%8d \nZeros before number:%08d\n", a1, a2);
    printf("Hex numbers:%X \nIn a good look of Hex numbers:%#X\n", a1);

    printf("If we want to print the pointers number we use '%' and 'p'\n");
    printf("Pointer to the location with number:%p\n", &a1);


    printf("size_t is any type we want to get from 'scanf()' function\n");
    printf("in this moment we dont call him so it will print the pointer to him %zd\n", something);

    return 0; 
}