
#include <stdio.h>

int main()
{
    int n, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    do
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    while(n > 0);

    if(original == reverse)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
