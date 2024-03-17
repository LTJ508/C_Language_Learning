#include <stdio.h>

int main()
{
    int ara[5] = {3, 1, 5, 2, 4};

    int i, j, minimum, minimum_index, temp;

    for(i = 0; i < 5; i++){
        minimum = 10000;

        for(j = i; j < 5; j++){
            if(ara[j] < minimum){
                minimum = ara[j];
                minimum_index = j;
            }
        }
        temp = ara[i];
        ara[i] = minimum;
        ara[minimum_index] = temp;
    }

    for(i = 0; i < 5; i++){
        printf("%d ", ara[i]);
    }

    printf("\n\n");

    return 0;
}
