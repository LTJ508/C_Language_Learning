#include <stdio.h>

int main()
{
    int ara[5][5] =
    {
        {6, 4, 7, 8, 9},
        {3, 7, 1, 9, 9},
        {8, 6, 4, 2, 7},
        {2, 4, 2, 5, 9},
        {4, 1, 6, 7, 3}
    };

    int row, col, sum_row, sum_col;

    for(row = 0; row < 5; row++){
        for(col = 0, sum_row = 0; col < 5; col++){
            sum_row = sum_row + ara[row][col];
        }

        printf("Sum of row %d: %d\n", row+1, sum_row);
    }

    printf("\n\n");

    for(col = 0; col < 5; col++){
        for(row = 0, sum_col = 0; row < 5; row++){
            sum_col = sum_col + ara[row][col];
        }

        printf("Sum of column %d: %d\n", col+1, sum_col);
    }

    return 0;
}
