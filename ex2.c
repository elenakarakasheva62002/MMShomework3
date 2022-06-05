#include <stdio.h>
#include <math.h>
int main()
{
    float a = 12.1f;
    float b = 12.1f;
    printf("%.20f\n", a);
    printf("%.20f\n", b);
    printf("Check if they are equal with accuracy 0.0001 \n");
    if(fabs(a - b) < 0.0001)
    {
        printf("They are equal with accuracy 0.0001 \n");
    }
    else if(fabs(a - b) > 0.0000001){
        printf("They aren't equal");
    }
    printf("Check if they are equal with accuracy 0.0000001 \n");
    if(fabs(a - b) < 0.0000001)
    {
        printf("They are equal with accuracy 0.0000001\n");   
    }
    else if(fabs(a - b) > 0.0000001){
        printf("They aren't equal\n");
    }
    printf("Check if they are equal with operator == \n");
    if( a == b)
    {
        printf("They are equal with operator == \n");
    }
    else if( a != b)
    {
        printf("They aren't equal with operator ==");
    }
}