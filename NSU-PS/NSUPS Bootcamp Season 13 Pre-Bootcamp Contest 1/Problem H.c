#include <stdio.h>

int main()
{
    int test_case, a, b, sum, i;

    scanf("%d", &test_case);

    for(i = 0; i < test_case; i++){
        scanf("%d %d", &a, &b);

        sum = a + b;

        printf("%d\n", sum);
    }

    return 0;
}
