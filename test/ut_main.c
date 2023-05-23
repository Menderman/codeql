//take a string input from user and copy it to another string buffer

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20], str2[20];
    int i;
    printf("Enter a string: ");
    scanf("%s", str1);
    for (i = 0; str1[i] != '\0'; ++i)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("String str2: %s\n", str2);
    return 0;
}