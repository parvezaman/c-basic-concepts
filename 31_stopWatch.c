#include <stdio.h>
#include <unistd.h>
#include <conio.h>
#define cycle 60
// in case sleep doesnt work in windows operating system
/* #ifdef _WIN32
#define sleep(x) Sleep(x * 1000)
#else
#include <unistd.h>
#endif */
#define clrscr() printf("\e[1;1H\e[2J")
int main()
{
    int hour, minute, second;
    printf("Enter hour minute and second: ");
    scanf("%d %d %d", &hour, &minute, &second);
    clrscr();
    printf("Hour = %.2d, Minute = %.2d, Second = %.2d\n", hour, minute, second);

    int h = 0, m = 0, s = 0;

    while (1)
    {
        printf("%.2d : %.2d : %.2d\n", h, m, s);
        if (h == hour && m == minute && s == second)
        {
            break;
        }
        else
        {
            clrscr();
        }
        s++;
        sleep(1); // wait for 1 second and <unistd.h> is required
        if (s == cycle)
        {
            m++;
            s = 0;
        }
        if (m == cycle)
        {
            h++;
            m = 0;
        }
    }

    return 0;
}