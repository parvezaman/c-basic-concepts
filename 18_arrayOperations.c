#include <stdio.h>
int main()
{
    int arr[10];
    int i = 0;
    do
    {
        scanf("%d", &arr[i]);
        i++;
    } while (getchar() != '\n');
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}