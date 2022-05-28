#include <stdio.h>

int main()
{
    // lets learn x++ vs ++x
    int x = 5;
    printf("value of x is: %d\n", x++); // 5 -> 6
    // printf("value of x is: %d\n", x);   // 5 -> 6
    printf("value of x is: %d\n", ++x); // 7 -> 7
    // printf("value of x is: %d\n", x);   // 7 -> 7

    x = 5;
    printf("value of x is: %d\n", ++x);
    printf("value of x is: %d\n", x++);

    return 0;
}

/*
x = y + z       Operators: =,+      Operand: x,y,z
y = 5 - 5       Operators: =,-      Operand: y,5,5

Arithmatic operators: +, -, *, /, %, ++, --
Relational operators: ==, >, >=, <, <=
Logical operators: &&, ||
Assignment operators: =, +=, -=, *=, /=

precedence: onek gulo operator thakle kon operator er kaj age hobe seta k bole precesence

Associativity: kon pas theke operation kora hobe. left or right

 */