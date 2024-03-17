#include <stdio.h>

int main()
{
    double loan_amount, interest_rate, number_of_year, total_amount, monthly_amount;

    printf("Enter the Loan Amount: ");
    scanf("%lf", &loan_amount);

    printf("Enter the Interest Rate: ");
    scanf("%lf", &interest_rate);

    printf("Enter the Number of Year: ");
    scanf("%lf", &number_of_year);

    total_amount = loan_amount + (loan_amount * interest_rate * number_of_year) / 100;

    monthly_amount = total_amount / (12 * number_of_year);

    printf("Total Pay Amount: %0.2lf\nMonthly Pay Amount: %0.2lf\n", total_amount, monthly_amount);

    return 0;
}
