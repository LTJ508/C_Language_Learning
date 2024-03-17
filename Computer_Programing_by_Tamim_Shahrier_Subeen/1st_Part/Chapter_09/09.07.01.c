#include<stdio.h>

int string_length(char str[])
{
    int i;

    for(i = 0; str[i] != '\0'; i++);

    return i;
}

int string_compare(char a[], char b[])
{
    int i, j;

    for(i = 0; a[i] != '\0' && b[i] != '\0'; i++){
        if(a[i] < b[i]){
            return -1;
        }
        if(a[i] > b[i]){
            return 1;
        }
    }

    if(string_length(a) == string_length(b)){
        return 0;
    }

    if(string_length(a) < string_length(b)){
        return -1;
    }
    if(string_length(a) > string_length(b)){
        return 1;
    }
}

int main()
{
    char a[] = "aaaa", b[] = "aaa";
    int value;

    value = string_compare(a,b);

    if(value == -1){
        printf("%s\n%s\n", a, b);
    }
    else if(value == 1){
        printf("%s\n%s\n", b, a);
    }
    else if(value == 0){
        printf("%s\t%s\n", a,b);
    }
    else{
        printf("Cant Determine");
    }

    return 0;
}
