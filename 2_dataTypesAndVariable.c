#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Data Type \t Keyword \t size \t Range \t placeholder\n");
    printf("1. Charecter \t char \t\t 1 \t -128 to 127 \t c\n");
    printf("2. Unsigned charecter  unsigned char  1 0 to 255 \t c\n");
    printf("3. integer \t int \t 2 to 4 \t -32768 to 32767 \t d\n");
    printf("DataType \t Keyword \t size \t Range \t placeholder\n");

    printf("\n");
    printf("\n");
    printf("\n");
    printf("The maximum size of INT is %d\n", INT_MAX);
    printf("The minimum size of INT is %d\n", INT_MIN);

    printf("\n");
    printf("\n");

    printf("The maximum size of Long long int is %lld\n", LONG_MAX);
    printf("The minimum size of Long long int is %lld\n", LONG_MIN);

    return 0;
}