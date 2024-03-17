#include <stdio.h>

int main()
{
    long long int number;

    int lucky_digit = 0;

    scanf("%lld", &number);

    while(number > 0){
        if(number%10 == 7 || number%10 == 4){
            lucky_digit++;
        }
        number/=10;
    }
    if(lucky_digit == 4 || lucky_digit == 7) printf("YES");
    else printf("NO");

    return 0;
}
