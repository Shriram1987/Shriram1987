#include <stdio.h>

int main()
{
    float radius;
    float height;
    float area;
    float pi=3.14;
    printf("Enter the radius of cylinder\n");
    scanf("%f",&radius);
    printf("Enter the height of cylinder\n");
    scanf("%f",&height);
    printf("THE AREA OF THE CYLINDER IS %f\n",pi*radius*radius*height);
    return 0;
}