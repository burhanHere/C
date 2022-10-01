#include <stdio.h>
#include <conio.h>
int main()
/*this program is for finding the smallest number.we can also chenge it to find the largest number by changing the condition to (min< variable name).*/
{
    int a, b, c, d, min;
    printf("Enter number:");
    scanf("%d", &a);
    printf("Enter number:");
    scanf("%d", &b);
    printf("Enter number:");
    scanf("%d", &c);
    printf("Enter number:");
    scanf("%d", &d);
    min = a;
    if (min > b)
    {
        min = b;
    }
    if (min > c)
    {
        min = c;
    }
    if (min > d)
    {
        min = d;
    }
    printf("%d is the smallest number.", min);
    return 0;
}
