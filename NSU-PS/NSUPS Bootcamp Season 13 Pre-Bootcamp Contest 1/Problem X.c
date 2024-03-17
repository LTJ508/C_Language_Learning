#include <stdio.h>

int main()
{
    int test_case, i, last_digit;
    long long int number;

    scanf("%d", &test_case);

    for(i = 0; i < test_case; i++){
        scanf("%lld", &number);
        last_digit = number % 10;
        while(number > 9){
            number/=10;
        }
        printf("%d\n", number+last_digit);
    }

    return 0;
}
