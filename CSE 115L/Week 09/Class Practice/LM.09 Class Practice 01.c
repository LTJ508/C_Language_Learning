#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n");

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            printf("* ");
        }

        printf("\n");
    }
    printf("\n");

    return 0;
}