#include <stdio.h>

int main()
{
    float radius;
    float area;
    printf("Enter the radius of the circle whose area is to be calcualated\n");
    scanf("%f", &radius);
    area= 3.14*radius*radius;
    printf("The area of the circle is %f\n", area);
    return 0;
}