#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    char *arr[] = {"Even", "Odd"};
    if (x % 2 == 0)
    {
        printf("%s", arr[0]);
    }
    else
    {
        printf("%s", arr[1]);
    }

    return 0;
}