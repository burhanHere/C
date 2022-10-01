#include <stdio.h>
int main()
{
    for (;;)
    {
        printf("\n\n\n\n\n\n\n\nWelcome to driving licence office.");
        char a;
        printf("\nDo you want to apply for driving licence. (y/n)\t\tFor exit enter (e)\n");
        scanf("%c", &a);
        if (a == 'y')
        {
            printf("Enter your age.\n");
            int age;
            scanf("%d", &age);
            if (age < 18)
            {
                printf("You are not eligible.\nBetter luck next time.");
            }
            else if (age >= 18)
            {
                printf("Congratulations!\nYou are eligible for driving licence.");
                char gender;
                printf("\nSelect your gender.");
                printf("\nEnter (m) for male,(f) for female & (o) for others.");
                scanf("%c", &gender);
            }
        }
        else if (a == 'n')
        {
            printf("Good bye.\nHave a good day.");
        }
        else if (a == 'e')
        {
            break;
        }
        else
        {
            printf("Invalid entry!");
        }
    }

    return 0;
}