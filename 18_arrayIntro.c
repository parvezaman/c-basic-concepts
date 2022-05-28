#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int findMax(int n, int num[])
{
    int max = num[0];
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}
// 1 2 3
// 2>1
// max= 2;
int main()
{
    int n;
    printf("input the size of the array: ");
    scanf("%d", &n);
    // int num[n];
    int *num = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", num + i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(num + i));
    }

    int max = findMax(n, num);
    printf("\nmax num is %d", max);

    return 0;
}
