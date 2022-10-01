#include <stdio.h>
#include <math.h>

int main()
{
    printf("\n\t\t\t\t\t\t\tWelcome to PTBB Marks And Grading System.");
    printf("\n\t\t\t\t\t\t\t\t\tFor Class 9");
    printf("\n__________________________________________________________________________________________________________________________________________");
    printf("\nNote:- You just have to enter the marks of the students for Grading.");
    int E, U, M, P, I;
    printf("\n__________________________________________________________________________________________________________________________________________");
    printf("\nMarks:-");
    printf("\n__________________________________________________________________________________________________________________________________________");
    printf("\nEnglish(out of 75)=");
    scanf("%d", &E);
    printf("\nUrdu(out of 75)=");
    scanf("%d", &U);
    printf("\nMaths(out of 75)=");
    scanf("%d", &M);
    printf("\nPhysics(out of 60)=");
    scanf("%d", &P);
    printf("\nIslamiyat(out of 50)=");
    scanf("%d", &I);
    int MO;
    MO = E + U + M + P + I;
    printf("\nMarks Obtained=%d", MO);
    if (MO >= 305)
    {
        printf("\nGrade=A+");
    }
    else if (MO >= 275)
    {
        printf("\nGrade=A");
    }
    else if (MO >= 245)
    {
        printf("\nGrade=A-");
    }
    else if (MO >= 215)
    {
        printf("\nGrade=B+");
    }
    else if (MO >= 185)
    {
        printf("\nGrade=B");
    }
    else if (MO >= 155)
    {
        printf("\nGrade=C+");
    }
    else if (MO >= 125)
    {
        printf("\nGrade=D+");
    }
    else if (MO >= 95)
    {
        printf("\nGrade=D");
    }
    else if (MO >= 65)
    {
        printf("\nGrade=E");
    }
    else if (MO <= 35)
    {
        printf("\nGrade=FALI");
    }
    printf("\nTotal Marks=335");

    return 0;
}