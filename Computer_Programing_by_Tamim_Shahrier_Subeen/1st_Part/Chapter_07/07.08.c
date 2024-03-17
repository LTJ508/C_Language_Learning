#include<stdio.h>

double find_max(double ara[], int n);
double find_min(double ara[], int n);
double find_sum(double ara[], int n);
double find_average(double ara[], int n);

int main()
{
    double ara[] = {-100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85};
    int n = 11;

    double max = find_max(ara, n);
    double min = find_min(ara, n);
    double sum = find_sum(ara, n);
    double average = find_average(ara, n);

    printf("%0.2lf\n", max);
    printf("%0.2lf\n", min);
    printf("%0.2lf\n", sum);
    printf("%0.2lf\n", average);

    return 0;
}

double find_max(double ara[], int n)
{
    double max = ara[0];
    int i;

    for(i = 1; i < n; i++){
        if(ara[i] > max){
            max = ara[i];
        }
    }

    return max;
}

double find_min(double ara[], int n)
{
    double min = ara[0];
    int i;

    for(i = 1; i < n; i++){
        if(ara[i] < min){
            min = ara[i];
        }
    }
    return min;
}

double find_sum(double ara[], int n)
{
    double sum = 0;
    int i;
    for(i=0; i < n; i++){
        sum = sum + ara[i];
    }

    return sum;
}

double find_average(double ara[], int n)
{
    double sum = find_sum(ara, n);
    double average = sum / n;

    return average;
}
