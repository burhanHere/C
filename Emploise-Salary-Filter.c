#include <stdio.h>
int main()
{
    printf("========================================================================================================");
    printf("\t\t\t\t\t\t\tWelcome to Emploies Salary Filter.");
    printf("________________________________________________________________________________________________________");
    int cs;
    int e;
    int a;
start:
    printf("\nEnter the current salary of the employ=");
    scanf("%d", &cs);
    printf("\nEntet the time of experience of the employ in this company to check his eligibility for increment in salary=");
    scanf("%d", &e);
    if (e < 10)
    {
        printf("You are not eligibal for increment in salary.");
    }

    else if (e >= 10)
    {
        printf("Congratulation!\nYou are eligibal for increment in salary.");
        int p10os;
        p10os = cs * 10 / 100;
        int p10as;
        p10as = cs + p10os;
        printf("\nYour incremented salary=%d", p10as);
    }
    printf("\nEnter the age of the Employ to check his eligibility for bonous=");
    scanf("%d", &a);
    if (a >= 60)
    {
        printf("\nCongratulation!");
        printf("\nYou are eligibal for bonous.");
        int b;
        b = cs * 5 / 100;
        printf("The bonous you will get is %d", b);
    }
    else if (a < 60)
    {
        printf("\nYou are not eligibal for bonous.");
    }
    goto start;
    return 0;
}
