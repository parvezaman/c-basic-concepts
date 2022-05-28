#include <stdio.h>
#include <limits.h>

int main()
{
    float a = 5;
    float b = 6;
    printf("Result: %f\n", a / b);
    printf("Result (upto 2 decimals): %.2f\n", a / b);
    printf("Interaction between float and int division 4/9: %f\n", (float)4 / (float)9);
    printf("another way: Interaction between float and int division 4/9: %f\n", 4.0 / 9.0);

    return 0;
}