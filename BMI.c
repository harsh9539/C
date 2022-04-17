#include <stdio.h>

int main()
{
    float w, h;
    printf("Enter your weight in \'KG\' && Your height in \'meter\'.\n");
    scanf("%f%f", &w, &h);
    printf("your BMI is %f\n\n", w / (h * h));
    if (w / (h * h) < 24.9 && w / (h * h) > 18.4)
    {
        printf("You are a healthy person");
    }
    else if (w / (h * h) > 25)
    {
        printf("You are overweight");
    }
    else
    {
        printf("You are not a healthy person");
    }
    return 0;
}
