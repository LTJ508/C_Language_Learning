#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    int blocks_row = 10, blocks_column = 10, steps = 0, fogs = 0, snake_x, snake_y, fogs_x, fogs_y, upper, lower = 1, fogs_limit, steps_limit;
    char command, exit;

    while(1){//if you want to play again then this loop will run the game again

        /*
        printf("Enter Blocks Area (row, column): ");
        scanf("%d %d", &blocks_row, &blocks_column);//scanning blocks area 10x10 is best for perfect output
        */

        int grid[blocks_row][blocks_column];//declaring 2D array using blocks area

        //this loop will border the grid where the snake can go or not. 1 means snake can go there 0 means snake can't go there
        for(int i = 0; i < blocks_row; i++){
                for(int j = 0; j < blocks_column; j++){
                    if(i == 0 || i == blocks_row-1 || j == 0 || j == blocks_column-1){
                        grid[i][j] = 0;
                    }
                    else{
                        grid[i][j] = 1;
                    }
                }
        }

        printf("\nEnter Total Steps Limit: ");
        scanf("%d", &steps_limit);//scanning step limit. as this snake can't run

        printf("\nEnter Total Fogs Limit: ");
        scanf("%d", &fogs_limit);//scanning fogs limit to determine win or loss

        /*
        printf("\nEnter Snake Initial Position(x, y): ");
        scanf("%d %d", &snake_x, &snake_y);//snake initial position. we can make it random or fix it but i prefer you enter it
        */

        //random snake's location started
        upper = blocks_row-2;//upper limit for fogs position
        srand(time(0));//this function will start the random count from 0
        snake_x = (rand() % (upper - lower + 1)) + lower;//this is the main function of random number selection
        upper = blocks_column-2;//upper limit will change according to row or column if we use different dimension grid
        snake_y = (rand() % (upper - lower + 1)) + lower;//random number selection function with range
        //random snake's location end

        grid[snake_x][snake_y] = 5;//snake position will assign by 5. so that we can determine where is the snake position. its also help in debugging

        //random fogs location function start
        upper = blocks_row-2;//upper limit for fogs position
        srand(time(0));//this function will start the random count from 0
        fogs_x = (rand() % (upper - lower + 1)) + lower;//this is the main function of random number selection
        upper = blocks_column-2;//upper limit will change according to row or column if we use different dimension grid
        fogs_y = (rand() % (upper - lower + 1)) + lower;//random number selection function with range

        //this loop will check that if the fogs location and snake location same then it will change the fogs location one more time until it gets different
        while(grid[fogs_x][fogs_y] == 5){
            upper = blocks_row-2;
            srand(time(0));
            fogs_x = (rand() % (upper - lower + 1)) + lower;
            upper = blocks_column-2;
            fogs_y = (rand() % (upper - lower + 1)) + lower;
        }
        //random fogs location function end

        grid[fogs_x][fogs_y] = 8;//fogs position will assign by 8. so that we can determine where is the fogs position. its also help in debugging

        getchar();//its help to remove extra new line from scanf function.

        system("cls");//this function will clear the screen of console.

        //now main game started
        while(1){
            //this loop will draw the board with snake and fog
            for(int i = 0; i < blocks_row; i++){
                for(int j = 0; j < blocks_column; j++){
                    if(i == 0 || i == blocks_row-1){
                        printf("!!!!!");//up and down border
                    }
                    else if((j == 0 && i != 0 && i != blocks_row-1) || (j == blocks_column-1 && i != 0 && i != blocks_row-1)){
                        printf("!");//right and left border
                    }
                    else if((grid[i][j] == 5) || (grid[i][j] == 8)){
                        if(grid[i][j] == 5){
                            printf(" SSS  ");//snake position
                        }
                        if(grid[i][j] == 8){
                            printf("  F   ");//fog position
                        }
                    }
                    else{
                        printf("      ");//other place will be fill by space
                    }
                }
                printf("\n");//for next row print
            }

            printf("\t\t\t\t\t     C.LTJ");//copyright haha
            printf("\n\n\n\t\tSteps Remain: %d\n\t\tFogs Remain: %d\n", steps_limit-steps, fogs_limit-fogs);//it will show the step remain and fogs remain number

            //it will show the command list and how to avoid error from wrong input
            printf("\n\t\tCommand Details:\n\t\tS = Stop\n\t\tU = UP\n\t\tD = Down\n\t\tR = Right\n\t\tL = Left\n\t\tIf you accidentally enter any non-command alphabet. Then enter (Ctrl + z).\n\t\tAnd also make sure your CAPS LOCK is ON..\n\t\tNow Enter Command: ");
            command = getch();

            if(command == 'S'){//command STOP
                break;//End the game
            }
            else if(command == 'U'){//Command UP
                snake_x--;//snake position will be negative so the coordinate will be up
                if(grid[snake_x][snake_y] == 0){//if UP coordinate is assign as 0 then it will reverse the action
                    snake_x++;
                }
            }
            else if(command == 'D'){//Command Down
                snake_x++;//coordinate will be plus so it gets down
                if(grid[snake_x][snake_y] == 0 ){//if DOWN coordinate is assign as 0 then it will reverse the action
                    snake_x--;
                }
            }
            else if(command == 'R'){//Command RIGHT
                snake_y++;//Y coordinate will be plus so points moves to right
                if(grid[snake_x][snake_y] == 0){//if RIGHT coordinate is assign as 0 then it will reverse the action
                    snake_y--;
                }
            }
            else if(command == 'L'){//Command LEFT
                snake_y--;//Y coordinate will be minus so points move to LEFT
                if(grid[snake_x][snake_y] == 0){//if LEFT coordinate is assign as 0 then it will reverse the action
                    snake_y++;
                }
            }

            if(grid[snake_x][snake_y] == 8){//IF snake position is match to fog position//fog position was assigned as 8
                fogs++;//fog count will be plus
                steps++;//step count will be plus

                //this loop will assign the snake's previous position as 1
                for(int i = 0; i < blocks_row; i++){
                    for(int j = 0; j < blocks_column; j++){
                        if(grid[i][j] == 5){
                            grid[i][j] = 1;
                        }
                    }
                }

                grid[snake_x][snake_y] = 5;//this will be the new position of snake's

                //random fogs location function start
                upper = blocks_row-2;
                srand(time(0));
                fogs_x = (rand() % (upper - lower + 1)) + lower;
                upper = blocks_column-2;
                fogs_y = (rand() % (upper - lower + 1)) + lower;

                while(grid[fogs_x][fogs_y] == 5){
                    upper = blocks_row-2;
                    srand(time(0));
                    fogs_x = (rand() % (upper - lower + 1)) + lower;
                    upper = blocks_column-2;
                    fogs_y = (rand() % (upper - lower + 1)) + lower;
                }
                //random fogs location function start

                grid[fogs_x][fogs_y] = 8;//this will be the location of fog's
            }

            else{//if snake's location not match with fog's position
                steps++;//step will be plus

                //this loop will assign the previous snake's location as 1
                for(int i = 0; i < blocks_row; i++){
                    for(int j = 0; j < blocks_column; j++){
                        if(grid[i][j] == 5){
                            grid[i][j] = 1;
                        }
                    }
                }
                grid[snake_x][snake_y] = 5;//this will be the new location of snake's
            }

            system("cls");//console will be clear so that we can print the board again with new location

            if(steps == steps_limit || fogs == fogs_limit){//if step reach the max limit or fogs reach the max target then it will end the game
                break;
            }
        }//main game END

        system("cls");//console will be clear so that we can print the result in clear interface

        if(fogs == 10){//winning message
            printf("\n\t\tCongratulations.\n\t\tYou ate all the fogs within only %d steps..\n\n", steps);
        }
        else{//lose message
            printf("\n\t\tYou lose.\n\t\tYou ate only %d fogs within the steps limit..\n\n", fogs);
        }

        printf("\n\n\t\tDo you want to play again? => ");//if want to play again type any word
        exit = getch();

        if(exit == 'Y'){//N will break the loop and game will be exit
            continue;//END
        }
        else{
            break;
        }
    }

/*
    //for debugging
    printf("\n\n");
    for(int i = 0; i < blocks_row; i++){
        for(int j = 0; j < blocks_column; j++){
            printf("%d, ", grid[i][j]);
        }
        printf("\n");
    }
*/
    return 0;
}
