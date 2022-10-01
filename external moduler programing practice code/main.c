#include <stdio.h>
#include "sum.c"
int main()
{
 int z, p, l;
 printf("Hello World!\n");
 printf("Enter first value.\n");
 scanf("%d", &z);
 printf("Enter second value.\n");
 scanf("%d", &p);
 l = sum(z, p);
 printf("the sum of the given numbers is:\n%d", l);
 return (0);
}