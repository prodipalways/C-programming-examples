
#include <stdio.h>

int main()
{
    int n, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(; n > 0; n = n / 10)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
    }

    printf("Reverse = %d", rev);

    return 0;
}
