#include <stdio.h>
int main()
{
    int num[7] = {-99, 45, 100, 37, 89, -327, 245};
    int max = num[0];
    for (int i = 0; i < 7; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    printf("max is %d", max);
    return 0;
}