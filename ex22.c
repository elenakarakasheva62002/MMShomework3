#include <stdio.h>
#include <math.h>
int main()
{
    double a = 2.2;
    double b = 0;
    for(int i = 0; i < 11 ; i++)
    {
        b += 0.2;
    }
    printf("%.20lf\n", a);
    printf("%.20lf \n", b);

    if(a == b)
    {
        printf("They are equal with operator == \n");
    }
    else if(a != b)
    {
        printf("The arent equal with operator == \n");
    }

    if(fabs(a-b) < 0.001)
    {
        printf("They are equal with accuracy 0.001 \n");
    }
    else {
        printf("They aren't equal with accuracy 0.001 \n");
    }
}