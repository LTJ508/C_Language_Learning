#include <stdio.h>

int main()
{
    int test_case, i;

    long long int a, b, GCD, LCM, divisior, dividend, remainder;

    scanf("%d", &test_case);

    for(i = 0; i < test_case; i++){
        scanf("%lld %lld", &a, &b);

        dividend = (a > b) ? a:b;
        divisior = (a < b) ? a:b;

        remainder = dividend % divisior;

        while(remainder != 0){
            dividend = divisior;
            divisior = remainder;
            remainder = dividend % divisior;
        }

        GCD = divisior;

        LCM = (a * b) / GCD;

        printf("%lld %lld\n", GCD, LCM);
    }

    return 0;
}
