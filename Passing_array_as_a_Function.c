#include <stdio.h>
int func(int array[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d and %d at array is %d\n", i, j, array[i][j]);
        }
    }
}

int func2(int *arr)
{
    for (int i = 0; i < 4; i++)
    {
        int z;
        z = arr[i] * 3;
        printf("The value of %d at %d array is %d\n", i, z, *(arr + i));
    }
    // arr[0] = 343;         //here we can also change the value by this.
}

int func3(){
    int a;
    
}
int main()
{
    int arr[][2] = {{23, 3}, {45, 56}};
    func(arr);
    printf(" value is %d", arr[0]);
    return 0;
}
