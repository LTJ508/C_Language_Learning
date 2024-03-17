#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

    int arr[size], i, count = 0;

    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
        if(arr[i] != i+1) count++;
    }

    if( count > 2){
        printf("NO");
    }
    else{
        printf("YES");
    }

    return 0;
}




































/*

#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

    int arr[size], i, j, possibility = 1, temp, swap_count = 0;

    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < size-1; i++){
        if(arr[i] > arr[i+1]){
            if(swap_count == 0){
                for(j = i+1; j < size-1; j++){
                    if(arr[j] > arr[j+1]){
                        temp = arr[i];
                        arr[i] = arr[j+1];
                        arr[j+1] = temp;
                        swap_count = 1;
                        break;
                    }
                }

                i = -1;
                continue;
            }
            else{
                possibility = 0;
            }
        }
    }

    if(possibility == 1){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
*/
