#include <stdio.h>

int main()
{
    int size, sum = 0, i;

    scanf("%d", &size);

    int number[size];

    for(i = 0; i < size; i++){
        scanf("%d", &number[i]);
        sum += number[i];
    }

    printf("%d", sum);

    return 0;
}
