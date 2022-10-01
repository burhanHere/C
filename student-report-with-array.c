#include <stdio.h>
#include <conio.h>
int main()
{
    int b[100];
    char name[100];
    int rollno;
    printf("Enter the name of the student.\n");
    scanf("%s", &name);
    printf("\nEnter the roll no of %s.", name);
    scanf("%d", &rollno);
    printf("\nEnter the marks of the subjects below.");
    printf("\nEnglish\n");
    scanf("%d", &b[0]);
    printf("\nUrdu\n");
    scanf("%d", &b[1]);
    printf("\nMaths\n");
    scanf("%d", &b[2]);
    printf("\nPhysics\n");
    scanf("%d", &b[3]);
    printf("\nComputer\n");
    scanf("%d", &b[4]);
    printf("\nIslamiyat\n");
    scanf("%d", &b[5]);
    printf("Processing data....");
    printf("\nName of the student:- %s", name);
    printf("\nRoll no:- %d", rollno);
    printf("\nMarks of %s are as following:-", name);
    printf("\nEnglish");
    printf("\t\t%d", b[0]);
    printf("\nUrdu");
    printf("\t\t%d", b[1]);
    printf("\nMaths");
    printf("\t\t%d", b[2]);
    printf("\nPhysics");
    printf("\t\t%d", b[3]);
    printf("\nComputer");
    printf("\t\t%d", b[4]);
    printf("\nIslamiyat");
    printf("\t\t%d", b[5]);
    return 0;
}
