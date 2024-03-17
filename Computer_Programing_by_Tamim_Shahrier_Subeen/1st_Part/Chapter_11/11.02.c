#include <stdio.h>

int main()
{
    int ara[10][10];
    int i, j, even = 0, odd = 0, sum = 0;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            ara[i][j] = (i + 1) * (j + 1);
        }
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%d x %d = %d\n", i+1, j+1, ara[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(ara[i][j] % 2 == 0){
                even++;
            }
            else{
                odd++;
            }

            sum = sum + ara[i][j];
        }
    }

    printf("Even Count: %d\nOdd Count: %d\nSum: %d\n", even, odd, sum);

    return 0;
}
