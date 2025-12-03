#include <stdio.h>

int main()
{
    float marks;
    printf("Enter your marks: ");
    scanf("%f", &marks);

    if (marks >= 30) {
        printf("You have passed the exam (0-100)\n");

        if (marks >= 90)
            printf("GRADE A+\n");
        else if (marks >= 80)
            printf("GRADE A\n");
        else if (marks >= 70)
            printf("GRADE B\n");
        else if (marks >= 60)
            printf("GRADE C\n");
        else if (marks >= 50)
            printf("GRADE D\n");
        else if (marks >= 40)
            printf("GRADE E\n");
        else
            printf("GRADE F\n");

        printf("CONGRATULATIONS!! You have been promoted to next class\n");
    } 
    else {
        printf("You have failed the exam\n");

        if (marks <= 20)
            printf("You have to repeat the class\n");
        else
            printf("You have failed and have to appear for the retest\n");
    }

    return 0;
}