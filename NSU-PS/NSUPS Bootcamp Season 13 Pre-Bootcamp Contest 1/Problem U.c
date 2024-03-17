#include <stdio.h>

int main()
{
    int number, reverse_number, test_case, i;

    scanf("%d", &test_case);

    for(i = 0; i < test_case; i++){
        scanf("%d", &number);
        reverse_number = 0;
        while(number > 0){
            reverse_number = reverse_number * 10 + (number%10);
            number/=10;
        }

        printf("%d\n", reverse_number);
    }

    return 0;
}
