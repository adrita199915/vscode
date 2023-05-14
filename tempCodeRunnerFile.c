#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int firstDigit = N/10;
    int secondDigit = N%10;
    if(firstDigit % secondDigit == 0 || secondDigit % firstDigit == 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}