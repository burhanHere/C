#include <stdio.h>
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
    float a;
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
    return 0;
}
