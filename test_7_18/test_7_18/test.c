#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <stdlib.h>


//struct S
//{
//	int n;
//	int arr[];
//};
//
//int main()
//{
//	struct S s = { 0 };
//	struct S* pa = (struct S*)malloc(sizeof(struct S) + 40);
//	pa->n = 100;
//	for (int i = 0; i < 10; i++)
//	{
//		pa->arr[i] = i + 1;
//	}
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "wb");
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
//	FILE* pf = fopen("test.txt", "rb");
//
//	/*for (int i = 0; i < 26; i++)
//	{
//		fputc(pf);
//	}*/
//
//
//	char ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//
//	fputs("hello world\n", pf);
//	fputs("to be powerful\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//
//	char ch1[10] = { 0 };
//	char ch2[10] = { 0 };
//
//	fgets(ch1, 10, pf);
//	fgets(ch2, 10, pf);
//	printf("%s\n", ch1);
//	printf("%s\n", ch2);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	char ch1[10] = "abcdefg";
//	FILE* pf = fopen("test.txt", "w+");
//	
//	fputs(ch1, pf);
//
//
//	char ch2[10] = { 0 };
//	fgets(ch2, 5, pf);
//	printf("%s\n", ch2);
//	return 0;
//}


//int main()
//{
//	//FILE* pf = fopen("test.txt", "w+");
//	FILE* pf = fopen("test.txt", "r");
//
//
//
//	/*char ch1[20] = "abcdefg";
//	fputs(ch1, pf);*/
//
//	char ch2[20] = { 0 };
//	fgets(ch2, 5, pf);
//	printf("%s", ch2);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


