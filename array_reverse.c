#include <stdio.h>
int rev(int arr[])
{
    int n;
    for (int i = 0; i < 7/2; i++)
    {
        
        n = arr[i];
        arr[i] = arr[6  - i];
        arr[6 - i] = n;
    }
}

int call(int arr[]){
for (int i = 0; i < 7; i++)
    {
        printf("The value of %d is %d\n", i, arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    call(arr);
    rev(arr);
    printf("\nAfter reversing the array\n");
    call(arr);

    return 0;
}