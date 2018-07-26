#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void read();
void write();
struct diary
{
    struct page
    {
        int date;
        char note[10000];
    }p[100];
    FILE *diary1;
}d;

int main()
{
    int i=1;
    int ch;

    while(i==1)
    {
    printf("\n\t\tMy DIARY!!!!\n");
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
    int i=0,k=0;
    char d1[1000];
    d.diary1=fopen("MY_DIARY.txt","r");
    if (d.diary1==NULL)
    {
        printf("UNABLE TO OPEN THE FILE!!!");
    }
    else
    {
        printf("\n which page you want to open!!");
        scanf("%d",&i);
        int k1;
        do
        {
            k1=0,k=0;
        fscanf(d.diary1,"%d%s",&d.p[i].date,d.p[i].note);
        while(d.p[i].note[k]!='\0')
        {
            if(d.p[i].note[k]==4)
            {
                if(d.p[i].note[k+1]==0)
                    {if(d.p[i].note[k+2]==8)
                        {
                            if(d.p[i].note[k+3]==0)
                            { k=k+3;
                                printf("\n");
                            }
                        }
                    }
           }

               printf("%c",d.p[i].note[k]);
               k++;
        }
        k1=strlen(d.p[i].note)-1;
        }while(d.p[i].note[k1]!='.');
    }
    fclose(d.diary1);
}

void write()
{
    int i,j=0,k=0;
    char d1[10000];
    d.diary1=fopen("MY_DIARY.txt","a");
    if(d.diary1==NULL)
    {
        printf("UNABLE TO OPEN THE FILE!!!");
    }
    else
    {
        printf("\non which page you want to write ");
        scanf("%d",&i);
        printf("\nENTER THE DATE ");
        scanf("%d",&d.p[i].date);
        while(d1[k]!='.')
        {
            gets(d1);
            int j1=0;
            fprintf(d.diary1,"%s",d1);
            fprintf(d.diary1,"%d",4080);
            k=strlen(d1)-1;
        }

    }
    fclose(d.diary1);
}

