#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

int main()
{

    // long num1 = 0L;
    // long num2 = 0L;
    // long *pnum= NULL; // a pointer to address, *pnum -> NULL

    // pnum = &num1;       // num1 = 0L, num2 = 0L, *pnum -> num1_address = 0L
    // *pnum = 2L;         // num1 = 2L, num2 = 0L, *pnum -> num1_address = 2L
    // ++num2;             // num1 = 2L, num2 = 1L, *pnum -> num1_address = 2L
    // num2 += *pnum;      // num1 = 2L, num2 = 3L, *pnum -> num1_address = 2L
    // pnum = &num2;       // num1 = 2L, num2 = 3L, *pnum -> num2_address = 3L
    // ++*pnum;            // num1 = 2L, num2 = 4L, *pnum -> num2_address = 4L

    // // To sum up: num1 = 2L, num2 = 4L, *pnum = 4L , *pnum + num2 = 8L
    // printf("num1 = %ld  num2 = %ld  *pnum = %ld  *pnum + num2 = %ld\n",
    //         num1, num2, *pnum, *pnum + num2);

    // // scanf value directly without & simbul
    // int value = 0;
    // int *pvalue = &value;
    // printf("Enter a nubmer: ");
    // scanf("%d", pvalue);
    // printf("%d", value);

    // // --- const pointer ---

    // const int number = 33; // cannot change num
    // int number2 = 22;
    // const int *pnumber2 = &number2; // cannot change the pointer (always point to number2_address)
    // printf("number = %d, number2 = %d, *pnumbers2 = %d\n", number, number2, *pnumber2);
    // number2 = 44; // number2 = 44, *pnumber2 = 44
    // printf("number = %d, number2 = %d, *pnumbers2 = %d\n", number, number2, *pnumber2);
    // // *pnumber2 = &number; --> cannot be done.

    // // same as:
    // int count = 43;
    // int *const pcount = &count; //the pointer value cannot be changed
    // printf("count = %d, pcount = %d\n", count, pcount);
    // pcount = 12; --> cannot be done.
    // *pcount = 12; // *pcount = 12, count = 12
    // printf("count = %d, pcount = %d\n", count, pcount);
    // int item = 12;
    // // pcount = item; --> cannot be done.
    // // pcount = &item; --> cannot be done.

    // int arr[] = {1, 2, 3, 4, 5, 6};
    // printf("The sum is: %d\n", arraySum(arr, 6));
    // printf("The sum is: %d\n", arraySum2(arr, 6));

    // int i;
    // char multiple[] = "a string";
    // char *p = multiple;
    // for (i = 0; i < strlen(multiple); ++i)
    // {
    //     printf("multiple[%d] = %c   *(p+%d) = %c   &multiple[%d] = %p   p+%d = %p\n",
    //             i, multiple[i], i, *(p+i), i, &multiple[i], i, p+i);
    // }

    // long multipleL[] = {15L, 25L, 35L, 45L};
    // char *p = multipleL;
    // for (int i = 0; i < sizeof(multipleL)/sizeof(multipleL[0]); ++i)
    // {
    //     printf("address p+%d   (&multipleL[%d]: %llu   *(p+%d)   value: %d\n",
    //             i, i, (unsigned long long) (p+i), i, *(p+i));
    // }

    // // Pointers and strings
    // char text[] ="this is my text 1";
    // char copy[15];
    // copyString(copy, text);
    // printf("1. %s \n", copy);

    // char text2[] ="this is my text 2";
    // char *text2Ptr = text2;
    // char copy2[15];
    // char *copy2Ptr = copy2;
    // copyString2(copy2Ptr, text2Ptr);
    // printf("2. %s \n", copy2);

    // char text3[] ="this is my text 3";
    // char *text3Ptr = text3;
    // char copy3[15];
    // char *copy3Ptr = copy3;
    // copyString2(copy3Ptr, text3Ptr);
    // printf("3. %s \n", copy3);

    // // Connting characters in string
    // printf("The length is: %d \n", stringLength("Elor Israeli"));
    // printf("The length is: %d \n", stringLength(""));


    // // swap by pointers
    // int x = 10, y = 60;
    // int *px = &x, *py = &y;
    // printf("x = %d, y = %d\n", x, y);
    // swap(px, py); 
    // printf("x = %d, y = %d\n", x, y);

    // square by pointers
    // int num = 9;
    // square(&num);
    // printf("The square is: %d\n", num);
    // int *pnum = (int *)malloc(sizeof(int));
    // *pnum = 4;
    // square(pnum);
    // printf("The square is: %d\n", *pnum);

    // // malloc calloc realloc
    // char *str = NULL;
    // str = (char *) malloc(15 * sizeof(char));
    // strcpy(str, "Hello");
    // printf("String = %s, Address = %p\n", str, str);

    // str = (char *) realloc(str, 25 * sizeof(char));
    // strcat(str, " World!");
    // printf("String = %s, Address = %p\n", str, str);

    // free(str);

    // understand dynamic memory
    int size;
    char *text = NULL;
    printf("Enter limit of the text: \n");
    scanf("%d", &size);
    text = (char *) malloc(size * sizeof(char));

    if(text != NULL){
        printf("Enter some text: \n");
        scanf(" ");
        gets(text);
        printf("The text is: %s\n", text);
    }
    free(text);
    text = NULL;


    return 0;
}
// void square(int * num){ // the same
void square(int * const num){ //cannot change the address of num
    *num = (*num) * (*num);
}


void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int stringLength(const char *string)
{
    const char *lastAddress = string;

    while (*lastAddress)
    {
        ++lastAddress;
    }
    return lastAddress - string;
}

void copyString(char to[], char from[])
{
    int i;
    for (i = 0; i < from[i] != '\0'; i++)
    {
        to[i] = from[i];
    }
    to[i] = '\0';
}

void copyString2(char *to, char *from)
{
    for (; *from != '\0'; from++, to++)
    {
        *to = *from;
    }
    *to = '\0';
}

void copyString3(char *to, char *from)
{
    while (*from) // the null character in the end equal to 0
        *to = *from;

    *to = '\0';
}

int arraySum(int array[], const int n)
{
    int sum = 0, *ptr;
    int *const arrayEnd = array + n;
    for (ptr = &array[0]; ptr < arrayEnd; ++ptr)
    {
        sum += *ptr;
    }
    return sum;
}
int arraySum2(int *array, const int n)
{ // parameters are pointers
    int sum = 0, *ptr;
    int *const arrayEnd = array + n;

    for (; array < arrayEnd; ++array)
    {
        sum += *array;
    }
    return sum;
}