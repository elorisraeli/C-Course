#include <stdio.h>

void printRectangle()
{
    double width, height;
    printf("Enter a width: ");
    scanf("%lf", &width);
    printf("Enter a height: ");
    scanf("%lf", &height);
    double perimeter = 2 * (width + height);
    double area = width * height;
    printf("The perimeter is: %.2lf, and the area is: %.2lf", perimeter, area);
}

int main()
{
    // I already know a lot in c language so I pass few sections without writing
    // printf("Hello World!!!\n");
    // printf("Enter a number: ");
    // int a = 0;
    // scanf("%d", &a);
    // printf("this is: %d", a);
    // printRectangle();

    // enums
    enum Company{GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;
    printf("The value of xerox is: %d\n", xerox);
    printf("The value of google is: %d\n", google);
    printf("The value of ebay is: %d\n", ebay);

    return 0;
}