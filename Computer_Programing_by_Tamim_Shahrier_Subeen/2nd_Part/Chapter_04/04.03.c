#include <stdio.h>

int a;
static int b;

void func()
{
    a = a + 1;
    b = b + 1;
}

int main()
{
    func();

    printf("a = %d\nb = %d\n", a, b);

    return 0;
}
