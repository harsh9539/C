#include <stdio.h>

int factorial(int num){
    if (num==0||num==1)
    {
        return 1;
    }
    else{
        return(num*factorial(num-1));
    }
}

int main()
{
    int n;
    printf("Of which number you want factorial\n");
    scanf("%d",&n);
    printf("the number is %d and answer is %d",n,factorial(n));
    
    return 0;
}

