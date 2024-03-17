#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Please enter a number: ");
    scanf("%d", &n);

    for(;;){
        if (i > 10){
            break;
        }
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }

    return 0;
}
