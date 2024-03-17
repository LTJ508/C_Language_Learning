#include <stdio.h>

int main()
{
    int test_case, i, num, sum;
    scanf("%d", &test_case);

    for(i = 0; i < test_case; i++){
        scanf("%d", &num);
        sum = 0;

        while(num > 0){
            sum += num%10;
            num/=10;
        }
        printf("%d\n", sum);
    }

    return 0;
}
