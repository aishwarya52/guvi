#include <stdio.h>
int main()
{
    int base, exponent;

    int  sum = 1;

    printf("Enter a basenumber: ");
    scanf("%d", &base);

    printf("Enter an exponent: ");
    scanf("%d", &exponent);

    while (exponent!=0)
    {
        sum*=base;
        -- exponent;
    }

    printf("answer is %d", sum);

    return 0;
}
