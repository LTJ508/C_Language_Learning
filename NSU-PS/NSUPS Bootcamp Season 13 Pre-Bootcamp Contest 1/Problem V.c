#include <stdio.h>

int main()
{
    int test_case, i, j;
    long long int number, fact;

    scanf("%d", &test_case);

    for(i = 0; i < test_case; i++){
        scanf("%lld", &number);
        for(j = 1, fact = 1; j <= number; j++){
            fact *= j;
        }
        printf("%lld\n", fact);
    }

    return 0;
}
