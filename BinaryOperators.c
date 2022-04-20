#include <stdio.h>

int main(){

    // a binary lesson
    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    int resultAND = a & b; // 0000 1100 => 12
    int resultOR = a | b; // 0011 1101 => 61
    int resultXOR = a ^ b; // 0011 0001 => 49
    int resultMatildaA = ~a; // 1100 0011 => 195 so its also -61 
    int resultMatildaB = ~b; // 1111 0010 => 242 so its also -14
    printf("The result of 'AND' is: %d\n", resultAND);
    printf("The result of 'OR' is: %d\n", resultOR);
    printf("The result of 'XOR' is: %d\n", resultXOR);
    printf("The result of 'Matilda' of a is: %d\n", resultMatildaA);
    printf("The result of 'Matilda' of b is: %d\n", resultMatildaB);

    a = 60; // 0000 0000 0000 0000 0000 0000 0011 1100 ,because it is a 32 bit number.
    int resultShiftLeft2 = a<<2; // 0000 0000 0000 0000 0000 0000 1111 0000 => 240 , just shift the 1111 left
    int resultShiftLeft4 = a<<4; // 0000 0000 0000 0000 0000 0011 1100 0000 => 960
    printf("The result of 'Shift Left' of 2 of a is: %d\n", resultShiftLeft2);
    printf("The result of 'Shift Left' of 4 of a is: %d\n", resultShiftLeft4);
    int resultShiftRight2 = a>>2; // 0000 0000 0000 0000 0000 0000 0000 1111 => 15 , just shift the 1111 right
    int resultShiftRight4 = a>>4; // 0000 0000 0000 0000 0000 0000 0000 0011 => 3 , too much right so drop out
    printf("The result of 'Shift Right' of 2 of a is: %d\n", resultShiftRight2);
    printf("The result of 'Shift Right' of 4 of a is: %d\n", resultShiftRight4);

    return 0;
}