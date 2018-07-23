#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void read();
void write();

int main()
{
    int i=1;
    int ch;
    FILE *dairy;

    while(i==1)
    {
    printf("\n\t\tMy DAIRY!!!!\n");
    printf("1.READ\n2.WRITE\n3.EXIT");
    printf("\n\nEnter your choice!!");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        read();
        break;

    case 2:
        write();
        break;

    case 3:
        i=0;
        break;
    default:
        printf("Enter the choice properly!!");
        break;
    }
    }
}

void read()
{
    FILE *dairy;
    char d[10000];
    dairy=fopen("MY_DAIRY.txt","r");
    if (dairy==NULL)
    {
        printf("UNABLE TO OPEN THE FILE!!!");
    }
    else
    {
        while(fgets(d,1000,dairy)!=NULL)
        {
            puts(d);
        }
    }
    fclose(dairy);
}

void write()
{
    FILE *dairy;
    char d[10000];
    dairy=fopen("MY_DAIRY.txt","a");
    if(dairy==NULL)
    {
        printf("UNABLE TO OPEN THE FILE!!!");
    }
    while(strlen(gets(d))>0)
    {
        fputs(d,dairy);
    }
    fclose(dairy);
}
