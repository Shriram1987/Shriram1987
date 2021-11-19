#include <stdio.h>

int main()
{
    char input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833;
    float KGTopound = 0.453492;
    float cmsToinches = 0.393701;
    float first, second;
    while (1)
    {
        printf("Enter the input character , q to quit\n 1.kmsToMiles\n 2.inchesToFoot\n 3.KGToPound\n 4.cmsToinches\n");
        scanf(" %c", &input);
        switch (input)
        {

        case 'q':
            printf("Quitting the application.......");
            goto end;
            break;
        case '1':
            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * kmsToMiles;
            printf("%f Kms is equal to Miles%f \n", first, second);
            break;
        case '2':
            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchesToFoot;
            printf("%f inches is equal to %f Foot \n", first, second);

        case '3':
            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * KGTopound;
            printf("%f KG is equal to %f pounds \n ", first, second);
        case '4':
            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * cmsToinches;
            printf("%f cms is equal to %f Inches ", first, second);
            break;
        default:
            break;
        }
    }
end:
    return 0;
}