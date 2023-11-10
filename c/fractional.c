#include <stdio.h>

int main()
{
    int n;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Error: Factorial is not defined for negative numbers.\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}
