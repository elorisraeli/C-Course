#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define MONTHS_NUM 12 // a way in C to define constant variable

void printPrimes()
{
    int counter = 0;
    for (int i = 3; i <= 100; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                counter++;
            }
            if (counter != 0)
                break;
        }
        if (counter == 0)
            printf("%d  ", i);
        counter = 0;
    }
}

double rand_range(double min, double max)
{
    double random = ((double)rand()) / RAND_MAX;
    double range = (max - min) * random;
    double number = min + range;
    return number;
}

int main()
{
    // //sum grades and print the average
    // int grades[10];
    // int count = 10;
    // long sum = 0;
    // float average = 0.0f;
    // printf("Enter the 10 grades:\n");

    // int i;
    // for (i = 0; i < count; i++)
    // {
    //     printf("%2u> ", i+1);
    //     scanf("%d", &grades[i]);
    //     sum += grades[i];
    // }
    // average = (float)sum/count;
    // printf("\nThe average is: %.2lf\n", average);

    // print days in each month
    // char *months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September",
    //  "October", "November", "December"};
    // ^^this is extra knowledge(not from the course)^^
    // int days[MONTHS_NUM] = {31, 28, 31, 30 ,31 ,30, 31, 31, 30, 31, 30 ,31};
    // int index;
    // for (index = 0; index < MONTHS_NUM; index++)
    //     printf("Month %s has %2d days.\n", months[index], days[index]);

    // // 2D array and 3D array
    // int arr2D[3][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12}};
    // int arr3D[2][3][4] = {
    //     {// the first block
    //      {1, 2, 3, 4},
    //      {5, 6, 7, 8},
    //      {9, 10, 11, 12}},
    //     {// the second block
    //      {11, 12, 13, 14},
    //      {15, 16, 17, 18},
    //      {19, 20, 21, 22}}};
    // // the print of 3D array
    // for (int i = 0; i < 2; i++) // enter the blocks
    // {
    //     printf("Block number %d\n", i + 1);
    //     for (int j = 0; j < 3; j++) // enter the rows
    //     {
    //         for (int k = 0; k < 4; k++) // enter the columns
    //         {
    //             printf("%d, ", arr3D[i][j][k]);
    //         }
    //         printf("\n");
    //     }
    //     printf("\n");
    // }

    // printPrimes();

    // // another way
    // int p, i;
    // int primes[50] = {0};
    // bool isPrime; // need to add #include <stdbool.h> libarary
    // primes[0] = 2;
    // primes[1] = 3;
    // int primeIndex = 2;
    // for (p = 5; p <= 100; p+=2)
    // {
    //     isPrime = true;
    //     for (i = 1; isPrime && p/primes[i]>=primes[i]; ++i)
    //         if(p%primes[i]==0)
    //             isPrime = false;
    //     if (isPrime == true)
    //     {
    //         primes[primeIndex++] = p; // use the primeIndex and after run this line add to him 1.
    //     }
    // }
    // for (int i = 0; i < primeIndex; i++)
    // {
    //     printf("%i  ", primes[i]);
    // }

    // a weather program
    // fill a 2D array random with rand_range function -> calculate double number between 0-10
    double rainfall[5][12];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            rainfall[i][j] = rand_range(0, 10);
        }
    }
    // printf("Rows print: \n");
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 12; j++)
    //     {
    //         printf("%.2lf, ", rainfall[i][j]);
    //     }
    //     printf("\n");
    // }

    // the result that we got is the 2D array:
    // {
    // {0.01, 5.64, 1.93, 8.09, 5.85, 4.80, 3.50, 8.96, 8.23, 7.47, 1.74, 8.59},
    // {7.11, 5.14, 3.04, 0.15, 0.91, 3.64, 1.47, 1.66, 9.89, 4.46, 1.19, 0.05},
    // {0.09, 3.78, 5.32, 5.71, 6.02, 6.07, 1.66, 6.63, 4.51, 3.52, 0.57, 6.08},
    // {7.83, 8.03, 5.20, 3.02, 8.76, 7.27, 9.56, 9.26, 5.39, 1.42, 4.62, 2.35},
    // {8.62, 2.10, 7.80, 8.44, 9.97, 10.00, 6.11, 3.92, 2.66, 2.97, 8.40, 0.24}
    // }

    int year = 2010;
    double sumMonths, sumYears;
    for (int i = 0; i < 5; i++)
    {
        sumMonths = 0;
        for (int j = 0; j < 12; j++)
        {
            sumMonths += rainfall[i][j];
        }
        sumYears += sumMonths;
        printf("The average rainfall per month in %d is: %.2lf\n", year+i, sumMonths/12.0);
    }
    printf("The yearly average is: %.2lf", sumYears/5.0);

    

    return 0;
}