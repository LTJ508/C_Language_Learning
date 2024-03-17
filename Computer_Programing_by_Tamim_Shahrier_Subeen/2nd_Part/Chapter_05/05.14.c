#include <stdio.h>

int main()
{
    int ara[] = {4, 2, 7, 9, 6, 5, 8};
    int n = 9, i, j, k, missing = 0, found;

    for(i = 1; i <= n; i++){
        missing = missing ^ i;
    }

    for(i = 0; i < n-2; i++){
        missing = missing ^ ara[i];
    }

    for(i = 1; i <= 9; i++){
        for(j = i+1; j <= 9; j++){
            if(!((missing ^ i) ^ j)){
                for(k = 0, found = 0; k < n-2; k++){
                    if(i == ara[k]){
                        found = 1;
                        break;
                    }
                }

                if(found == 0){
                    printf("\nMissing Numbers: %d, %d\n", i, j);
                }
            }
        }
    }

    //printf("Missing number: %d\n", missing);

    return 0;
}

