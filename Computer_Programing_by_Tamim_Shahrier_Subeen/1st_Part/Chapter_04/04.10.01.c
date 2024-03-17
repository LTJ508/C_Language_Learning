#include <stdio.h>

int main()
{
    int m, n, i;

    for(n =1; n <= 20; n++){
        m = 0;
        for(i=1; i <= 10; i++){
            m = m + n;
            printf("%d x %d = %d\n", n, i, m);
        }
    printf("\n");
    }

    return 0;
}
