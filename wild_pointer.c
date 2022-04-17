#include<stdio.h>
int main()
{
    int i = 343;
    int *ptr; //This is a valid pointer here.We have to declare the value for pointer
    ptr = &i; // The pointer is no longer wild.

    printf("%d",*ptr);
    return 0;
}