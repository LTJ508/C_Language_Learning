#include <stdio.h>

int main()
{
    int n;

    printf("Please enter a number n: ");
    scanf("%d", &n);

    printf("\nBitwise AND of n and 1 is: %d\n", n&1);

    return 0;
}
