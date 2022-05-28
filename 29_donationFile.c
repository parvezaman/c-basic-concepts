#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("donation.txt", "r"); // while writting use "w+" and for reading "r"
    /* char name[20];
    int donation = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("please enter the name of friend %d: ", i + 1);
        scanf("%s", name);

        printf("Enter ammount of donation: ");
        scanf("%d", &donation);

        fprintf(fp, "%s %d\n", name, donation);
    }
 */
    // fclose(fp);

    // add the donation ammount from the file
    char buffer[20];
    int amount = 0;
    while (1)
    {
        int code = fscanf(fp, "%s", buffer);
        if (code == EOF)
        {
            break;
        }

        printf("%s ", buffer);

        code = fscanf(fp, "%s", buffer);
        if (code == EOF)
        {
            break;
        }

        printf("%s\n", buffer);

        amount = amount + atoi(buffer);
    }

    printf("Total donation: %d\n", amount);

    return 0;
}