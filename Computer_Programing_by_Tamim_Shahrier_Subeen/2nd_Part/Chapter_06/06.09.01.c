#include <stdio.h>

typedef struct {
    int p;
    int q;
} Rational;

int LCM(int a, int b)
{
    int i, max, lcm;
    i = max = (a > b) ? a : b;
    while(1){
        if(i%a==0 && i%b==0){
            lcm = i;
            break;
        }
        i += max;
    }

    return lcm;
}

void SHORTING(int p, int q)
{
    int low = (p < q) ? p : q;

    for(int i = low; i > 1; i--){
        if(p%i==0 && q%i==0){
            p/=i;
            q/=i;

            i = (p < q) ? p : q;
        }
    }

    if(p == 0){
        printf("0\n");
    }
    else if(q == 0){
        printf("Undefined.\n");
    }
    else if(p == 1 && q == 1){
        printf("1\n");
    }
    else{
        printf("%d/%d\n", p, q);
    }
}

void SUM(Rational n[])
{
    int q = LCM(n[0].q, n[1].q);

    int p = ((q / n[0].q) * n[0].p) + ((q / n[1].q) * n[1].p);

    printf("\nSum is: ");

    SHORTING(p,q);
}

int SUBSTRACT(Rational n[])
{
    int q = LCM(n[0].q, n[1].q);

    int p = ((q / n[0].q) * n[0].p) - ((q / n[1].q) * n[1].p);

    printf("\nSubstract is: ");

    SHORTING(p,q);

    if(p == 0){
        return 0;
    }
    else{
        return 1;
    }
}

void MULTIPLICATION(Rational n[])
{
    int p = n[0].p * n[1].p;
    int q = n[0].q * n[1].q;

    printf("\nMultiplication is: ");

    SHORTING(p,q);
}

void DIVISION(Rational n[])
{
    int p = n[0].p * n[1].q;
    int q = n[0].q * n[1].p;

    printf("\nDivision is: ");

    SHORTING(p,q);
}

int main()
{
    Rational num[2];

    for(int i = 0; i < 2; i++){
        printf("Enter %d-th Rational Number(ex. p/q): ", i+1);
        scanf("%d/%d", &num[i].p, &num[i].q);
        printf("\n");
    }

    SUM(num);
    int equality = SUBSTRACT(num);
    MULTIPLICATION(num);
    DIVISION(num);

    if(equality == 0){
        printf("\nTwo Rational Number is equal.\n");
    }
    else{
        printf("\nTwo Rational Number is not equal.\n");
    }

    return 0;
}
