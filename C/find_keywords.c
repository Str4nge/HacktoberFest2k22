#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    int i, j, count=0;
    char c = '\n';
    char ch;
    FILE *fp;
    char keyword[32][15] = {
      "extern","return","union","const","float","short",
      "auto","double","int","struct","break","else","long",
      "goto","sizeof","voltile","do","if","static","while",
      "unsigned","continue","for","signed","void","default",
      "switch","case","enum","register","typedef","char"
    };

    fp = fopen("file.txt", "w");

    if(fp == NULL)
    {
        printf("File does not exist");
        exit(1);
    }

    for(i=0; i<32; i++)
    {
        for(j=0; j<strlen(keyword[i]); j++)
        {
            fputc(keyword[i][j],fp);
        }
        fputc(c,fp);
    }

    fclose(fp);
    fp = fopen("file.txt","r");

    if(fp == NULL)
    {
        printf("File not exist");
        exit(1);
    }

    ch=fgetc(fp);

    while(!feof(fp))
    {
        if(ch == '\n')
        {
            count++;
        }
        ch=fgetc(fp);
    }
    fclose(fp);
    printf("%d", count);
}
