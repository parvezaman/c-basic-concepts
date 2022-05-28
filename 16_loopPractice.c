#include <stdio.h>
int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    char alphabet;
    for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
    {
        printf("%c ", alphabet);
    }

    int sum = 0;
    for (int i = 5; i <= 25; i++)
    {
        sum += i * i;
    }
    printf("\nSum = %d\n", sum);

    return 0;
}