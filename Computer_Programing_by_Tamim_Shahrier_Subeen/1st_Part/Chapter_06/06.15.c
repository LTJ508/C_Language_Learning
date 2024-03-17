#include<stdio.h>

int main()
{
    //input student amount at first
    int student;
    printf("Enter the amount of Student: ");
    scanf("%d", &student);

    //now we start our main programme
    int ft_marks[student], st_marks[student], final_marks[student];
    double total_marks[student];
    int i, a_plus=0, a=0, a_minus=0, b=0, c=0, d=0, f=0;
    char ch1, ch2;

    //first term marks input
    printf("\nInput First Term Marks of each Students:\n");
    for(i=0; i<student; i++){
        printf("Roll No.: %d\tMarks: ", i+1);
        scanf("%d", &ft_marks[i]);
        while(ft_marks[i] > 100){
            printf("Out of Range. Please Enter Again!!!\nRoll No.: %d\tMarks: ", i+1);
            scanf("%d", &ft_marks[i]);
        }
    }

    //second term marks input
    printf("\nInput Second Term Marks of each Students:\n");
    for(i=0; i<student; i++){
        printf("Roll No.: %d\tMarks: ", i+1);
        scanf("%d", &st_marks[i]);
        while(st_marks[i] > 100){
            printf("Out of Range. Please Enter Again!!!\nRoll No.: %d\tMarks: ", i+1);
            scanf("%d", &st_marks[i]);
        }
    }

    //final marks input
    printf("\nInput Final Term Marks of each Students:\n");
    for(i=0; i<student; i++){
        printf("Roll No.: %d\tMarks: ", i+1);
        scanf("%d", &final_marks[i]);
        while(final_marks[i] > 100){
            printf("Out of Range. Please Enter Again!!!\nRoll No.: %d\tMarks: ", i+1);
            scanf("%d", &final_marks[i]);
        }
    }

    //calculating final marks and counting grade also i will print them in one loop
    printf("\n\n\nTotal Marks List\n\n");
    for(i=0; i<student; i++){
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2;
        if(total_marks[i] >= 80){
            a_plus++;
            ch1 = 'A';
            ch2 = '+';
        }
        else if(total_marks[i] >= 70 && total_marks[i] < 80){
            a++;
            ch1 = 'A';
            ch2 = ' ';
        }
        else if(total_marks[i] >= 60 && total_marks[i] < 70){
            a_minus++;
            ch1 = 'A';
            ch2 = '-';
        }
        else if(total_marks[i] >= 50 && total_marks[i] < 60){
            b++;
            ch1 = 'B';
            ch2 = ' ';
        }
        else if(total_marks[i] >= 40 && total_marks[i] < 50){
            c++;
            ch1 = 'C';
            ch2 = ' ';
        }
        else if(total_marks[i] >= 33 && total_marks[i] < 40){
            d++;
            ch1 = 'D';
            ch2 = ' ';
        }
        else{
            f++;
            ch1 = 'F';
            ch2 = ' ';
        }
        printf("Roll No.: %d\tMarks: %0.02lf\tGrade: %c%c\n", i+1, total_marks[i], ch1,ch2);
    }

    //printing grade status
    printf("\nA+\t: %d\nA\t: %d\nA-\t: %d\nB\t: %d\nC\t: %d\nD\t: %d\nF\t: %d\n", a_plus, a, a_minus, b, c, d, f);
}
