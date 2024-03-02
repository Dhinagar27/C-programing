// school result management

#include <stdio.h>
void main()
{
    int m1, m2, m3, m4, m5;
    printf("Enter the Five marks :");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    int total_marks = m1 + m2 + m3 + m4 + m5;
    int avg_marks = (m1 + m2 + m3 + m4 + m5) / 5;

    printf("\nTotal marks : %d", total_marks);
    printf("\nAverage mark: %d", avg_marks);

    if (m1 >= 35 && m2 >= 35 && m3 >= 35 && m4 >= 35 && m5 >= 35)
    {
        printf("\nResult : Pass");
        if (avg_marks >= 90 && avg_marks <= 100)
        {
            printf("\nGrade : A Grade");
        }
        else if (avg_marks >= 80 && avg_marks <= 89)
        {
            printf("\nGrade : B Grade");
        }
        else if (avg_marks >= 70 && avg_marks <= 79)
        {
            printf("\nGrade : C Grade");
        }
        else if (avg_marks > 70)
        {
            printf("\nGrade : D Grade");
        }
    }
    else
    {
        printf("\nResult : Fail");
        printf("\nGrade  : NO Grade");
    }
}