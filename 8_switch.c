#include <stdio.h>
int main()
{
    int x;
    printf("input 1 - 3\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("your input was: 1");
        break;
    case 2:
        printf("your input was: 2");
        break;
    case 3:
        printf("your input was: 3");
        break;

    default:
        printf("unknown");
        break;
    }
    return 0;
}