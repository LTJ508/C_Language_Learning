#include <stdio.h>
#include <math.h>

int main()
{
    int x1,x2,y1,y2,a,b;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    a = abs(x1-x2);
    b = abs(y1-y2);

    (a > b) ? printf("%d", a): printf("%d", b);

    return 0;
}
