#include <stdio.h>

void triangular(int num2)
{

    for (int i = 0; i < num2; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int reverse_triangular(int num2)
{

    for (int i = 0; i < num2; i++)
    {
        for (int j = 0; j <= num2 - i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
int main()
{
    int num, num2;
    printf("Press\n 1.For reverse traingular Star Pattern.\n 2.For reverse Triangular Pattern\n");
    scanf("%d", &num);
    printf("Enter the value of stars \n");
    scanf("%d", &num2);
    switch (num)
    {
    case 1:
        triangular(num2);
        break;
    case 2:
        reverse_triangular(num2);
        break;
    default:
        printf("You entered a wrong input");
        break;
    }

    return 0;
}