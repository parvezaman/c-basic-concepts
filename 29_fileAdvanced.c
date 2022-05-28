#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("data.txt", "r");
    // charecter by charecter read and write
    int c;
    int vowelCounter = 0, consonentCounter = 0, spaceCounter = 0;
    while (1)
    {
        c = fgetc(fp);
        if (c == EOF)
        {
            break;
        }
        if (c == 32)
        {
            spaceCounter++;
        }
        else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            vowelCounter++;
        }
        else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            vowelCounter++;
        }
        else
        {
            consonentCounter++;
        }
    }
    printf("vowels: %d\nConsonent: %d\nspace: %d", vowelCounter, consonentCounter, spaceCounter);

    return 0;
}

/*
    Read all data from the file
--------------------------------------------
easiest way;
we can read and write by a single charecter
 */