#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("%u\n", &arr[i]);
    }

    return 0;
}