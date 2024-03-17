#include<stdio.h>

int main()
{
    int a, b, t, gcd, x, lcd;

    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    x = a * b;

    if(a == 0){
        gcd = a;
    }
    else if(b == 0){
        gcd = b;
    }
    else{
        while(b != 0){
            t = b;
            b = a % b;
            a = t;
        }
        gcd = a;
    }

    lcd = x / gcd;

    printf("GCD is: %d\nLCD is: %d\n", gcd, lcd);

    return 0;
}
