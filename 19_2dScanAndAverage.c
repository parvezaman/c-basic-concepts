#include <stdio.h>
int main()
{
    int num[3][3] = {0};
    int sum = 0, average = 0;

    // lets scan
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    // now print all of em
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", num[i][j]);
            sum += num[i][j];
        }
    }
    average = sum / 9;
    printf("\nSum is %d\nAverage is %d", sum, average);
    return 0;
}