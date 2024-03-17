#include <stdio.h>

int main()
{
    int test_case, size, i, j, k, low, index, temp;

    scanf("%d", &test_case);

    for(i = 0; i < test_case; i++){
        scanf("%d", &size);

        int arr[size];

        for(j = 0; j < size; j++){
            scanf("%d", &arr[j]);
        }

        for(j = 0; j < 2; j++){
            low = arr[j];
            index = j;
            for(k = j+1; k < size; k++){
                if(arr[k] < low){
                    low = arr[k];
                    index = k;
                }
            }

            temp = arr[j];
            arr[j] = arr[index];
            arr[index] = temp;
        }

        printf("%d\n", arr[0]+arr[1]);
    }

    return 0;
}
