#include<stdio.h>
int func(int b){
    static int my;
    printf("The value of b is %d\n",my);
    my++;
    return b = my;
}


int main()
{
    int b ;
    scanf("%d",&b);

    int val = func(b);
    val = func(b);
    val = func(b);
    val = func(b);
    val = func(b);

    return 0;
}
