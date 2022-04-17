
/*
// Question.You manage a travel agency and you want your driver teo input their following details:
1.Name 
2. Driving Licence NO.
3. Route
4.Kms

Your program should be able to take n=3  as input and your dirvers will start inputtinh their deaatils one by one 


Your program should pirnt details of the drivers in a beautiful fashion.

Use structure Only.?


*/

#include <stdio.h>

// struct travel
// {
//     char name[30];
//     int license;
//     char route[30];
//     int kms;
// } n;

// void var(int m)
// {
//     printf("Enter Your Details Below : \n 1.Name \n 2.License No. \n 3.Route \n 4.Kms \n \n");

//     gets(n.name);
//     scanf(" %d", &n.license);
//     // gets(n.route);
//     scanf(" %d", &n.kms);

//     printf("Your Name is :");
//     puts(n.name);
//     printf("License NO. is %d\n", n.license);
//     // puts(n.route);
//     printf("%dKms\n", n.kms);
// printf("\n");

// }

// int main()
// {
//     char input;
//     printf("\n");

//     while (1)
//     {
//         printf("press \"p\" to provess futrher \n q = Quit the Program\n");
//         scanf(" %c", &input);
//         if (input == 'q')
//         {
//             printf("Quitting The Program.........");
//             break;
//         }
//         else if (input == 'p')
//         {
//             struct travel
//             {
//                 char name[30];
//                 int license;
//                 char route[30];
//                 int kms;
//             } n;
//             printf("Enter Your Details Below : \n 1.Name \n 2.License No. \n 3.Route \n 4.Kms \n \n");

//             gets(n.name);
//             scanf(" %d", &n.license);
//             // gets(n.route);
//             scanf(" %d", &n.kms);

//             printf("Your Name is :");
//             puts(n.name);
//             printf("License NO. is %d\n", n.license);
//             // puts(n.route);
//             printf("%dKms\n", n.kms);
//         }
//         else
//         {
//             goto end;
//         }
//     }
//     printf("\n");

// end:


/*------------------------*/
struct Driver
{
    char name[30];
    char license[30];
    char route[30];
    int kms;
};


int main()
{
struct Driver d1,d2,d3;


printf("Enter the details of the drivers\n");

    return 0;
}
