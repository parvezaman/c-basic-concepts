#include <stdio.h>
int main()
{
    // create/open file
    FILE *fp;
    fp = fopen("test_file.txt", "r");

    // write into file by one charecter
    for (int i = 65; i <= 90; i++)
    {
        fputc(i, fp);
    }

    // write string directly
    fprintf(fp, "\nSo we can put string directly into the file");

    // write string in another way
    char string[100] = "\nwe are learning c file here";
    fputs(string, fp);

    // file read
    int c;
    c = fgetc(fp);
    printf("the char is: %c\n", c);

    // read file using fscanf()
    char stringArr[100];
    fscanf(fp, "%s", stringArr);
    printf("%s", stringArr);

    // read file using fgets()
    fgets(stringArr, 50, fp);
    printf("%s", stringArr);

    // close file
    fclose(fp);
    return 0;
}
/*
In C files are two types;
1. text file
2. binary file

file operations in C programming;
1. open: fp = fopen("fileopen","mode"); mode-> r,w,a,r+,w+,a+
2. write: fputc(int c, FILE *fp); fprintf(FILE*fp, string format...); fputs(const char *s, FILE *fp)
3. read: int c = fgetc(); char buff[100], fscanf(fp,"%s",buff); fgets(buff, 255, (FILE*)fp)
4. close: fclose(fp)

when working with files, you need to declare a pointer of type file;

declaration:
FILE *fp;
 */