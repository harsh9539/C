#include <stdio.h>
#include <stdlib.h>
int main()
{

    // -------- using malloc --------
    // int *ptr;
    // ptr = (int*) malloc(4*sizeof(int));
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("enter the value you want to enter\n");
    //     scanf("%d",&ptr[i]);

    // }
    // for (int i = 0; i < 6 ; i++)
    // {
    //     printf("The value for %d is %d\n",i,ptr[i]);
    // }

    // -------- using calloc --------

    // int *ptr;
    // int n;

    // ptr = (int *)calloc(n, sizeof(int));
    // printf("Enter how many value you want");
    // scanf("%d",&n);
    // for (int i = 1; i < n; i++)
    // {
    //     printf("enter the value you want to enter\n");
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 1; i < n; i++)
    // {
    //     printf("The value for %d is %d\n", i, ptr[i]);
    // }

      // -------- using realloc --------

    int *ptr;
    int n;

    ptr = (int *)realloc(n, sizeof(int));
    printf("Enter how many value you want");
    scanf("%d",&n);
    for (int i = 1; i < n; i++)
    {
        printf("enter the value you want to enter\n");
        scanf("%d", &ptr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        printf("The value for %d is %d\n", i, ptr[i]);
    }

    return 0;
}