#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void countStrChars(char str[]);

int strlength(char str[]);

void stringsConcatenate(char result[], char str1[], char str2[]);

bool isStringsEqual(char str1[], char str2[]);

void reverse(char result[], char str[]);

void bubbleSort(int numOfStrs, char str[]);

int main()
{
    // // must to call the library <string.h>
    // // strcat(myStr, copyStr); , strlen(myStr); , strcpy(myStr, copyStr, newLength);
    // char str[80] = "Hello how are you - my name is - Elor";
    // const char s[2] = "-";
    // char *token;
    // // get the first token => "Hello how are you"
    // token = strtok(str, s);
    // // walk through other tokens => "my name is" , "Elor"
    // while (token != NULL){
    //     printf(" %s\n", token);
    //     token = strtok(NULL, s);
    // }

    // char str[100];
    // printf("Please enter any keyboard keys you want: ");
    // scanf("%s", str);
    // countStrChars(str);

    // // make string to upper case
    // char lowerStr[80];
    // printf("Please enter a lower case string: ");
    // scanf("%s", lowerStr);
    // for (int i = 0; (lowerStr[i] = (char)toupper(lowerStr[i])) != '\0'; i++);
    // printf("The string is now: %s", lowerStr);

    // // converting string
    // double value = 0;
    // char str[] = "3.5 2.5 1.26";
    // char *pointerStr = str; // the pointer to the string to be converted
    // char *pointer = NULL;

    // while (true)
    // {
    //     value = strtod(pointerStr, &pointer);
    //     if (pointerStr == pointer)
    //         break;
    //     else{
    //         printf(" %f", value);
    //         pointerStr = pointer; // Store start for next loop run
    //     }
    // }

    // printf("Length: %d", strlength("Elor"));

    // char str1[20], str2[20], result[40];
    // printf("Enter 2 strings: ");
    // gets(str1);
    // gets(str2);
    // printf("The strings %s equal.\n", (isStringsEqual(str1,str2)==1)? "are" : "are not");
    // stringsConcatenate(result, str1, str2);
    // printf("The string is now: %s", result);

    // char str[20], result[20];
    // printf("Enter the string to reverse: ");
    // gets(str);
    // reverse(result, str);
    // printf("The reverse of '%s', is: '%s'", str, result);

    // Bubble Sort
    char myStr[25][50], temp[25]; // 2D array, max size is 25 strings with max length of 50
    int n, i, j;
    printf("BUBBLE SORT: \n\n");
    printf("Enter number of strings: ");
    scanf("%d", &n);
    printf("Input the %d strings: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", myStr[i]);
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <= n - i; j++){
            // compare 2 strings, if first argument greater the second argument the strcmp return >0
            if (strcmp(myStr[j], myStr[j + 1]) > 0) {
                // swap
                strncpy(temp, myStr[j], sizeof(temp) - 1);
                strncpy(myStr[j], myStr[j + 1], sizeof(temp) - 1);
                strncpy(myStr[j + 1], temp, sizeof(temp) - 1);
            }
        }
    }
    
    printf("The strings after sorting: \n");
    for (i = 0; i <= n; i++)
    {
        printf("%s\n", myStr[i]);
    }
    

    return 0;
}

void reverse(char result[], char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        result[i] = str[strlen(str) - 1 - i];
    }
    result[strlen(str)] = '\0';
}

bool isStringsEqual(char str1[], char str2[])
{
    int max = (strlen(str1) > strlen(str2)) ? strlen(str1) : strlen(str2);
    for (int i = 0; i < max; i++)
    {
        if (str1[i] == '\0' || str2[i] == '\0')
            return false;
        if (str1[i] != str2[i])
            return false;
    }
    return true;
}

void stringsConcatenate(char result[], char str1[], char str2[])
{
    int index = 0;
    for (int i = 0; i < strlen(str1); i++)
    {
        result[index] = str1[i];
        index++;
    }
    for (int i = 0; i < strlen(str2); i++)
    {
        result[index] = str2[i];
        index++;
    }
    result[index] = '\0';
}

int strlength(char str[])
{
    int length = 0;
    int i = 0;
    while (str[i])
    {
        length++;
        i++;
    }
    return length;
}

void countStrChars(char str[])
{
    int countdigits = 0;
    int countBigLetters = 0;
    int countSmallLetters = 0;
    int countPunctuations = 0;
    int index = 0;
    char c;
    while (str[index])
    {
        c = str[index];
        if (islower(c))
            countSmallLetters++;
        else if (isupper(c))
            countBigLetters++;
        else if (isdigit(c))
            countdigits++;
        else if (ispunct(c))
            countPunctuations++;

        index++;
    }
    printf("In the string there is:\n %d Big letters\n %d Small letters\n %d Digits\n %d Punctuations",
           countBigLetters, countSmallLetters, countdigits, countPunctuations);
}