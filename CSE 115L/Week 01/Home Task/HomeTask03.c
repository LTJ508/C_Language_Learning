#include <stdio.h>

int main()
{
    int a,b;

    //taking input from user
    printf("Please Enter Value of a: ");
    scanf("%d", &a);
    printf("Please Enter Value of b: ");
    scanf("%d", &b);

    //printing users input data
    printf("\n\nYour Input:\na: %d\nb: %d\n\n", a,b);

    //not swapping just changing the value position
    printf("Not swapping, just changing the value position\na: %d\nb: %d\n\n", b,a);

    //swapping value, for swapping we need one more integer
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping value:\na: %d\nb: %d\n\n", a, b);

    return 0;
}
