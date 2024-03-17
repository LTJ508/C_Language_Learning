#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <strings.h>

int main()
{
    int blocks_row, blocks_column, steps = 0, points = 0, robot_x, robot_y, upper = 8, lower = 1, points_limit, steps_limit;
    int random_character;

    printf("Enter Grid Size(x, y): ");
    scanf("%d %d", &blocks_row, &blocks_column);

    char grid[blocks_row][blocks_column];

    for(int i = 0; i < blocks_row; i++){
        for(int j = 0; j < blocks_column; j++){
            if(i == 0 || i == blocks_row-1 || j == 0 || j == blocks_column-1){
                grid[i][j] = '0';
            }
            else{

                srand(time(0));
                random_character = (rand() % (upper - lower + 1)) + lower;

                /*
                while(random_character != 74 && random_character != 76 && random_character != 84 && random_character != 79 && random_character != 89){
                    srand(time(0));
                    random_character = (rand() % (upper - lower + 1)) + lower;
                }
                */

                grid[i][j] = random_character;
                printf("%d\n", random_character);
            }
        }
    }







    printf("\n\n\n");
    for(int i = 0; i < blocks_row; i++){
        for(int j = 0; j < blocks_column; j++){
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }

}
