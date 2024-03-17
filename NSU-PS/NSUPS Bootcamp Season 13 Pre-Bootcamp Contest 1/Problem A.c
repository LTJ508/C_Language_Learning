#include <stdio.h>

int main()
{
    int size, i, even, odd, even_count = 0, odd_count = 0;

    scanf("%d", &size);

    int arr[size];
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            even = i;
            even_count++;
        }
        else{
            odd = i;
            odd_count++;
        }
    }

    if(even_count < odd_count){
        printf("%d", even+1);
    }
    else{
        printf("%d", odd+1);
    }

    return 0;
}
