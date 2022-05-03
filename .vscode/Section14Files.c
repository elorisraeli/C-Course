#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

#define FILENAME "C:\\Users\\Elor Israeli\\C Course\\myFile4.txt"

int linesNum(FILE *fp);
void toStringFile(FILE *fpRead);

int main()
{
    // -----------------------------------------------------------------------------------
    // // read from file using "r" 
    // FILE *fp;
    // char c;
    // fp = fopen("C:\\Users\\Elor Israeli\\C Course\\myFile.txt", "r");
    // // another option
    // // toStringFile(fp);
    // if (fp == NULL)
    // {
    //     perror("Error in opening file.");
    //     return (-1);
    // }

    // // read each char
    // while ((c = fgetc(fp)) != EOF)
    // {
    //     printf("%c", c);
    // }
    // fclose(fp);
    // fp = NULL;
    // printf("\n");
    // system("pause");

    // -----------------------------------------------------------------------------------
    // // another option
    // char str[61];
    // if (fgets(str, 60, fp)!= NULL)
    // {
    //     printf("%s", str);
    // }
    // fclose(fp);

    // // write into file use "w+"
    // char str1[10], str2[10], str3[10];
    // int year;
    // FILE *fp2;
    // fp2 = fopen("C:\\Users\\Elor Israeli\\C Course\\myFile2.txt", "w+");
    // if (fp2 != NULL)
    //     fputs("Now Editing the text in file 2\n", fp2);
    // rewind(fp2);
    // fscanf(fp2,"%s %s %s %d\n", str1, str2,str3, &year);
    // printf("Read String1 |%s|\n", str1);
    // printf("Read String2 |%s|\n", str2);
    // printf("Read String3 |%s|\n", str3);
    // printf("Read Integer |%d|\n", year);
    // fclose(fp2);


    // -----------------------------------------------------------------------------------
    // // write into file: "!"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcd"
    // FILE *fp3;
    // int ch;
    // fp3 = fopen("C:\\Users\\Elor Israeli\\C Course\\myFile3.txt", "w+");
    // for (ch = 33; ch <= 100; ch++)
    // {
    //     fputc(ch, fp3);
    // }
    // fclose(fp3);


    // -----------------------------------------------------------------------------------
    // // find position in file
    // FILE *fp4;
    // int len;
    // fp4 = fopen("C:\\Users\\Elor Israeli\\C Course\\myFile3.txt", "r");
    // if (fp4 == NULL)
    // {
    //     printf("Error");
    //     return (-1);
    // }
    // fseek(fp4, 0 , SEEK_END);
    // len = ftell(fp4);
    // fclose(fp4);
    // printf("Total size of myFile3.txt = %d bytes\n", len);


    // -----------------------------------------------------------------------------------
    // // another way to find position in file
    // FILE *fp5;
    // fpos_t position;
    // fp5 = fopen("C:\\Users\\Elor Israeli\\C Course\\myFile3.txt", "w+");
    // fgetpos(fp5, &position);
    // fputs("Hello World!", fp5);
    // // int len = ftell(fp5); // just extra to check length in the other way
    // // printf("Total size of myFile3.txt = %d bytes\n", len);
    // fclose(fp5);

    // -----------------------------------------------------------------------------------
    // edit the file in specific position
    // FILE *fp6;
    // fp6 = fopen("C:\\Users\\Elor Israeli\\C Course\\myFile3.txt", "w+");
    // fputs("This is Elor", fp6);

    // fseek(fp6, 12, SEEK_SET);
    // fputs(", Hello how are you?", fp6);
    // fclose(fp6);

    // FILE *fp7 = NULL;
    // fp7 = fopen(FILENAME, "r");
    // printf("The file contains: %d lines\n", linesNum(fp7));
    // if (fp7 == NULL)
    // {
    //     printf("File does not exist\n");
    //     return -1;
    // }


    // -----------------------------------------------------------------------------------
    // // to upper file characters
    // //
    // FILE *fp = NULL;
    // FILE *ftemp = NULL;
    // char ch = ' ';
    // fp = fopen(FILENAME, "r");
    // if (fp == NULL)
    //     return -1;
    // // create temp file
    // ftemp = fopen("C:\\Users\\Elor Israeli\\C Course\\tempFile.txt", "w");
    // if (ftemp == NULL)
    //     return -1;
    
    // while ((ch = fgetc(fp)) != EOF)
    // {
    //     if (islower(ch))
    //     {
    //         ch = ch - 32; // to upper case the char
    //     }
    //     fputc(ch, ftemp);
    // }
    // // toStringFile(ftemp);
    // fclose(fp);
    // fclose(ftemp);

    // // // rename the temp file to the file name
    // // rename("C:\\Users\\Elor Israeli\\C Course\\tempFile.txt", FILENAME);
    // // // remove the temp file
    // // remove("C:\\Users\\Elor Israeli\\C Course\\tempFile.txt");

    // ftemp = fopen("C:\\Users\\Elor Israeli\\C Course\\tempFile.txt", "r");

    // if (ftemp == NULL)
    //     return -1;

    // // (EOF -> end of file)
    // while ((ch = fgetc(ftemp)) != EOF)
    //     printf("%c", ch);

    // // fclose(fp);
    // fclose(ftemp);

    // fp = NULL;
    // ftemp = NULL;



    
    // -----------------------------------------------------------------------------------
    // print in reverse file string
    FILE *fpr = NULL;
    int counter = 0;
    int index = 0;
    fpr = fopen("C:\\Users\\Elor Israeli\\C Course\\myFileToReverse.txt", "r");
    if (fpr == NULL)
        return- 1;
    // moves the file pointer to the end of the file
    fseek(fpr, 0, SEEK_END);
    // get the position of the file pointer
    counter = ftell(fpr);
    while (index < counter)
    {
        index++;
        fseek(fpr, -index, SEEK_END);
        printf("%c", fgetc(fpr));
    }
    printf("\n");
    fclose(fpr);
    fpr = NULL;
        

    return 0;
}

void toStringFile(FILE *fpRead){
    char c;
    if (fpRead == NULL)
    {
        perror("Error in opening file.");
        return (-1);
    }

    // read each char
    while ((c = fgetc(fpRead)) != EOF)
    {
        printf("%c", c);
    }
    printf("\n");
    // system("pause");
}

int linesNum(FILE *fpRead)
{
    int counter = 0;
    char ch;
    if (fpRead == NULL)
    {
        printf("File does not exist\n");
        return -1;
    }
    while ((ch = fgetc(fpRead)) != EOF)
    {
        if (ch == '\n')
            counter++;
    }
    fclose(fpRead);
    fpRead = NULL;
    return ++counter;
}