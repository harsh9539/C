#include <stdio.h>
int main()
{
    float e, h, m, s, p, f;
    printf("Enter your Marks Print your Result\n");
    scanf("%f%f%f%f%f%f", &e, &h, &m, &s, &p, &f);
    float t;
    float k;
    t = e + h + m + s + p + f;
    k = ((e + h + m + s + p + f) * 100) / 500;
    printf("You obtained %.1f marks\n Your percentage is %.2f\n ", t, k);
    if (k > 95)
    {
        printf("//You are Excellence in your Studies.Keep working hard//");
    }
    else if (k > 85 && k < 95)
    {
        printf("//Great Job//");
    }
    else if (k > 80)
    {
        printf("//Good//");
    }
    else if (k > 70)
    {
        printf("//Keep Work Hard//");
    }
    else if (k > 60)
    {
        printf("//Focus on your Studies//");
    }
    else if (k > 40 && k < 60)
    {
        printf("//Work Hard Unless you Will FAIL!//");
    }
    else
    {
        printf("//You Are FAIL!//");
    }

    return 0;
}