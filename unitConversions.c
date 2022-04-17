#include <stdio.h>

int main()
{
    float first, second;
    char input;
    float kmsToMiles = 0.621371;
    float incToFoot = 0.833333;
    float inchesToMeters = 0.0254;
    float cmToInches = 0.393701;
    /*---------------------------------------- First Method To Solve UnitConversion Problem ------------------------------*/
    // while (1)
    // {
    //     printf("Here is your Input Press \n  q=quit\n  1. Kms To Miles\n  2.Inch To Foot\n  3.Inches To Meters\n  4.Cm To Inches\n");
    //     scanf(" %c", &input);
    //     if (input == 'q')
    //     {
    //         printf("Quitting the Program..........Q");
    //         break;
    //     }

    //     else if (input == '1')
    //     {
    //         printf("Enter the Amount\n");
    //         scanf("%f", &first);
    //         second = first * kmsToMiles;
    //         printf("%.2f Kms to miles is %.2f\n\n\n", first, second);
    //     }
    //     else if (input == '2')
    //     {
    //         printf("Enter the Amount\n");
    //         scanf("%f", &first);
    //         second = first * incToFoot;
    //         printf("%.2f Inch to Foot is %.2f\n\n\n", first, second);
    //     }
    //     else if (input == '3')
    //     {
    //         printf("Enter the Amount\n");
    //         scanf("%f", &first);
    //         second = first * inchesToMeters;
    //         printf("%.2f Inches to Meters %.2f\n\n\n", first, second);
    //     }
    //     else if (input == '4')
    //     {
    //         printf("Enter the Amount\n");
    //         scanf("%f", &first);
    //         second = first * cmToInches;
    //         printf("%.2f Cm To Inches %.2f\n\n\n", first, second);
    //     }
    // }
    //     return 0;
    // }
    /* -------------------------------Second Method To Solve UnitConversion Problem -----------------------------------*/
    
    while (1)
    {
        printf("Here is your Input Press \n  q=quit\n  1. Kms To Miles\n  2.Inch To Foot\n  3.Inches To Meters\n  4.Cm To Inches\n");
        scanf(" %c", &input);
        switch (input)
        {
        case 'q':
            printf("Quitting the Program..........Q");
            goto end;
            break;

        case '1':

            printf("Enter the Amount\n");
            scanf("%f", &first);
            second = first * kmsToMiles;
            printf("%.2f Kms to miles is %.2f\n\n\n", first, second);
            break;

        case '2':

            printf("Enter the Amount\n");
            scanf("%f", &first);
            second = first * incToFoot;
            printf("%.2f Inch to Foot is %.2f\n", first, second);
            break;
        case '3':

            printf("Enter the Amount\n");
            scanf("%f", &first);
            second = first * inchesToMeters;
            printf("%.2f Inches to Meters %.2f\n", first, second);
            break;
        case '4':

            printf("Enter the Amount\n");
            scanf("%f", &first);
            second = first * cmToInches;
            printf("%.2f Cm To Inches %.2f\n", first, second);
            break;

        default:
            printf("it is a default value entered");
            break;
        }
    }
    

end:
    return 0;
}
