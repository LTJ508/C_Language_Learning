#include <stdio.h>

void reverse_string(char str[], int i)
{
    if(str[i] == '\0'){
        return;
    }
    reverse_string(str, i+1);
    printf("%c", str[i]);
}

int main()
{
    char str[200];

    printf("Enter your string: ");
    gets(str);

    printf("Reverse String: ");
    reverse_string(str, 0);

    return 0;
}
