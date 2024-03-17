#include <stdio.h>
#include <math.h>

int main()
{
    int i, j = 0, inf_loop, x, quotion, remainder, gotit, root, under_root;
    char symbol = 251;//just importing the symbol for more visibility

    //infinity loop for checking is there any shorten available or not
    for(inf_loop = 1; inf_loop >=0; inf_loop++){

        //getting input from user
        printf("Enter the value of %cx: ", symbol);
        scanf("%d", &x);

        //if you want to exit from this infinity loop then enter the number -1
        if(x == -1){
            printf("Exit Successful.\n\n");
            break;
        }


        //main loop started for shorting
        for(i = 2; j <= (x/2); i++){
            j = pow(i, 2);
            quotion = x / j;
            remainder = x % j;


            //here i just check if its dividable or not and try to set a value like true false
            if(remainder == 0){
                gotit = 1;
                break;
            }
            else{
                gotit = 0;
            }
        }

        //if i get ans 1 its means its true and dividable
        if(gotit == 1){
            root = sqrt((double)j);
            under_root = quotion;

            printf("\n\nThe shorted value is: %d%c%d\n\nWant to check again for %d? If not then enter -1 for Exit the program.\n\n", root, symbol, under_root, under_root);
        }
        //its means its false and not dividable that means there is no shorten value
        else if(gotit == 0){
            printf("\n\nThere is no shorted Value.\n\n");
        }
    }

    return 0;
}
