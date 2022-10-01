#include <stdio.h>
int main()
{

    printf("Enter the number which you want the table off.\n");
    int a;
    int c;
    int b = -1;
    scanf("%d", &a);
    printf("\ntable of %d.", a);
    do
    {
        b = b + 1;
        c = a * b;
        printf("\n%d*%d=%d", a, b, c);
    } while (b < 10);
    printf("\n");

    return 0;
}
