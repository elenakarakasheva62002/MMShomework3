#include <stdio.h>
#include <math.h>
int main()
{
    float num1, num2, max;
    scanf("%f %f", &num1, &num2);
    if(num1 > num2)
    {
        max = num1;
    }
    else {
        max = num2;
    }
    if(fabs(num1 - num2) < 0.001 * max)
    {
        printf("They are equal. ");
    }
    else{
        printf("The are not equal. ");
    }
}