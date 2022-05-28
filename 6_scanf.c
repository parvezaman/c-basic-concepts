#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Input 3 integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Average of a,b and c: %.2f", ((float)a + (float)b + (float)c) / (float)3);
    return 0;
}