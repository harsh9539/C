#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[30];
    float marks;
} Harsh, Lakshay; // this structure does not takes single memory location i.e== it shows all int char float.



union student
{
    int id;
    char name[30];
    float marks;
};  //this union only takes single memory location i.e== it only shows one of them int char float.

int main()
{
    Harsh.id = 34;
    printf("%d", Harsh.id);
    return 0;
}