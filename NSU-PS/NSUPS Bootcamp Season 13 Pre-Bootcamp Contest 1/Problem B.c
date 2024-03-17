#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    int i = 1;

    while(1){
        gets(str);

        if(strcmp(str, "*") == 0) break;

        else if(strcmp(str, "Hajj") == 0){
            printf("Case %d: Hajj-e-Akbar\n", i);
        }
        else{
            printf("Case %d: Hajj-e-Asghar\n", i);
        }

        i++;
    }

    return 0;
}
