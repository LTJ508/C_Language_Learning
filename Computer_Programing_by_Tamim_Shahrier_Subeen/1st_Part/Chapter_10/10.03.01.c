#include <stdio.h>
#include <math.h>

int main()
{
    int ara[1000];
    int ara2[1000];
    int size;
    int count, count2;
    int i, j;

    int high = 40;
    size = high - 1;

    for(i = 0; i < size; i++){
        ara[i] = i+2;
    }

    printf("\n");

    for(i = 0; i < size; i++){
        printf("%d ", ara[i]);
    }

    printf("\n\n");

    for(i = 0, j = 1, count = 0; i < size; i++){
        ara2[0] = 2;
        if(ara[i] > 2 && ara[i]%2 != 0){
            ara2[j] = ara[i];
            j++;
            count++;
        }
    }

    for(j = 0; j <= count; j++){
        printf("%d ", ara2[j]);
    }

    printf("\n\n");

    for(j = 0, i = 2, count2 = 0; j <= count; j++){
        ara[0] = 2;
        ara[1] = 3;

        if(ara2[j] > 3 && ara[j]%3 != 0){
            ara[i] = ara2[j];
            i++;
            count2++;
        }
    }

    for(i = 0; i <= count2+1; i++){
        printf("%d ", ara[i]);
    }

    printf("\n\n");

     for(i = 0, j = 3, count = 0; i <=count2+1; i++){
        ara2[0] = 2;
        ara2[1] = 3;
        ara2[2] = 5;
        if(ara[i] > 5 && ara[i]%5 != 0){
            ara2[j] = ara[i];
            j++;
            count++;
        }
    }

    for(j = 0; j <= count+2; j++){
        printf("%d ", ara2[j]);
    }

    printf("\n\n");

    int number, is_prime;

    while(1){

        printf("Enter a number: ");
        scanf("%d", &number);

        if(number == 0){
            break;
        }

        for(j = 0, is_prime = 0; j <= count+2; j++){
            if(ara2[j] == number){
                is_prime = 1;
            }
        }

        if(is_prime == 1){
            printf("%d is a prime number.\n", number);
        }
        else{
            printf("%d is not a prime number.\n", number);
        }
    }

    return 0;
}
