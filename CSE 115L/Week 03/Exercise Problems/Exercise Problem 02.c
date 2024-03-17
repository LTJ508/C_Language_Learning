#include <stdio.h>
#include <math.h>

int main()
{
    int m, n, m_left, m_right, result1, result2;

    printf("Enter the value of m: ");
    scanf("%d", &m);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    m_left = m<<n;
    m_right = m>>n;

    result1 = m_left * pow(2,n);
    result2 = m_right / (pow(2,n));

    printf("\nValue of m*2^n is: %d\nValue of m/2^n is: %d\n", result1, result2);

    return 0;
}
