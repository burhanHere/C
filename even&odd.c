#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number.");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is even.", a);
    }
    if (a % 2 == 1)
    {
        printf("%d is odd.", a);
    }

    return 0;
}
