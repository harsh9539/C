#include <stdio.h>
/*
int main( )
{
    int i=0, f=0;

    do
    {
    // printf("Enter your Number\n");
    // scanf("%d", &n);
    // printf("Your table is for %d",n);
    i = i + 1;
    f = f+1 * 6;

    printf( "6 x %d = %d\n",i,f);
    } while (i<10);

    return 0;
}

int main()
{
int i;

for (int i = 0; i < 11; i++)
{
printf(" the number is %d \n ",i);
}

}*/
int main()
{
    int n, i = 1, z;

    printf("Enter your number for which you have multiply table\n");
    scanf("%d", &n);
    printf("The multiplication table of %d is\n",n);
    
    while (i<11)
    {
        z = n*i;
        printf("%d x %d = %d\n", n, i, z);

        i = i+1;
    }
    

    return 0;
}
