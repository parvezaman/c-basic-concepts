#include <stdio.h>
struct Book
{
    int ISBN;
    char title[50];
    char author[50];
    float price;
};
int main()
{
    struct Book kitabul_wasiat;
    printf("input isbn");
    scanf("%d" &kitabul_wasiat.ISBN);
    printf("input isbn");
    scanf("%s" &kitabul_wasiat.title);

    return 0;
}

/*
Structure: When we need to use multiple type of data type altogether, we can use structure as object.
 */
