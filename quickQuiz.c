#include<stdio.h>
int add(int* c , int* n){

    return *c + *n;

}
int subtract(int* c , int* n){
    return *c- *n;
}

int main()
{
    int a,b;
    printf("Enter the Two Numbers\n");
    scanf("%d\n%d",&a,&b);
    add(&a,&b);
subtract(&a,&b);
printf("Value of A is  %d and value of B is %d",add(&a,&b),subtract(&a,&b));
    
    return 0;
}