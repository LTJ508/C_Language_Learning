#include <stdio.h>
#include <string.h>

int main()
{
    char word[80], temp;
    int i, j, len, is_palindrome = 1;

    scanf("%s", word);

    len = strlen(word);

    for(i = 0, j = len - 1; i < len/2; i++, j--){
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;

        if(word[i] != word[j]){
            is_palindrome = 0;
        }
    }

    //reverse_word[i] = '\0';
    printf("\n%s\n\n",word);

    if(is_palindrome == 1){
        printf("%s is a palindrome.\n", word);
    }
    else{
        printf("%s is not a palindrome.\n", word);
    }

    return 0;
}
