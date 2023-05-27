#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int My_strlen(char ch[])
{
    int i = 0;
    while (ch[i])
    {
        i++;
    }
    return i;
}

int main()
{
    char ch[100] = "i like beijing.";
    
    //scanf("%s", ch);
    int len = My_strlen(ch);

    //int len=strlen(ch);
    //printf("%d", len);
    
    for(int i=len-1;i>0;i--)
    {
        if(ch[i]==' ')
        {
            for(int j=i+1;ch[j]!='\0' && ch[j]!=' ';j++)
                printf("%c",ch[j]);
            printf("%c",ch[i]);
        }
    }
    if(ch[0]!=' ')
        printf("%c\n",ch[0]);
    return 0;
}