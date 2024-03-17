#include <stdio.h>
#include <math.h>

#define PI acos(-1)

int main()
{
    int test_case, length, i;
    double width, full_area, radius, red_area, green_area;

    scanf("%d", &test_case);

    for(i = 0; i < test_case; i++){
        scanf("%d", &length);
        width = (length / 10.0) * 6.0;
        full_area = length * width;
        radius = (length / 5.0);
        red_area = PI * radius * radius;
        green_area = full_area - red_area;

        printf("%0.2lf %0.2lf\n", red_area, green_area);
    }

    return 0;
}
