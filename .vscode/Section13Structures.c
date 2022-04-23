#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdbool.h>

struct namect
{
    char *fname;
    char *lname;
    int letters;
};

struct Family
{
    char name[20];
    int age;
    char father[20];
    char mother[20];
};

struct item
{
    char *pItemName;
    int quantity;
    float price;
    float amount;
};

bool siblings(struct Family member1, struct Family member2);
bool psiblings(struct Family *pmember1, struct Family *pmember2);
void getinfo(struct namect *pst);

void readItem(struct item *i);
void printItem(struct item *i);

int main()
{
    // struct date
    // {
    //     int day;
    //     int month;
    //     int year;
    // };
    // struct date today;
    // today.day = 23;
    // today.month = 4;
    // today.year = 2022;
    // struct date tommorow;
    // tommorow = (struct date){24, 4, 2022};
    // printf("Today's date is: %i.%i.%.2i\n", today.day, today.month, today.year % 100);
    // printf("Tommorow's date is: %i.%i.%.2i\n", tommorow.day, tommorow.month, tommorow.year % 100);

    // struct date myDates[5] = {{3, 3, 1999}, {17, 10, 2000}, [4] = {23, 4, 2022}};

    // struct time
    // {
    //     int hours;
    //     int minutes;
    //     int seconds;
    // };
    // struct dateAndTime
    // {
    //     struct date sdate;
    //     struct time stime;
    // };
    // struct dateAndTime event;
    // event.sdate.day = 25;
    // event.sdate.month = 4;
    // event.sdate.year = 2022;
    // event.stime.hours = 14;
    // event.stime.minutes = 30;
    // event.stime.seconds = 00;
    // printf("The event's date is: %i.%i.%.2i and time is: %i:%i%i\n\n",
    //        event.sdate.day, event.sdate.month, event.sdate.year % 100,
    //        event.stime.hours, event.stime.minutes, event.stime.seconds);

    // // Structures and Pointers
    // struct date *datePtr;
    // datePtr = &today;
    // (*datePtr).day = 23;
    // datePtr->year = 2025;
    // if ((datePtr->month == 4))
    // {
    //     printf("Today's date is: %i.%i.%.2i\n", today.day, today.month, today.year % 100);
    //     printf("Today's date is: %i.%i.%.2i\n", (*datePtr).day, datePtr->month, datePtr->year % 100);
    // }

    // struct names
    // {
    //     char first[20];
    //     char last[20];
    // };
    // // same as the structure:
    // struct pnames
    // {
    //     char *first;
    //     char *last;
    // };

    // struct names trees = {"Ekaliptus, Arava"};
    // struct pnames otherTrees = {"Brosh, Shkedia"};
    // printf("%s and %s\n", trees.first, otherTrees.first); // print:"Ekaliptus, Arava and Brosh, Shkedia"

    // struct namect *myName;
    // getinfo(myName);


    // struct Employee
    // {
    //     char name[30];
    //     char hireDate[15];
    //     float salary;
    // };
    // struct Employee emp1 = {"Eden", "10.10.2010", 9000.0f};
    // printf("Employee details: Name: %s, hire date: %s, salary: %lf\n", emp1.name, emp1.hireDate, emp1.salary);
    // printf("Enter employee name: ");
    // scanf("%s", emp1.name);
    // printf("Enter employee hire date: ");
    // scanf("%s", emp1.hireDate);
    // printf("Enter employee salary: ");
    // scanf("%f", &emp1.salary);
    // printf("Employee details: Name: %s, hire date: %s, salary: %lf\n", emp1.name, emp1.hireDate, emp1.salary);


    struct item itm;
    struct item *pItem;
    pItem = &itm;

    pItem->pItemName = (char*) malloc(30* sizeof(char));
    if (pItem == NULL)
        exit(-1);
    
    readItem(pItem);
    printItem(pItem);    
    free(pItem);

    return 0;
}



void printItem(struct item *i){
    printf("The item: %s\n with the quantity of: %d\n that cost: %.2lf\n the amount is: %.3lf\n",
            i->pItemName, i->quantity, i->price, i->amount);
}

void readItem(struct item *i){
    printf("\nEnter product name: ");
    scanf("%s", i->pItemName);
    printf("\nEnter product price: ");
    scanf("%f", &i->price);
    printf("\nEnter product quantity: ");
    scanf("%d", &i->quantity);
    i->amount = (float)i->quantity * i->price;
}

bool siblings(struct Family member1, struct Family member2)
{
    if (strcmp(member1.mother, member2.mother) == 0)
        return true;
    return false;
}
bool psiblings(struct Family *pmember1, struct Family *pmember2)
{
    if (strcmp(pmember1->mother, pmember2->mother) == 0)
        return true;
    return false;
}


void getinfo(struct namect *pst)
{
    char temp[20];
    printf("Enter first name: ");
    gets(temp);

    // allocate memory to hold name
    pst->fname = (char *)malloc(strlen(temp) + 1);

    // copy name to allocated memory
    strcpy(pst->fname, temp);
    printf("Enter last name: ");
    gets(temp);
    pst->lname = (char *)malloc(strlen(temp) + 1);
    strcpy(pst->lname, temp);
    printf("Your name is: %s %s", pst->fname, pst->lname);
}