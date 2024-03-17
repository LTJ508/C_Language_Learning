#include <stdio.h>
#include <string.h>
#include <math.h>

void D2B(int decimal, int len, int binary[]);

int main()
{
    int decimal;

    printf("Enter Decimal Number: ");
    scanf("%d", &decimal);

    int bit[100];
    int i, len, temp = 1;

    for(i = 0; temp <= decimal; i++){
        bit[i] = temp;
        temp = temp * 2;
    }

    len = i-1;

    int binary[len];

    printf("\n\nLength = %d\n\nBinary Number: ", len+1);

    D2B(decimal, len, binary);

    for(i = 0; i <= len; i++){
        printf("%d", binary[i]);
    }

    printf("\n");

    return 0;
}

void D2B(int decimal, int len, int binary[])
{
    int i;
    for(i = len; i >= 0; i--){
        binary[i] = decimal % 2;
        decimal = decimal / 2;
    }
}
