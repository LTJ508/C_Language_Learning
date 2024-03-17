#include<stdio.h>

int b_search(int ara[], int low_indx, int high_indx, int mid_indx, int num);

int main()
{
    int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int low_indx = 0;
    int high_indx = 15;
    int mid_indx;
    int num = 200;

    mid_indx = b_search(ara, low_indx, high_indx, mid_indx, num);

    if(mid_indx < 0){
        printf("%d is not in the array\n", num);
    }
    else{
        printf("%d is found in the array. It is the %d th element of the array.\n", ara[mid_indx], mid_indx + 1);
    }

    return 0;
}

int b_search(int ara[], int low_indx, int high_indx, int mid_indx, int num)
{
    while(low_indx <= high_indx){
        mid_indx = (low_indx + high_indx) / 2;
        if(num == ara[mid_indx]){
            break;
        }
        if(num < ara[mid_indx]){
            high_indx = mid_indx - 1;
        }
        else{
            low_indx = mid_indx + 1;
        }
    }

    if(low_indx > high_indx){
        mid_indx = -1;
    }

    return mid_indx;
}
