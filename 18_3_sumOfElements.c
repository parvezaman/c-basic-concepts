#include <stdio.h>
int main()
{
    float A[5] = {0}, B[5] = {0}, AB[5] = {0};
    int i = 0;
    int j = 0;
    printf(" input 5 elements of A ");
    do
    {
        scanf("%f", &A[i]);
        i++;
    } while (getchar() != '\n');
    printf(" input 5 elements of B ");
    do
    {
        scanf("%f", &B[j]);
        j++;
    } while (getchar() != '\n');
    for (int i = 0; i < 5; i++)
    {
        AB[i] = A[i] + B[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%dst sum is %.2f\n", i + 1, AB[i]);
    }

    return 0;
}