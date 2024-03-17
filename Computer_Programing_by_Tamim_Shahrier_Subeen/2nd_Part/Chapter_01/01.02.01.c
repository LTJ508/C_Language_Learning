#include <stdio.h>

int DIGIT(char ch);

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(1 == DIGIT(ch)){
        printf("This character is a Digit.\n");
    }
    else{
        printf("This character is not a Digit.\n");
    }

    return 0;
}

int DIGIT(char ch)
{
    if(ch >= '0' && ch <= '9'){
        return 1;
    }
    else{
        return 0;
    }
}
