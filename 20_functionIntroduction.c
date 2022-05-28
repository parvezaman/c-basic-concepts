#include <stdio.h>
int getSum(int x, int y)
{
    int sum = x + y;
    return sum;
}
int main()
{
    int x, y;
    printf("input two int");
    scanf("%d %d", &x, &y);

    int result = getSum(x, y);

    printf("sum is %d", result);

    return 0;
}

/*
4 important factors about function
1. function name
2. input/argument/parameter
3. return data type
4. function body
 */