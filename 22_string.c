#include <stdio.h>
int main()
{
    char name[] = "Aman";
    char home[] = {'b', 'a', 'r', 'i'};
    // printf("%s\n", name);
    printf("%s\n", home);
    int i = 0;
    while (1)
    {
        printf("%d -> %c\n", i + 1, name[i]);
        if (name[i] == '\0')
        {
            break;
        }
        i++;
    }
    int len = 0;
    while (name[len] != '\0')
    {
        len++;
    }

    printf("%d", len);

    return 0;
}
/*
    String: a charecter Array terminated by a null charecter ('\0')
 */