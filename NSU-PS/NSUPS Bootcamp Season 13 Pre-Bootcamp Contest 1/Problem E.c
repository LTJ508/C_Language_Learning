#include <stdio.h>

int main()
{
    int test_case, a, b, i;

    scanf("%d", &test_case);

    for(i = 0; i < test_case; i++){
        scanf("%d %d", &a, &b);

        if(a > b) printf(">\n");
        else if(a < b) printf("<\n");
        else printf("=\n");
    }

    return 0;
}
