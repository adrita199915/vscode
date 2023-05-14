#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    char next = c + 1;
    if(next > 'z')
    {
        printf("a");
    }
    else
    {
        printf("%c", next);
    }

    return 0;
}
