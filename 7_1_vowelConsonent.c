#include <stdio.h>
#include <stdbool.h>
int main()
{
    char x;
    scanf("%c", &x);
    char *vowels[] = {"a", "e", "i", "o", "u", "A", "E", "I", "O", "U"};
    bool flag = false;
    for (int i = 0; i < 10; i++)
    {
        if (x == *vowels[i])
        {
            flag = true;
            break;
        }
        else
        {
            continue;
        }
    }

    if (flag)
    {
        printf("vowel");
    }
    else
    {
        printf("consonent");
    }

    return 0;
}