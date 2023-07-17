#define _CRT_SECURE_NO_WARNINGS 1

//struct S
//{
//	int a;
//	int arr[0];
//};
//
//int main()
//{
//	struct S s;
//	return 0;
//}


//struct S
//{
//	int a;
//	int arr[];
//};
//
//int main()
//{
//	struct S s;
//	return 0;
//}


#include <stdio.h>
#include <limits.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = i + 1; j < sz; j++)
//		{
//			if (arr[i] != INT_MIN)
//			{
//				if (arr[j] == arr[i])
//				{
//					arr[i] = INT_MIN;
//					arr[j] = INT_MIN;
//					break;
//				}
//			}
//		}
//		if (arr[i] != INT_MIN)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}


//int my_strlen(const char* a)
//{
//	int len = 0;
//	while (*(a+len))
//	{
//		len++;
//	}
//	return len;
//}
//
//int my_strcmp(const char* a,const char* b)
//{
//	int l1 = my_strlen(a);
//	int l2 = my_strlen(b);
//
//	int len2 = l1 > l2 ? l1 : l2;
//	for (int i = 0; i < len2; i++)
//	{
//		if (a[i] > b[i])
//			return 1;
//		else if (a[i] < b[i])
//			return -1;
//	}
//	return 0;
//}
//
//int main()
//{
//	char c1[20] = { 0 };
//	char c2[20] = { 0 };
//	gets(c1);
//	gets(c2);
//
//
//	if (0 == my_strcmp(c1, c2))
//	{
//		printf("c1 is same to c2\n");
//	}
//	else if (my_strcmp(c1, c2) > 0)
//	{
//		printf("c1 is more than c2\n");
//	}
//	else if (my_strcmp(c1, c2) < 0)
//	{
//		printf("c1 is less than c2\n");
//	}
//
//	
//	return 0;
//}


#include <stdlib.h>
#include <string.h>

//int my_strlen(const char* a)
//{
//	int len = 0;
//	while (*(a+len))
//	{
//		len++;
//	}
//	return len;
//}
//
//char* my_strncat(char* d, char* s, int num)
//{
//	int len1 = my_strlen(*d);
//
//	int len2 = my_strlen(s);
//	len2 = len2 < num ? len2 : num;
//
//	char** ptr = (char**)malloc(len2 + len1 + 1);
//	if (NULL == ptr)
//	{
//		perror("realloc");
//		return;
//	}
//	for (int i = 0; i < len1; i++)
//	{
//		ptr[i] = d[i];
//	}
//	for (int i = 0; i < len2; i++)
//	{
//		ptr[len1 + i] = s[i];
//	}
//	ptr[len2 + len1] = '\0';
//	d = ptr;
//	ptr = NULL;
//	return d;
//}
//
//int main()
//{
//	char d[] = "abcd";
//	char s[] = "efg";
//	my_strncat(d, s, 5);
//	printf("%s\n", d);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	strncat(str1, str2, 6);
//	puts(str1);
//	return 0;
//}


//int main()
//{
//	char* a = NULL;
//	char b[] = "abcdef";
//	a = b;
//	printf("%s", a);
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	for (int i = 0; i < 26; i++)
//	{
//		fputc('a' + i, pf);
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fputs("abcedef\n", pf);
//	fputs("I am going to SpaceX.\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


#include <string.h>


//char* my_strncat(char* dest, const char* src, int n)
//{
//	int len = strlen(dest);
//	int i = 0;
//	
//	for (int i = 0; i < n; i++)
//	{
//		*(dest + len + i) = *(src + i);
//	}
//	*(dest + len + n) = '\0';
//	return dest;
//
//}
//
//
//int main()
//{
//	char a[] = "i like ";
//	char b[] = "beijing.";
//	my_strncat(a, b, 5);
//	printf("%s", a);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>


//char* Strncat(char* str1, const char* str2, int size) {
//	int n = strlen(str1);
//	int i = 0;
//	while (*(str1 + n + i) = *(str2 + i)) 
//	{
//		str1++;
//		str2++;
//
//		if (i == size) {
//			*(str1 + n + i) = 0;
//			break;
//		}
//	}
//	return str1;
//}
//int main() {
//	char str1[12] = "abcde";
//	char str2[] = "fghijk";
//	printf("str1为:\n%s\n", str1);
//	printf("str2为:\n%s\n", str2);
//	Strncat(str1, str2, 6);
//	printf("str1连接str2后为:\n%s\n", str1);
//	system("pause");
//	return 0;
//}


//char* my_strncat(char* dest, const char* src, int n)
//{
//	int len1 = strlen(dest);
//	int len2 = strlen(src);
//
//	int i = 0;
//	
//	for (int i = 0; i < n; i++)
//	{
//		*(dest + len1 + i) = *(src + i);
//	}
//	*(dest + len1 + n) = '\0';
//	return dest;
//}
//
//
//int main()
//{
//	char a[20] = "i like ";
//	char b[20] = "beijing.";
//	my_strncat(a, b, 5);
//	printf("%s", a);
//	return 0;
//}


