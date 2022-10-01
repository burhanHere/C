#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
        printf("\n___________________________________________________________________");
        printf("\nWelcome to Buehan's Calculater");
        printf("\nPlease follow the instructions below for further process");
        printf("\n___________________________________________________________________");
        //switch
        int s;
        //sum
        float sum, a, b;
        //subtrection
        float subtrection, c, d;

        // multiplication
        float multiplication, e, f;
        // devision
        float devision, g, h;

        //square
        float square, i;
        // cube
        float cube, j;
        //Square root
        float sqr, k;
        // Cube root
        float cr, l;
        //factoral
        int num, m, n = 1;
        for (;;)
        {
        start:
                printf("\nEnter 0 for exit.");
                printf("\nEnter 1 for Sum.");
                printf("\nEntet 2 for Subtrection.");
                printf("\nEntet 3 for Multiplication.");
                printf("\nEntet 4 for Devision.");
                printf("\nEnter 5 for Square.");
                printf("\nEnter 6 for cube.");
                printf("\nEnter 7 for Square Root.");
                printf("\nEnter 8 for Cube Root.");
                printf("\nEnter 9 for factoral.");
                scanf("%d", &s);
                printf("\n___________________________________________________________________");
                switch (s)
                {
                case 0:
                        goto end;
                case 1:
                        printf("\nEnter first number=");
                        scanf("%f", &a);
                        printf("\nEnter second number=");
                        scanf("%f", &b);
                        sum = a + b;
                        printf("\nSum=%f", sum);
                        break;
                case 2:
                        printf("\nEnter first number=");
                        scanf("%f", &c);
                        printf("\nEnter second number=");
                        scanf("%f", &d);
                        subtrection = c - d;
                        printf("\nSubtrection=%f", subtrection);
                        break;
                case 3:
                        printf("\nEnter first number=");
                        scanf("%f", &e);
                        printf("\nEnter second number=");
                        scanf("%f", &f);
                        multiplication = e * f;
                        printf("\nMultiplication=%f", multiplication);
                        break;
                case 4:
                        printf("\nEnter first number=");
                        scanf("%f", &g);
                        printf("\nEnter second number=");
                        scanf("%f", &h);
                        devision = g / h;
                        printf("\nDevison=%f", devision);
                        break;
                case 5:
                        printf("\nEnter a number=");
                        scanf("%f", &i);
                        square = i * i;
                        printf("\nSquare=%f", square);
                        printf("To perform more calculation press an'y' ke'y'.");
                        break;
                case 6:
                        printf("\nEnter a number=");
                        scanf("%f", &j);
                        cube = j * j * j;
                        printf("\nCube=%f", cube);
                        break;
                case 7:
                        printf("\nEnter a number=");
                        scanf("%f", &k);
                        sqr = sqrt(k);
                        printf("\nSquare Root=%f", sqr);
                        break;
                case 8:
                        printf("\nEnter a number=");
                        scanf("%f", &l);
                        cr = cbrt(l);
                        printf("Cube Root=%f", cr);
                        break;
                case 9:
                        printf("\nEnter the number=");
                        scanf("%d", &num);
                        for (m = 1; m <= num; m++)
                        {
                                n = n * m;
                        }
                        printf("factoral of %d = %d", num, n);
                        break;
                default:
                        break;
                }
                printf("\n___________________________________________________________________");
        }
end:
        return 0;
}
