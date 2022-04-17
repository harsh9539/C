#include<stdio.h>

int main()
{


    // ---------- Void Pointer
    // int a = 56;
    // void * ptr ;
    // ptr = &a;
    // printf("The value is %d", *((int *)ptr));
    

    int a;
    int * ptr;
    ptr = &a;
    scanf("%d",&a);

    if (ptr != NULL)
    {
    printf(" The value is %d", *ptr);
        
    }
    else{
        printf("YOu entered a null pointer");
    }
    

    return 0;
}