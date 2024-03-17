#include <stdio.h>

int main()
{
    int n, count, i;

    scanf("%d", &n);
    count = 0;

    while(n){
        if(n & 1) count++;
        n = n >> 1;
    }

    printf("number of 1: %d\n", count);

    return 0;
}





























/*
#include <stdio.h>

int main()
{
    int number, i, count = 0;
    int bits[32];

    printf("Enter a number: ");
    scanf("%d", &number);

    for(i = 31; i >= 0; i--){
        bits[i] = number%2;
        number /= 2;
    }

    for(i = 0; i < 32; i++){
        if(bits[i] == 1){
            count++;
        }
    }


    printf("\nIn this number 1 bit have: %d\n", count);

    return 0;
}
*/
