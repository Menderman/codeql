//take a string input from user and copy it to another string buffer
//using strcpy function

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20], str2[20];
    printf("Enter a string: ");
    scanf("%s", str1);
    strcpy(str2, str1);
    printf("The copied string is: %s", str2);
    return 0;
}