#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char InStr[10]="aabbab",c;
    int i,j,L,s=1,F[10]={3},NumStatesInF=1;
    L=strlen(InStr);
    i=0;
    while(i<L)
    {
        c=InStr[i];
        if(s==1)
        {
            if(c=='a')
            {
                i=i+1;
                s=2;
            }
            else
            {
                printf("String cannot be parsed");
                getch();
                return 0;
            }
        }
        else if(s==2)
        {
           if(c=='a')
           {
               i=i+1;
               s=2;
           }
           else if(c=='b')
           {
               i=i+1;
               s=3;
           }
           else
            {
                printf("String cannot be parsed");
                getch();
                return 0;
            }
        }
        else if(s==3)
        {
            if(c=='b')
           {
               i=i+1;
           }
           else if(c=='a')

           {
               i=i+1;
               s=2;
           }
        }
    }
    int Flag=0;
    for(j=0;j<NumStatesInF;j++)
        if(F[j]==s) Flag=1;
    if(Flag==1)
        printf("String parsed successfully");
    else printf("String can not be parsed");
    return 0;

}
