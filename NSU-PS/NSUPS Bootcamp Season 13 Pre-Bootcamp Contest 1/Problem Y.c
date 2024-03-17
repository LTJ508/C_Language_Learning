#include <stdio.h>

int main()
{
    int test_case, i;
    char ch;

    scanf("%d", &test_case);
    getchar();
    for(i = 0; i < test_case; i++){
        ch = getchar();
        getchar();

        if(ch == 'B' || ch == 'b') printf("BattleShip\n");
        else if(ch == 'C' || ch == 'c') printf("Cruiser\n");
        else if(ch == 'D' || ch == 'd') printf("Destroyer\n");
        else if(ch == 'F' || ch == 'f') printf("Frigate\n");
    }

    return 0;
}
