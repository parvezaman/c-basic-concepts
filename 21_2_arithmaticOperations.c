#include <stdio.h>
void allArithmatics(float a, float b, float *sum, float *sub, float *mul, float *div)
{
    *sum = a + b;
    *sub = a - b;
    *mul = a * b;
    *div = a / b;
}

int main()
{
    float a, b, sum, sub, mul, div;
    scanf("%f %f", &a, &b);
    allArithmatics(a, b, &sum, &sub, &mul, &div);
    printf("sum =%f\nsum =%f\nmul =%f\ndiv =%f\n", sum, sub, mul, div);
    return 0;
}