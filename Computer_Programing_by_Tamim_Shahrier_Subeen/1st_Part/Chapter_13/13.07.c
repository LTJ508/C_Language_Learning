#include <stdio.h>
#include <string.h>

void encrypt(char msg[])
{
    int i, n;

    n = strlen(msg);

    for(i = 0; i < n; i++){
        if((msg[i] >= 'a' && msg[i] < 'z') || (msg[i] >= 'A' && msg[i] < 'Z')) {
            msg[i] = (msg[i] + 1);
        }

        else if(msg[i] == 'z'){
            msg[i] = 'a';
        }
        else if(msg[i] == 'Z'){
            msg[i] = 'A';
        }
    }
}

void decrypt(char msg[])
{
    int i, n;

    n = strlen(msg);

    for(i = 0; i < n; i++){
        if((msg[i] >= 'a' && msg[i] <= 'z') || (msg[i] >= 'A' && msg[i] <= 'Z')) {
            msg[i] = (msg[i] - 1);
        }
        else if(msg[i] == 'a'){
            msg[i] = 'z';
        }
        else if(msg[i] == 'A'){
            msg[i] = 'Z';
        }
    }
}


int main()
{
    char s[80];

    scanf("%s", s);

    encrypt(s);

    printf("\nEncrypt: %s\n\n", s);

    decrypt(s);

    printf("Decrypt: %s\n\n", s);

    return 0;
}
