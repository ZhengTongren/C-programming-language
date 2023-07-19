#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	FILE* pf = fopen("test.txt", "w+");
//
//	char ch1[20] = "abcdefg";
//	fputs(ch1, pf);
//	fflush(pf);
//	fseek(pf, 0, SEEK_SET);
//
//	char ch2[20] = { 0 };
//	fgets(ch2, 5, pf);
//	printf("%s\n", ch2);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//struct S
//{
//	int a;
//	float f;
//};

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//
//	struct S s = { 100,3.14f };
//
//	fprintf(pf, "% d % f", s.a, s.f);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//struct S
//{
//	int a;
//	float f;
//};
//
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	struct S s = { 0 };
//
//	fscanf(pf, "%d %f", &(s.a), &(s.f));
//	printf("%d %f\n", s.a, s.f);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


