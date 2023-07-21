//C program to check whether a character is alphabet or not
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Character is an ALPHABET");
    }
    else
    {
        printf("it is digit:");
    }
    return 0;
}
