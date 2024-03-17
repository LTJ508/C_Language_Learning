#include <stdio.h>

int main()
{
    int number = 410, devided, remainder;

    devided = number/2;

    remainder = (number-(devided * 2));

    if(remainder == 0){
        printf("The number is even.\n");
    }
    else{
    printf("The number is odd.\n");
    }
    return 0;
}
