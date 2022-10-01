#include <stdio.h>
#include <conio.h>
int main()
{
    int arra[1000], temp, b;
    printf("Enter the number of digits you want to enter.\n");
    scanf("%d", &b);
    for (int k = 0; k < b; ++k)
    {
        printf("Enter number.");
        scanf("%d", &arra[k]);
    }
    for (int i = 0; i < b; ++i)
    {
        for (int j = i + 1; j < b; ++j)
        {
            if (arra[i] > arra[j])
            {
                temp = arra[i];
                arra[i] = arra[j];
                arra[j] = temp;
            }
        }
    }

    printf("In acending order.\n");
    for (int i = 0; i < b; i++)
    {
        printf("%d\n", arra[i]);
    }
    for (int i = 0; i < b; ++i)
    {
        for (int j = i + 1; j < b; ++j)
        {
            if (arra[i] < arra[j])
            {
                temp = arra[i];
                arra[i] = arra[j];
                arra[j] = temp;
            }
        }
    }
    printf("In decending order.\n");
    for (int i = 0; i < b; i++)
    {
        printf("%d\n", arra[i]);
    }
    return 0;
}

//sorting the digits in an array
//out put in assending and decending order
