#include <stdio.h>
int main()
{
    int i = 100;
    do
    {
        printf("%d ", i);
        i -= 5;
    } while (i >= 0);

    return 0;
}