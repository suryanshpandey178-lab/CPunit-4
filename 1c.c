#include <stdio.h>
int main()
{
    FILE *fp;

    fp = fopen("file.txt", "a");
    if (fp == NULL)
    {
        printf("error opening file");
        return 0;
    }
    fprintf(fp, "i am editing this file using append since w overwrites the file content,\n");
    fclose(fp);
    return 0;
}
