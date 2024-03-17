#include <stdio.h>

int main()
{
    int i, j, x, y, n, g;
    char c;

    printf("Please Enter the grid size: ");
    scanf("%d", &g);

    int grid[g][g];

    for(i = 0; i < g; i++){
        for(j = 0; j < g; j++){
            grid[i][j] = 1;
        }
    }

    printf("\nPlease enter the number of blocked cells: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("\nNow Enter the %d blocks(x,y): ", i+1);
        scanf("%d %d", &x, &y);
        grid[x][y] = 0;
    }

    printf("\nPlease enter the initial position: ");
    scanf("%d %d", &x, &y);

    printf("\nNow enter comand(S, U, D, R, L):\n");

    while(1){
        scanf("%c", &c);

        if(c == 'S'){
            break;
        }
        else if(c == 'U'){
            x--;
            if(grid[x][y] == 0 || x >= g || x < 0){
                x++;
            }
            printf("Current Position = (%d, %d)\n", x, y);
        }
        else if(c == 'D'){
            x++;
            if(grid[x][y] == 0 || x >= g || x < 0){
                x--;
            }
            printf("Current Position = (%d, %d)\n", x, y);
        }
        else if(c == 'R'){
            y++;
            if(grid[x][y] == 0 || y >= g || y < 0){
                y--;
            }
            printf("Current Position = (%d, %d)\n", x, y);
        }
        else if(c == 'L'){
            y--;
            if(grid[x][y] == 0 || y >= g || y < 0){
                y++;
            }
            printf("Current Position = (%d, %d)\n", x, y);
        }
    }

    printf("\nFinal position of the robot is: (%d, %d)\n", x, y);

    return 0;
}

