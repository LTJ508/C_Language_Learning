#include <stdio.h>

int main()
{
    int test_case, a, b, c, i;

    scanf("%d", &test_case);

    for(i = 0; i < test_case; i++){
        scanf("%d %d %d", &a, &b, &c);

        if((a+b+c) == 180) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
