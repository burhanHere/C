#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number.\n");
    scanf("%d", &a);
    if (a % 2 == 0 && a % 3 == 0)
    {
        printf("%d is not a prime number.", a);
    }
    else
    {
        printf("%d is a prime number.", a);
    }

    return 0;
}
