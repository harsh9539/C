#include <stdio.h>
int main()
{
    int *ptr;
    {
        int n = 0;
        ptr = &n; //ptr point to invalid location
        
    }
//   ptr is now a dangling pointer
printf("%d",*ptr);
    return 0;
}