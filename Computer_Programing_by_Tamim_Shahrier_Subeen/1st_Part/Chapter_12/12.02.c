#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int decimal;

    printf("Enter Decimal Number: ");
    scanf("%d", &decimal);

    int bit[100];
    int i, len, power, num = 0, temp = 1;

    for(i = 0; temp <= decimal; i++){
        bit[i] = temp;
        temp = temp * 2;
    }

    len = i-1;
    power = len;

    int binary[len];

    printf("\nBit\n");

    for(i = len; i >= 0; i--){
        printf("%d ", bit[i]);
    }
    printf("\n\nMax Power and Length = %d\n\nBinary Number: ", power);

    for(i = 0; i <= len; i++){
        num = num + pow(2, power);
        if(num <= decimal){
            binary[i] = 1;
        }
        else{
            binary[i] = 0;
            num = num - pow(2, power);
        }
        power--;
    }

    for(i = 0; i <= len; i++){
        printf("%d", binary[i]);
    }

    printf("\n");

    return 0;
}
