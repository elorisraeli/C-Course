#include <stddef.h>
// NULL, offsetof(structure, member), ptrdiff_t, size_t, wchar_t
#include <limits.h>
// all the maximum and minimum numbers of any object type
#include <stdbool.h>
// bool could be write as _Bool, now can use true, false
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// --------------------------------------------------------------------------------

// STRING FUNCTIONS --> <string.h>
char *strcat(s1, s2);
// return s1 with the s2 in the end of s1 string connect
char *strchr(s, c);
// return the pointer of the c char first position in the s string
char *strrchr(s, c);
// return the pointer of the c char last position in the s string
int strcmp(s1, s2);
// return 0 if equals, negative number if s1 less than s2, positive otherwise
char strncmp(s1, s2, n);
// same as strcmp but start compare from the n
char *strcpy(s1, s2);
// copies the string s2 to s1, return s1
char *strcpy(s1, s2, n);
// same as strcpy but start compare from the n
size_t strlen(s);
// return the s string length
char *strncat(s1, s2, n);
// connect s2 to s1 until n position or until s2 ends.
char *strstr(s1, s2);
// return the pointer to the position of s2 string in s1 string and return null if not found
char *strtok(s1, s2);
// breaks the string s1 into tokens based on delimiter characters in s2


// CHARACTER FUNCTIONS --> <ctype.h>
// isalnum, isalpha, isblank, iscntrl, isdigit, isgraph, islower, isspace, ispunt, isupper, isxdigit
int tolower(c);
// return the value of ASCII table of the lowercase of c char, if not lowercase then itself
int toupper(c);
// return the value of ASCII table of the uppercase of c char, if not uppercase then itself


// I/O FUNCTIONS (input/output)  --> <stdio.h>
int fclose(filPtr);
// return zero is seccess to close the pointer file, return EOF in error
int feof(filePtr);
// return zero if the pointer of the file reached to the end of the file, nonzero otherwise
int fflush(filePtr);
// writes all in buffer to the file, return zero on success and EOF if error
int fgetc(filePtr);
// return the next character from the file in pointer position, return EOF if gets to end of file
int fgetpos(filePtr, fpos);
// return zero on success to get the current position of the pointer of the file and storing in fpos
// fpos is and fpos_t variable which defined in <stdio.h>
char *fgets(buffer, i, filePtr);
// get all characters until the first: i-1 character or end of line
FILE *fopen(fileName, accessMode);
// open the file with the given mode
int fprintf(filePtr, format, arg1, arg2, args, argN);
// print the args from the file by the given format 
int fputc(c, filePtr);
// writes c in the pointed file, return 0 in success, return EOF if error
int fputs(buffer, filePtr);
// writes characters from the array until '/0' in the pointed file, return 0 in success, return EOF if error
int fscanf(filePtr, format, arg1, arg2, args, argN);
// read the args from the file by the given format
int fseek(filePtr, offset, mode);
// positions the file pointer to the offset position from beginning of from the end, depends on mode
int fsetpos(filePtr, fpos);
// positions the pointer of file to the fpos position
long ftell(filePtr);
// return the offset in bytes if the current position, return -1L if error
int printf(format, arg1, arg2, args, argN);
// return the number of characters that have printed from this args
int remove(fileName);
// removes the file, return zero on success, nonzero otherwise
int rename(fileName1, fileName2);
// renames the fileName1 to filName2, return zero on success, nonzero otherwise
int scanf(format, arg1, arg2, args, argN);
// read args by format


// CONVERSION FUNCTIONS --> <stdlib.h>
double atof(s);
// converts to floating-pointer number, return the result
double atoi(s);
// converts to int number, return the result
double atol(s);
// converts to long-int number, return the result


// DYNAMIC MEMORY FUNCTIONS --> <stdlib.h>
void *calloc(n, size);
// create space to put n items of data in size bytes in length, spaces initiallize to zero,
// on success the pointer to the space returns, otherwise return null pointer
void *free(pointer);
// after using funtions that create space data, like calloc() malloc() realloc(), free the memory
void *malloc(size); 
// create space to put size bytes in length, spaces initiallize to zero. return pointer to begin of space
void *realloc(pointer, size);
// change size of previously space in bytes, return the pointer of new space




int main(){

    // FILE *pty;
    // int ab = fflush(pty);
    // char c = 'V';
    // int a = tolower(c);
    // int b = toupper(c);
    // printf("\n\n the result is: %d and %d\n\n", a, b);

    

    return 0;
}