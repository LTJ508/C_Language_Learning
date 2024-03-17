#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grid[10][10];
    int i, j, k;
    char command;

    int selection_x = 1;
    int selection_y = 2;

    int R11_x = 1;
    int R11_y = 1;
    int R12_x = 8;
    int R12_y = 1;

    int R21_x = 1;
    int R21_y = 8;
    int R22_x = 8;
    int R22_y = 8;

    int N11_x = 2;
    int N11_y = 1;
    int N12_x = 7;
    int N12_y = 1;

    int N21_x = 2;
    int N21_y = 8;
    int N22_x = 7;
    int N22_y = 8;

    int B11_x = 3;
    int B11_y = 1;
    int B12_x = 6;
    int B12_y = 1;

    int B21_x = 3;
    int B21_y = 8;
    int B22_x = 6;
    int B22_y = 8;

    int K1_x = 4;
    int K1_y = 1;
    int Q1_x = 5;
    int Q1_y = 1;

    int K2_x = 5;
    int K2_y = 8;
    int Q2_x = 4;
    int Q2_y = 8;

    int P11_x = 1;
    int P11_y = 2;
    int P12_x = 2;
    int P12_y = 2;
    int P13_x = 3;
    int P13_y = 2;
    int P14_x = 4;
    int P14_y = 2;
    int P15_x = 5;
    int P15_y = 2;
    int P16_x = 6;
    int P16_y = 2;
    int P17_x = 7;
    int P17_y = 2;
    int P18_x = 8;
    int P18_y = 2;

    int P21_x = 1;
    int P21_y = 7;
    int P22_x = 2;
    int P22_y = 7;
    int P23_x = 3;
    int P23_y = 7;
    int P24_x = 4;
    int P24_y = 7;
    int P25_x = 5;
    int P25_y = 7;
    int P26_x = 6;
    int P26_y = 7;
    int P27_x = 7;
    int P27_y = 7;
    int P28_x = 8;
    int P28_y = 7;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(i == 0 || i == 9 || j == 0 || j == 9){
                grid[i][j] = 0;
            }
            else{
                grid[i][j] = 1;
            }
        }
    }

    grid[R11_x][R11_y] = 11;
    grid[R12_x][R12_y] = 12;

    grid[N11_x][N11_y] = 13;
    grid[N12_x][N12_y] = 14;

    grid[B11_x][B11_y] = 15;
    grid[B12_x][B12_y] = 16;

    grid[K1_x][K1_y] = 50;
    grid[Q1_x][Q1_y] = 80;

    grid[R21_x][R21_y] = 17;
    grid[R22_x][R22_y] = 18;

    grid[N21_x][N21_y] = 19;
    grid[N22_x][N22_y] = 20;

    grid[B21_x][B21_y] = 21;
    grid[B22_x][B22_y] = 22;

    grid[K2_x][K2_y] = 55;
    grid[Q2_x][Q2_y] = 88;

    grid[P11_x][P11_y] = 31;
    grid[P12_x][P12_y] = 32;
    grid[P13_x][P13_y] = 33;
    grid[P14_x][P14_y] = 34;
    grid[P15_x][P15_y] = 35;
    grid[P16_x][P16_y] = 36;
    grid[P17_x][P17_y] = 37;
    grid[P18_x][P18_y] = 38;

    grid[P21_x][P21_y] = 41;
    grid[P22_x][P22_y] = 42;
    grid[P23_x][P23_y] = 43;
    grid[P24_x][P24_y] = 44;
    grid[P25_x][P25_y] = 45;
    grid[P26_x][P26_y] = 46;
    grid[P27_x][P27_y] = 47;
    grid[P28_x][P28_y] = 48;

    while(1){
        for(i = 0; i < 10; i++){
            for(j = 0; j < 10; j++){
                if(grid[i][j] == 1 && (i != selection_x || j != selection_y)){
                    printf(" |||_ ");
                }
                else if(grid[i][j] != 0 && (i != selection_x || j != selection_y)){
                    switch(grid[i][j])
                    {
                    case 11: printf("R11_ "); break;
                    case 12: printf("R12_ "); break;
                    case 13: printf("N11_ "); break;
                    case 14: printf("N12_ "); break;
                    case 15: printf("B11_ "); break;
                    case 16: printf("B12_ "); break;
                    case 17: printf("R21_ "); break;
                    case 18: printf("R22_ "); break;
                    case 19: printf("N21_ "); break;
                    case 20: printf("N22_ "); break;
                    case 21: printf("B21_ "); break;
                    case 22: printf("B22_ "); break;
                    case 50: printf("K1_  "); break;
                    case 80: printf("Q1_  "); break;
                    case 55: printf("K2_  "); break;
                    case 88: printf("Q2_  "); break;
                    case 31: printf("P11_ "); break;
                    case 32: printf("P12_ "); break;
                    case 33: printf("P13_ "); break;
                    case 34: printf("P14_ "); break;
                    case 35: printf("P15_ "); break;
                    case 36: printf("P16_ "); break;
                    case 37: printf("P17_ "); break;
                    case 38: printf("P18_ "); break;
                    case 41: printf("P21_ "); break;
                    case 42: printf("P22_ "); break;
                    case 43: printf("P23_ "); break;
                    case 44: printf("P24_ "); break;
                    case 45: printf("P25_ "); break;
                    case 46: printf("P26_ "); break;
                    case 47: printf("P27_ "); break;
                    case 48: printf("P28_ "); break;
                    }
                }

                else if(grid[i][j] != 0 && i == selection_x && j == selection_y){
                    switch(grid[i][j])
                    {
                    case 1: printf("|||_S "); break;
                    case 11: printf("R11_S "); break;
                    case 12: printf("R12_S "); break;
                    case 13: printf("N11_S "); break;
                    case 14: printf("N12_S "); break;
                    case 15: printf("B11_S "); break;
                    case 16: printf("B12_S "); break;
                    case 17: printf("R21_S "); break;
                    case 18: printf("R22_S "); break;
                    case 19: printf("N21_S "); break;
                    case 20: printf("N22_S "); break;
                    case 21: printf("B21_S "); break;
                    case 22: printf("B22_S "); break;
                    case 50: printf("K1_S "); break;
                    case 80: printf("Q1_S "); break;
                    case 55: printf("K2_S "); break;
                    case 88: printf("Q2_S "); break;
                    case 31: printf("P11_S "); break;
                    case 32: printf("P12_S "); break;
                    case 33: printf("P13_S "); break;
                    case 34: printf("P14_S "); break;
                    case 35: printf("P15_S "); break;
                    case 36: printf("P16_S "); break;
                    case 37: printf("P17_S "); break;
                    case 38: printf("P18_S "); break;
                    case 41: printf("P21_S "); break;
                    case 42: printf("P22_S "); break;
                    case 43: printf("P23_S "); break;
                    case 44: printf("P24_S "); break;
                    case 45: printf("P25_S "); break;
                    case 46: printf("P26_S "); break;
                    case 47: printf("P27_S "); break;
                    case 48: printf("P28_S "); break;
                    }
                }
            }
            printf("\n\n");
        }

        printf("\nNow Enter Command: ");
        scanf("%c", &command);
        getchar();

        if(command == 'U'){
            selection_x--;
            if(grid[selection_x][selection_y] == 0){
                selection_x++;
            }
            system("cls");
            continue;
        }
        else if(command == 'D'){
            selection_x++;
            if(grid[selection_x][selection_y] == 0){
                selection_x--;
            }
            system("cls");
            continue;
        }
        else if(command == 'R'){
            selection_y++;
            if(grid[selection_x][selection_y] == 0){
                selection_y--;
            }
            system("cls");
            continue;
        }
        else if(command == 'L'){
            selection_y--;
            if(grid[selection_x][selection_y] == 0){
                selection_y++;
            }
            system("cls");
            continue;
        }

        else if(command == 'S'){

            //check where it is
            //call function for new available seat

            //while(1){
                //print board
                //command
                //if c break
                //if s check availibilty and swap position and break
                //during swaping check if it ate another one then count it and remove this point out of board
            //}
            system("cls");
            continue;
        }


    }




    //debugging

    printf("\n\nDebbuging\n\n");

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%2d   ", grid[i][j]);
        }
        printf("\n\n");
    }

    printf("\n\n");

    return 0;


}




//function it will check all 1 value if its possible to move there or not if not then assign it 0 there will be 6 function as there are 6 point
//in function i need to check how many point can be ate and i need keep their value as previous
