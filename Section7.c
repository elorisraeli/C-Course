#include <stdio.h>
#include <time.h>

int main()
{
    // enum Weekday {Sunday, Monday, Thusday, Wednesday, Thurseday, Friday, Saturday};
    // enum Weekday today = Friday;

    // switch (today)
    // {
    // case Sunday:
    //     printf("Today is Sunday.");
    //     break;
    // case Monday:
    //     printf("Today is Monday.");
    //     break;
    // case Thusday:
    //     printf("Today is Thusday.");
    //     break;
    // case Wednesday:
    //     printf("Today is Wednesday.");
    //     break;
    // case Thurseday:
    //     printf("Today is Thurseday.");
    //     break;
    // case Friday:
    //     printf("Today is Friday.");
    //     break;
    // case Saturday:
    //     printf("Today is Saturday.");
    //     break;

    // default:
    //     printf("Please enter a day in week.");
    //     break;
    // }

    // printf("Enter the number of hours worked this week: ");
    // double hours, taxPay;
    // scanf("%lf", &hours);
    // // if worked beyond the 40 hours week, 18$/hour, else its 12$/hour
    // double totalValue = (hours-40)<0 ? 12*40 : 12*40 + 18*(hours-40);
    // // 15% first 300$, 20% next 150$, 25% the rest.
    // if (totalValue <= 300) taxPay=0.15*totalValue;
    // else if (totalValue <= 450) taxPay=0.15*totalValue + 0.2*(totalValue-300);
    // else taxPay = 0.15*300 + 0.2*150 + 0.25*(totalValue-450);

    // double netoValue = totalValue-taxPay;
    // printf("You earn this week %.2lf$\n The amount of the tax you should pay is: %.3lf$\n",totalValue ,taxPay);
    // printf("So your neto this week is: %.3lf",netoValue);

    // // for monitoring data could useful infinate loop
    // int counter = 0;
    // for( ;; ){
    //     printf("%d", counter);
    //     counter++;
    // }

    // int num = 0;
    // printf("Enter a number (to stop enter 1):");
    // while (scanf("%d", &num))
    // {
    //     if (num == 1) break;
    //     printf("Enter a number:");
    // }

    // // guess the numer
    // int randomNumber = rand() % 21;
    // int tries = 5;
    // int guess;
    // printf("Please enter a number between 0-20: ");
    // do
    // {
    //     scanf("%d", &guess);
    //     if (guess == randomNumber)
    //     {
    //         printf("YOU WIN!");
    //         break;
    //     }

    //     if (guess > 20 || guess < 0)
    //     {
    //         printf("You have %d tries left.\n", tries);
    //         printf("Please enter a number between 0-20: ");
    //     }
    //     else if (guess > randomNumber)
    //     {
    //         tries--;
    //         printf("You have %d tries left.\n", tries);
    //         printf("My number is less than that.\n");
    //     }
    //     else if (guess < randomNumber)
    //     {
    //         tries--;
    //         printf("You have %d tries left.\n", tries);
    //         printf("My number is more than that.\n");
    //     }

    //     if (tries == 0)
    //         printf("YOU LOSE, maybe next time..");
    // } while (tries > 0);

    return 0;
}