#include <stdio.h>

int main()
{
    int test_case, count, possibilty;

    long long int number;

    scanf("%d", &test_case);

    for(int i = 0; i < test_case; i++){
        scanf("%lld", &number);

        count = 0;
        possibilty = 1;
        while(number != 1){
            if(number%2 == 0){
                number = number / 2;
                count++;
            }
            else if(number%3 == 0){
                number = (number * 2) / 3;
                count++;
            }
            else if(number%5 == 0){
                number = (number * 4) / 5;
                count++;
            }
            else{
                possibilty = 0;
                break;
            }
        }
        if(possibilty == 1 && number == 1){
            printf("%d\n", count);
        }
        else{
            printf("-1\n");
        }
    }

    return 0;
}
