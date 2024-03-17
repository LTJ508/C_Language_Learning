#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n\n");

    for(i = 1; i <= n; i++){
        for(j = i; j <= n; j++){
            printf("*");
        }
        printf("\n");
    }

    for(i = 2; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n\n");

    for(i = 1; i <= n; i+=2){
        for(j = 1; j <= i/2; j++){
            printf(" ");
        }
        for(j = i; j <= n; j++){
            printf("*");
        }
        printf("\n");
    }

    for(i = 3; i <= n; i+=2){
        for(j = 1; j <= n-i; j+=2){
            printf(" ");
        }

        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n\n");



    for(i = 1; i <= n; i++){
        for(j = 1; j < i; j++){
            printf(" ");
        }
        for(j = i; j <= n; j++){
            printf("*");
        }
        printf("\n");
    }

    for(i = 2; i <= n; i++){
        for(j = i; j < n; j++){
            printf(" ");
        }
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n\n");

    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("*");
        }
        for(j = 1; j <= 2*n - 2*i; j++){
            printf(" ");
        }
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}
