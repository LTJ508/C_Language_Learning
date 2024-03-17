#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, max;
    double k;

    scanf("%d %d", &a, &b);

    max = (a > b) ? a:b;

    k = abs(a-b);

    k = k / 2.0;

    if((int)k == k){
        printf("%d", max-(int)k);
    }
    else{
        printf("IMPOSSIBLE");
    }

    return 0;
}
