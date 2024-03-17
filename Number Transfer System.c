#include <stdio.h>
#include <string.h>
#include <math.h>

int d2b(int d)
{
    int i, devided, r, length, sum=0;
    int ara[100000];
    for(i=0; devided != 0; i++){
        devided = d/2;
        r = d%2;
        d = devided;
        ara[i] = r;
    }

    length = i;

    int ara2[length];
    for(i=0; i < length; i++){
        ara2[i] = ara[i];
    }

    for(i = 0; i < length; i++){
        ara2[i] = ara2[i] * pow(10, i);
        sum = sum + ara2[i];
    }

    return sum;

}


int main()
{
    int decimal, binary;

    decimal = 10;
    binary = d2b(decimal);

    printf("Binary Number is: %d\n", binary);

    return 0;
}
