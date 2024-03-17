#include <stdio.h>

int main()
{
    int marks[4][10];
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 10; j++)
        {
            printf("Semester: %d\tRoll: %d\tMarks: ", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }

        printf("\n");
    }


    printf("\n\n");


    for(j = 0; j < 10; j++)
    {
        marks[3][j] = marks[0][j] / 4.0 + marks[1][j] / 4.0 + marks[2][j] / 2.0;
        printf("Roll No: %d\tTotal Marks: %d\n", j+1, marks[3][j]);
    }

    return 0;
}

