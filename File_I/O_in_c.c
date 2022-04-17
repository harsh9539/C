#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("Harsh.txt", "a+");
    // char c = fgetc(ptr);
    // printf("The sentence was :: %c\n", c);
    char str[34];
    fgets(str, 30, ptr);
    printf("The sentence was :: %s\n", str);
    // fputc('o', ptr);
    // fputs("Hi_I am harsh goyal",ptr);


    fclose(ptr);
    return 0;
}