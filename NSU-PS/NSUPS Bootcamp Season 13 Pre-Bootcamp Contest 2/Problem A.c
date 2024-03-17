#include <stdio.h>

int main()
{
    int test_case, m, x1, x2, b1, b2, i, digit;

    scanf("%d", &test_case);

    for(i = 0; i < test_case; i++){
        scanf("%d", &m);
        x1 = m;
        b1 = 0;
        while(x1 > 0){
            if(x1%2 == 1) b1++;
            x1/=2;
        }
        x2 = m;
        b2 = 0;

        while(x2 > 0){
            digit = x2 % 10;
            while(digit > 0){
                if(digit%2 == 1) b2++;
                digit/=2;
            }
            x2/=10;
        }

        printf("%d %d\n", b1, b2);
    }

    return 0;
}
