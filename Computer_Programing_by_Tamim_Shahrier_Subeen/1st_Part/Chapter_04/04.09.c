#include <stdio.h>

int main()
{
    int m = 0, n, i;

    printf("Please enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++){
        m = m + n;
        printf("%d x %d = %d\n", n, i, m);
    }

    return 0;
}
