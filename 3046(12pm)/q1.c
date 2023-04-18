#include <stdio.h>
int main()
{
    char ch;
    printf("enter the value: ");
    scanf("%C", &ch);

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        printf("%c this is alphabet", &ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c this is a number ", &ch);
    }
    else
    {
        printf("%c this is character ");
    }

    return 0;
}
