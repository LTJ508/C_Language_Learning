#include <stdio.h>

int main()
{
    int n, k, l, c, d, p, nl, np, possibility, final_possibility, drinks, slice;

    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    drinks = k * l;
    slice = c * d;

    possibility = (drinks/nl < p/np) ? (drinks/nl):(p/np);
    possibility = (possibility < slice) ? possibility : slice;

    final_possibility = possibility / n;

    printf("%d", final_possibility);

    return 0;
}
