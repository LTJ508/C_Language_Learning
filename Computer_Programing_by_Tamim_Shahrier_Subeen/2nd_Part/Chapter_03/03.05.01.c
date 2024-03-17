#include <stdio.h>

int main()
{
    FILE *fp_in_math, *fp_in_bangla, *fp_in_english, *fp_out_average;
    char *input_math = "math.txt";
    char *input_bangla = "bangla.txt";
    char *input_english = "english.txt";
    char *output_average = "average.txt";

    char marks[10];
    int marks_bangla, marks_english, marks_math, marks_average, student_number, student_roll, i;

    printf("Enter student number: ");
    scanf("%d", &student_number);

    fp_in_math = fopen(input_math, "r");
    if(fp_in_math == NULL){
        perror("File opening failed");
        return EXIT_FAILURE;
    }

    fp_in_bangla = fopen(input_bangla, "r");
    if(fp_in_bangla == NULL){
        perror("File opening failed");
        return EXIT_FAILURE;
    }

    fp_in_english = fopen(input_english, "r");
    if(fp_in_english == NULL){
        perror("File opening failed");
        return EXIT_FAILURE;
    }

    fp_out_average = fopen(output_average, "w");

    for(i = 1; i <= student_number; i++){
        fgets(marks, 10, fp_in_math);
        sscanf(marks, "%d %d", &student_roll, &marks_math);
        fgets(marks, 10, fp_in_english);
        sscanf(marks, "%d %d", &student_roll, &marks_english);
        fgets(marks, 10, fp_in_bangla);
        sscanf(marks, "%d %d", &student_roll, &marks_bangla);

        marks_average = (marks_math + marks_english + marks_bangla) / 3;

        printf("Roll: %d\tBangla: %d\tEnglish: %d\tMath: %d\tAverage: %d\n", student_roll, marks_bangla, marks_english, marks_math, marks_average);

        fprintf(fp_out_average, "%d %d\n", student_roll, marks_average);
    }

    fclose(fp_in_math);
    fclose(fp_in_bangla);
    fclose(fp_in_english);
    fclose(fp_out_average);

    return 0;
}
