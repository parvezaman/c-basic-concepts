#include <stdio.h>
int main()
{
    // print all numbers of a 2D array
    int num2D[2][3] = {{11, 12, 13}, {21, 22, 23}};
    // int num2D[2][3] = {11, 12, 13, 21, 22, 23}; // array declaration in both way are the same just easier to read
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", num2D[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
# DataType ArrName [row][column];
# index number starts from 0;
 */