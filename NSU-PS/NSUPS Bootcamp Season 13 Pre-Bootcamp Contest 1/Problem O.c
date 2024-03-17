#include <stdio.h>

int count[100000];

int main()
{
    int unique_arr[100000];
    int number, unique_idex = 0, found, i;

    while(1){
        scanf("%d", &number);

        for(i = 0, found = 0; i < unique_idex; i++){
            if(number == unique_arr[i]){
                count[i]++;
                found = 1;
                break;
            }
        }
        if(found == 0){
            unique_arr[unique_idex] = number;
            count[unique_idex]++;
            unique_idex++;
        }
        if(getchar() == '\n') break;
    }
    for(i = 0; i < unique_idex; i++){
        printf("%d %d\n", unique_arr[i], count[i]);
    }

    return 0;
}

/*
    do{
        scanf("%d", &arr[size++]);
    } while(getchar() != '\n');

    arr[size];
    int i, j, count;
    for(i = 0; i < size; i++){
        if(index_arr[i] == 0){
            for(j = i+1, count = 1; j < size; j++){
                if(arr[i] == arr[j]){
                    count++;
                    index_arr[j] = 1;
                }
            }
            printf("%d %d\n", arr[i], count);
        }
    }
    */






















/*
#include <stdio.h>

int main()
{
    int arr[100000];
    int size = 0;

    do{
        scanf("%d", &arr[size++]);
    } while(getchar() != '\n');

    arr[size];

    int uniq_arr[size];

    int i, j, k = 0, found, count;

    for(i = 0; i < size; i++){
        for(j = 0, found = 0; j < k; j++){
            if(uniq_arr[j] == arr[i]){
                found = 1;
                break;
            }
        }

        if(found == 0){
            uniq_arr[k] = arr[i];
            k++;
        }
    }

    uniq_arr[k];

    int size_uni = k;

    for(i = 0; i < size_uni; i++){
        printf("%d ", uniq_arr[i]);

        for(j = 0, count = 0; j < size; j++){
            if(uniq_arr[i] == arr[j]) count++;
        }

        printf("%d\n", count);
    }

    return 0;
}


*/


/*

#include <stdio.h>
#include <string.h>
#define MAX 1000002
int c[2 * MAX];
int Ns[2 * MAX];
int main() {

    int N, S = -1, i;
    for (i = 0; i < 2*MAX; ++i)
        c[i] = 0;
    while (scanf("%d", &N)==1) {
        Ns[++S] = N + MAX;
        ++c[N + MAX];
    }

    for (i = 0; i <= S; ++i) {
        if (!c[Ns[i]]) continue;
        printf("%d %d\n", Ns[i] - MAX, c[Ns[i]]);
        c[Ns[i]] = 0;
    }
    return 0;
}


*/





















/*

#include <stdio.h>
#include <string.h>

int main()
{
    char main_string[10000];

    int integer[8000];

    gets(main_string);

    char scanning_string[10000];

    strcpy(scanning_string, main_string);

    int i, j = 0, k, l, found, count, space;

    for(i = 0; scanning_string[i] != '\0';){
        sscanf(scanning_string, "%d", &integer[j]);
        j++;

        for(k = 0, space = 0; scanning_string[k] != '\0'; k++){
            if(scanning_string[k] == 32){
                space = 1;
                for(l = 0; scanning_string[k] != '\0'; l++){
                    scanning_string[l] = scanning_string[k+1];
                    k++;
                }
                scanning_string[l] = '\0';
            }
        }

        if(space == 0) break;
        i = 0;
    }

    int size = j;

    int unique_integer[size];

    k = 0;

    for(i = 0; i < size; i++){
        for(j = 0, found = 0; j < k; j++){
            if(integer[i] == unique_integer[j]){
                found = 1;
                break;
            }
        }

        if(found == 0){
            unique_integer[k] = integer[i];
            k++;
        }
    }

    int size_uni = k;

    for(i = 0; i < size_uni; i++){
        printf("%d ", unique_integer[i]);

        for(j = 0, count = 0; j < size; j++){
            if(unique_integer[i] == integer[j]) count++;
        }
        printf("%d\n", count);
    }

    return 0;
}

*/



/*

#include <stdio.h>

int main()
{
    char input_string[1000];
    char input_integer[1000];
    int i, j, k = 0, found = 0, count;

    for(i = 0; i < 1000; i++){
        input_string[i] = getchar();
        if(input_string[i] == '\n') break;
    }

    input_string[i] = '\0';

    for(i = 0; input_string[i] != '\0'; i++){
        if(input_string[i] != 32){
            for(j = 0, found = 0; j < k; j++){
                if(input_integer[j] == input_string[i]){
                    found = 1;
                    break;
                }
            }

            if(found == 0){
                input_integer[k] = input_string[i];
                k++;
            }
        }
    }

    input_integer[k] = '\0';

    for(i = 0; input_integer[i] != '\0'; i++){
        printf("%c ", input_integer[i]);

        for(j = 0, count = 0; input_string[j] != '\0'; j++){
            if(input_integer[i] == input_string[j]) count++;
        }
        printf("%d\n", count);
    }

    return 0;
}
*/
