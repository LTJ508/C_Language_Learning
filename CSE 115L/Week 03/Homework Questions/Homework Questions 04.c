#include <stdio.h>

int main()
{
    int amount, five_hundread, one_hundread, fivety, twenty, ten, five, two, one, remainder;

    printf("Enter the amount in Taka: ");
    scanf("%d", &amount);

    five_hundread = amount / 500;
    remainder = amount % 500;

    one_hundread = remainder / 100;
    remainder = remainder % 100;

    fivety = remainder / 50;
    remainder = remainder % 50;

    twenty = remainder / 20;
    remainder = remainder % 20;

    ten = remainder / 10;
    remainder = remainder % 10;

    five = remainder / 5;
    remainder = remainder % 5;

    two = remainder / 2;
    remainder = remainder % 2;

    one = remainder / 1;


    printf("\n\nTotal number of notes\n500: %d\n100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d\n", five_hundread, one_hundread, fivety, twenty, ten, five, two, one);

    return 0;
}
