#include <stdio.h>

typedef struct {
    int day;
    char month[3];
    int year;
} DATE;

typedef struct {
    char Name[100];
    char FatherName[100];
    char MotherName[100];
    DATE DOB;
    long long int ID;
} NationalID;

void PRINTINFO(NationalID info)
{
    printf("\n\nName: %s\nFather's Name: %s\nMother's Name: %s\nDate of Birth: %d %s %d\nID NO: %lld\n\n", info.Name, info.FatherName, info.MotherName, info.DOB.day, info.DOB.month, info.DOB.year, info.ID);
}

int main()
{
    int person, found = 0;
    long long int IDNO;

    printf("Enter Number of Person: ");
    scanf("%d", &person);
    fflush(stdin);

    NationalID IDCard[person];

    for(int i  = 0; i < person; i++){
        printf("For %d-th Person:\nEnter Name: ", i+1);
        gets(IDCard[i].Name);
        printf("Enter Father's Name: ");
        gets(IDCard[i].FatherName);
        printf("Enter Mother's Name: ");
        gets(IDCard[i].MotherName);
        printf("Enter Birth Date: ");
        scanf("%d", &IDCard[i].DOB.day);
        fflush(stdin);
        printf("Enter Birth Month: ");
        gets(IDCard[i].DOB.month);
        printf("Enter Birth Year: ");
        scanf("%d", &IDCard[i].DOB.year);
        fflush(stdin);
        printf("Enter ID No.: ");
        scanf("%lld", &IDCard[i].ID);
        fflush(stdin);
        printf("\n");
    }

    printf("\n\nEnter ID No. to show Details: ");
    scanf("%lld", &IDNO);

    for(int i = 0; i < person; i++){
        if(IDCard[i].ID == IDNO){
            PRINTINFO(IDCard[i]);
            found = 1;
            break;
        }
    }

    if(found == 0){
        printf("\n\nID Not Found in Database..\n\n");
    }

    return 0;
}

