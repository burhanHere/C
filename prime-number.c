#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("Enter the number.\n");
    scanf("%d", &num);
    int i, devide_by_two, answer;
    devide_by_two = num / 2;
    for (i = 2; i <= devide_by_two; i++)
    {
        answer = num % i;
    }
    if (answer == 0)
    {
        printf("%d is not a prime number.", num);
    }
    if (answer != 0)
    {
        printf("%d is a prime number.", num);
    }

    return 0;
}