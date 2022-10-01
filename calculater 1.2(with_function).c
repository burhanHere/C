#include <stdio.h>
#include <math.h>
#include <conio.h>
float sum(float a, float b)
{
    return a + b;
}
float subtract(float a, float b)
{
    return a - b;
}
float square(float a)
{
    return a * a;
}
float multiply(float a, float b)
{
    return a * b;
}
float devide(float a, float b)
{
    return a / b;
}
float cube(float a)
{
    return a * a * a;
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
float table(float a, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        printf("%f X %d = %f\n", a, start, a * i);
        start = start + 1;
    }
}
int main()
{
re_enter:
    printf("Enter 0 to Exit.\nEnter 1 for Sum\nEnter 2 for Subtrection.\nEnter 3 for Multiplication\nEnter 4 for Devision\nEnter 5 for Square\nEnter 6 for Cube\nEnter 7 to get table of a number.\nEnter 8 to get Factoral.\n");
    int z;
    scanf("%d", &z);
    float c, a, b;
    if (z == 1)
    {

        printf("OK!\nLet's perform Summation\n");
        printf("Enter a value=");
        scanf("%f", &a);
        printf("Enter a value=");
        scanf("%f", &b);
        c = sum(a, b);
        printf("sum=%f\n", c);
        getch();
    }
    else if (z == 2)
    {
        printf("OK!\nLet's perform Subtraction\n");
        printf("Enter a number=");
        scanf("%f", &a);
        printf("Enter a number=");
        scanf("%f", &b);
        c = subtract(a, b);
        printf("Difference=%f", c);
        getch();
    }
    else if (z == 3)
    {
        printf("OK!\nLet's perform Multiplication\n");
        printf("Enter a number=");
        scanf("%f", &a);
        printf("Enter a number=");
        scanf("%f", &b);
        c = multiply(a, b);
        printf("Multiplication=%f", c);
        getch();
    }
    else if (z == 4)
    {
        printf("OK!\nLet's perform Devision\n");
        printf("Enter a number=");
        scanf("%f", &a);
        printf("Enter a number=");
        scanf("%f", &b);
        c = devide(a, b);
        printf("Devision=%f", c);
        getch();
    }
    else if (z == 5)
    {
        printf("OK!\nLet's perform Squaring of amount you enter.\n");
        printf("Enter a number for square.\n");
        scanf("%f", &c);
        a = square(c);
        printf("Square of %f=%f", c, a);
        getch();
    }
    else if (z == 6)
    {
        printf("OK!\nLet's perform Cube the  amount you enter.\n");
        printf("Enter a number for cube.\n");
        scanf("%f", &c);
        a = cube(c);
        printf("Cube of %f=%f", c, a);
        getch();
    }
    else if (z == 7)
    {

        int b, c;
        printf("OK!\nLet's print table.\n");
        printf("Enter the number of the requeired table=");
        scanf("%f", &a);
        printf("Enter the starting point of the tabel=");
        scanf("%d", &b);
        printf("Enter the ending point of the table=");
        scanf("%d", &c);
        printf("Tabel of %f\n", a);
        float d;
        d = table(a, b, c);
    }
    else if (z == 8)
    {
        int a;
        printf("Enter a number=");

        scanf("%d", &a);
        int c;
        c = factoral(a);
        printf("Factoral of %d = %d\n", a, c);
    }

    else if (z == 0)
    {
        goto end;
    }
    else
    {
        printf("IN-VALID ENTERY!!!\nEnter a VALID ENTRY\n\n");
        goto re_enter;
    }
//Desition will be taken by the user that if he want to exit the profram or to run the program again.
re_enter__desition:
    printf("Enter 0 exit from the program.||Enter 1 to Run the program again.\n");
    int E_O_R_P_A;
    scanf("%d", &E_O_R_P_A);
    if (E_O_R_P_A == 0)
    {
        goto end;
    }
    else if (E_O_R_P_A == 1)
    {
        goto re_enter;
    }
    else
    {
        printf("IN-VALID ENTERY!!!\nEnter a VALID ENTRY\n\n");
        goto re_enter__desition;
    }
end:
    return 0;
}