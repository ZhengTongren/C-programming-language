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

//int main()
//{
//    char ch[100] = "i like beijing.";
//    
//    //scanf("%s", ch);
//    int len = My_strlen(ch);
//
//    //int len=strlen(ch);
//    //printf("%d", len);
//    
//    for(int i=len-1;i>0;i--)
//    {
//        if(ch[i]==' ')
//        {
//            for(int j=i+1;ch[j]!='\0' && ch[j]!=' ';j++)
//                printf("%c",ch[j]);
//            printf("%c",ch[i]);
//        }
//    }
//    if(ch[0]!=' ')
//        printf("%c\n",ch[0]);
//    return 0;
//}


//int main()
//{
//    char ch[100] = { 0 };
//
//    //scanf("%s", ch);
//    gets(ch);
//    int len = My_strlen(ch);
//
//    //int len=strlen(ch);
//    //printf("%d", len);
//
//    for (int i = len - 1; i > 0; i--)
//    {
//        if (ch[i] == ' ')
//        {
//            for (int j = i + 1; ch[j] != '\0' && ch[j] != ' '; j++)
//                printf("%c", ch[j]);
//            printf("%c", ch[i]);
//        }
//    }
//    if (ch[0] != ' ')
//        printf("%c\n", ch[0]);
//    return 0;
//}


#include <stdio.h>
int main()
{
    int i = 0;
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    for (i = 0; i <= 12; i++)
    {
        arr[i] = 0;
        printf("hello bit\n");
    }
    return 0;
}