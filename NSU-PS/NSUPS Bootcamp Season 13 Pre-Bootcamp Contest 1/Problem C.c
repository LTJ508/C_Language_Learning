#include <stdio.h>

int main()
{
    int test_case, i, a, b, c;

    scanf("%d", &test_case);

    for(i = 0; i < test_case; i++){
        scanf("%d %d %d", &a, &b, &c);

        if(b > a && a > c) printf("%d\n", a);
        else if(c > a && a > b) printf("%d\n", a);
        else if(a > b && b > c) printf("%d\n", b);
        else if(c > b && b > a) printf("%d\n", b);
        else if(a > c && c > b) printf("%d\n", c);
        else printf("%d\n", c);
    }

    return 0;
}
