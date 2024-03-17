#include<stdio.h>

int main()
{
    int low, high, mid, i;
    char stmnt;

    //taking number range
    printf("Enter the Low Number of the Range: ");
    scanf("%d", &low);

    //taking number range
    printf("Enter the High Number of the Range: ");
    scanf("%d", &high);
    getchar(); //erasing new line

    printf("\nNow give your statement like this.\nFor Yes: Y\nFor No: N\n\n");

    //always true loop never end
    while(1){
        mid = (low + high) / 2;
        printf("Is the number is equals to %d: ", mid);
        stmnt = getchar();
        getchar(); //Erasing New line
        printf("\n");

        //input Validity check
        while(stmnt != 'Y' && stmnt != 'y' && stmnt != 'N' && stmnt != 'n'){
            printf("Error!! Please enter correct statement Y/N: ");
            stmnt = getchar();
            getchar(); //Erasing new line
        }
        if(stmnt == 'Y' || stmnt == 'y'){
            printf("\nThe number is: %d\n", mid);
            break;//this command will break the loop and get out of it
        }
        else{
            printf("Is the number is Greater than  %d: ", mid);
            stmnt = getchar();
            getchar(); //Erasing new line
            printf("\n");

            //input validity check
            while(stmnt != 'Y' && stmnt != 'y' && stmnt != 'N' && stmnt != 'n'){
                printf("Error!! Please enter correct statement Y/N: ");
                stmnt = getchar();
                getchar(); //erasing new line
            }
            if(stmnt == 'Y' || stmnt == 'y'){
                low = mid + 1;
                continue;//this command will skip the rest part of the loop and start from the beginning of the loop
            }
            else{
                printf("Is the number is Less than %d: ", mid);
                stmnt = getchar();
                getchar(); //erasing new line
                printf("\n");

                //input validity check
                while(stmnt != 'Y' && stmnt != 'y' && stmnt != 'N' && stmnt != 'n'){
                    printf("Error!! Please enter correct statement Y/N: ");
                    stmnt = getchar();
                    getchar(); //erasing new line
                }
                if(stmnt == 'Y' || stmnt == 'y'){
                    high = mid - 1;
                    continue;//this command will skip the rest part of the loop and start from the beginning of the loop
                }
                else{
                    printf("\nThen we can't get your Number. Because you take a Number, that out of our Range!!");
                    break;//this command will break the loop and get out of it
                }
            }
        }
    }

    return 0;
}
