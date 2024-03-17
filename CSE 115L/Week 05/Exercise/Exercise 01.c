#include <stdio.h>

int main()
{
    char ch;

    printf("Enter the first character of fruits name: ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'M': printf("\nPrice of Mango: TK. 500/kg\n");
        break;

        case 'm': printf("\nPrice of Mango: TK. 500/kg\n");
        break;

        case 'A': printf("\nPrice of Apple: TK. 250/kg\n");
        break;

        case 'a': printf("\nPrice of Apple: TK. 250/kg\n");
        break;

        case 'B': printf("\nPrice of Banana: TK. 130/kg\n");
        break;

        case 'b': printf("\nPrice of Banana: TK. 130/kg\n");
        break;

        case 'C': printf("\nPrice of Cherry: TK. 270/kg\n");
        break;

        case 'c': printf("\nPrice of Cherry: TK. 270/kg\n");
        break;

        default: printf("\nSorry!! This fruit is not in the database.\n");
    }

    return 0;
}
