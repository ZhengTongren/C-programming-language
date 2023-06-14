#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//void Left_shift(char ch1[], int len, int n)
//{
//	for (int j = 0; j < n; j++)
//	{
//		for (int i = 0; i < len - 1; i++)
//		{
//			char tmp = ch1[i];
//			ch1[i] = ch1[i + 1];
//			ch1[i + 1] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	char ch1[101] = { 0 };
//	gets(ch1);
//	int n = 0;
//	scanf("%d", &n);
//	int len = strlen(ch1);
//
//	Left_shift(ch1, len, n);
//
//	for (int i = 0; i < len; i++)
//		printf("%c", ch1[i]);
//	return 0;
//}





//void reverse(char ch[], int len)
//{
//	int left = 0;
//	int right = len - 1;
//
//	while (left < right)
//	{
//		char tmp = ch[left];
//		ch[left] = ch[right];
//		ch[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
////void Left_shift(char ch[], int len)
////{
////	for (int i = 0; i < len; i++)
////	{
////		char tmp = ch[i];
////		ch[i] = ch[i + 1];
////		ch[i + 1] = tmp;
////	}
////}
//
//void Delete(char ch[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		if (ch[i] == ' ')
//		{
//			if (ch[i + 1] == ' ')
//			{
//				ch[i] = '0';
//			}
//		}
//	}
//}
//
//int main()
//{
//	char ch[1000] = { 0 };
//	gets(ch);
//
//	int len = strlen(ch);
//	
//	Delete(ch, len);
//
//	reverse(ch, len);
//
//	char* start = ch;
//	char* end = ch;
//	while (*end != '\0')
//	{
//		while (*end != ' ' && *end != '\0')
//			end++;
//
//		reverse(start, end - start);
//		start = end + 1;
//
//		if (*start != '\0')
//			end = start;
//	}
//
//	for (int i = 0; i < len; i++)
//	{
//		if (ch[i] != '0')
//			printf("%c", ch[i]);
//	}
//	return 0;
//}


