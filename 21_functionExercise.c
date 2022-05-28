#include <stdio.h>
#include <stdbool.h>

bool evenOrOdd(int x)
{
    bool flag = false;
    if (x % 2 == 0)
    {
        flag = true;
    }
    return flag;
}
int main()
{
    int x;
    scanf("%d", &x);
    bool result = evenOrOdd(x);

    if (result)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}