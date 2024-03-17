
/*
    Permute all numbers in array using recursive function.
*/

#include <stdio.h>

int arr[10];
int count = 1;

void loop_a(int a);
void loop_b(int b, int a);
void loop_c(int c, int a, int b);
void loop_d(int d, int a, int b, int c);
void loop_e(int e, int a, int b, int c, int d);
void loop_f(int f, int a, int b, int c, int d, int e);
void loop_g(int g, int a, int b, int c, int d, int e, int f);
void loop_h(int h, int a, int b, int c, int d, int e, int f, int g);
void loop_i(int i, int a, int b, int c, int d, int e, int f, int g, int h);
void loop_j(int j, int a, int b, int c, int d, int e, int f, int g, int h, int i);
void PERMUTATION();

int main()
{
    int i;

    for(i = 0; i < 10; i++){
        printf("Enter %d-th element: ", i+1);
        scanf("%d", &arr[i]);
    }

    PERMUTATION();

    return 0;
}

void PERMUTATION()
{
    loop_a(0);
}

void loop_a(int a)
{
    if(a >= 10){
        return;
    }

    loop_b(0, a);

    loop_a(a+1);
}

void loop_b(int b, int a)
{
    if(b >= 10){
        return;
    }

    loop_c(0, a, b);

    loop_b(b+1, a);
}

void loop_c(int c, int a, int b)
{
    if(c >= 10){
        return;
    }

    loop_d(0, a, b, c);

    loop_c(c+1, a, b);
}

void loop_d(int d, int a, int b, int c)
{
    if(d >= 10){
        return;
    }

    loop_e(0, a, b, c, d);

    loop_d(d+1, a, b, c);
}

void loop_e(int e, int a, int b, int c, int d)
{
    if(e >= 10){
        return;
    }

    loop_f(0, a, b, c, d, e);

    loop_e(e+1, a, b, c, d);
}

void loop_f(int f, int a, int b, int c, int d, int e)
{
    if(f >= 10){
        return;
    }

    loop_g(0, a, b, c, d, e, f);

    loop_f(f+1, a, b, c, d, e);
}

void loop_g(int g, int a, int b, int c, int d, int e, int f)
{
    if(g >= 10){
        return;
    }

    loop_h(0, a, b, c, d, e, f, g);

    loop_g(g+1, a, b, c, d, e, f);
}

void loop_h(int h, int a, int b, int c, int d, int e, int f, int g)
{
    if(h >= 10){
        return;
    }

    loop_i(0, a, b, c, d, e, f, g, h);

    loop_h(h+1, a, b, c, d, e, f, g);
}

void loop_i(int i, int a, int b, int c, int d, int e, int f, int g, int h)
{
    if(i >= 10){
        return;
    }

    loop_j(0, a, b, c, d, e, f, g, h, i);

    loop_i(i+1, a, b, c, d, e, f, g, h);
}

void loop_j(int j, int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
    if(j >= 10){
        return;
    }

    if(a!=b && a!=c && a!=d && a!=e && a!=f && a!=g && a!=h && a!=i && a!=j &&
       b!=c && b!=d && b!=e && b!=f && b!=g && b!=h && b!=i && b!=j &&
       c!=d && c!=e && c!=f && c!=g && c!=h && c!=i && c!=j &&
       d!=e && d!=f && d!=g && d!=h && d!=i && d!=j &&
       e!=f && e!=g && e!=h && e!=i && e!=j &&
       f!=g && f!=h && f!=i && f!=j &&
       g!=h && g!=i && g!=j &&
       h!=i && h!=j &&
       i!=j){
        printf("{%d, %d, %d, %d, %d, %d, %d, %d, %d, %d} = %d\n", arr[a], arr[b], arr[c], arr[d], arr[e], arr[f], arr[g], arr[h], arr[i], arr[j], count);
        count++;
    }

    loop_j(j+1, a, b, c, d, e, f, g, h, i);
}

//END



/*
    Permute all numbers in array using Loop.
*/

/*
int main()
{
    int arr[10];
    int a, b, c, d, e, f, g, h, i, j, z, count = 1;

    for(z = 0; z < 10; z++){
        printf("Enter %d-th element: ", z+1);
        scanf("%d", &arr[z]);
    }

    for(a = 0; a < 10; a++){
        for(b = 0; b < 10; b++){
            for(c = 0; c < 10; c++){
                for(d = 0; d < 10; d++){
                    for(e = 0; e < 10; e++){
                        for(f = 0; f < 10; f++){
                            for(g = 0; g < 10; g++){
                                for(h = 0; h < 10; h++){
                                    for(i = 0; i < 10; i++){
                                        for(j = 0; j < 10; j++){
                                            if(a!=b && a!=c && a!=d && a!=e && a!=f && a!=g && a!=h && a!=i && a!=j &&
                                               b!=c && b!=d && b!=e && b!=f && b!=g && b!=h && b!=i && b!=j &&
                                               c!=d && c!=e && c!=f && c!=g && c!=h && c!=i && c!=j &&
                                               d!=e && d!=f && d!=g && d!=h && d!=i && d!=j &&
                                               e!=f && e!=g && e!=h && e!=i && e!=j &&
                                               f!=g && f!=h && f!=i && f!=j &&
                                               g!=h && g!=i && g!=j &&
                                               h!=i && h!=j &&
                                               i!=j){
                                               printf("{%d, %d, %d, %d, %d, %d, %d, %d, %d, %d} = %d\n", arr[a], arr[b], arr[c], arr[d], arr[e], arr[f], arr[g], arr[h], arr[i], arr[j], count);
                                               count++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    printf("\n\n10P10 Permutation Done. 10P10 = %d\n\n", count);
}
*/
