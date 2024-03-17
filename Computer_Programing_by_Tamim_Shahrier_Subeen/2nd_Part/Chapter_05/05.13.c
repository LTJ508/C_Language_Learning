#include <stdio.h>

int main()
{
    int ara[] = {1, 3, 4, 2, 7, 5, 9, 6};
    int n = 9, i, missing = 0;

    for(i = 1; i <= n; i++){
        missing = missing ^ i;
    }

    for(i = 0; i < n-1; i++){
        missing = missing ^ ara[i];
    }

    printf("Missing number: %d\n", missing);

    return 0;
}
