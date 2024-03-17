#include <stdio.h>
#include <string.h>

typedef struct {
    char first_line[100];
    char second_line[100];
} slogan;

int main()
{
    int n, q, i, j;

    scanf("%d", &n);
    getchar();

    slogan slogan_list[n];

    for(i = 0; i < n; i++){
        gets(slogan_list[i].first_line);
        gets(slogan_list[i].second_line);
    }

    scanf("%d", &q);
    getchar();

    char queris[100];

    for(i = 0; i < q; i++){
        gets(queris);
        for(j = 0; j < n; j++){
            if(strcmp(queris, slogan_list[j].first_line) == 0) printf("%s\n", slogan_list[j].second_line);
        }
    }

    return 0;
}
