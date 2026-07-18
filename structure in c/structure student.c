#include <stdio.h>

struct Student
{
    int rollno;
    char name[50];
    int marks;
};

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].rollno);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    // Output
    printf("\n----- Student Details -----\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No : %d\n", s[i].rollno);
        printf("Name    : %s\n", s[i].name);
        printf("Marks   : %d\n", s[i].marks);
    }
}