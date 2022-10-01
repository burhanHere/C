#include <stdio.h>

int factoral();
int main()
{
    int a;
    printf("Enter a number.");

    scanf("%d", &a);
    int c;
    c = factoral(a);
    printf("%d", c);
    return 0;
}
int factoral(int a)
{

    int b = 1;
    for (int i = 1; i <= a; i++)
    {
        b = b * i;
    }
    return b;
}