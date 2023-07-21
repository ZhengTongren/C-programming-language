#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	//5 1 2 3 4
//	//1 3 5 7 9 11 
//	long long mat_before = 0;
//	if (n > 1)
//		mat_before = (n - 1) * n / 2;
//	else
//		mat_before = n;
//
//	int count = 1;
//	for (int i = 1; i < mat_before; i++)
//	{
//
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int CountOdd(int n)
//{
//	int returnX = 1;
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			returnX += 2;
//		}
//	}
//	return returnX;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int x = CountOdd(n);
//
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d", x);
//		x += 2;
//		if (i < n - 1)
//			printf("+");
//	}
//	return 0;
// }



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a1 = 2;
//	int an = 2;
//	for (int i = 0; i < n - 1; i++)
//	{
//		an += 3;
//	}
//	long long sum = n * (a1 + an) / 2;
//	printf("%lld\n", sum);
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("data.txt", "w+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//
//	fprintf(pf, "abcdefg\n");
//	fputs("qwere\n", pf);
//
//	fseek(pf, 0, SEEK_SET);
//	fflush(pf);
//
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	/*fprintf(pf, "abcdefg\n");
//	fputs("qwere\n", pf);*/
//
//	/*fseek(pf, 0, SEEK_SET);
//	fflush(pf);*/
//
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	/*int pos = ftell(pf);
//	printf("%d\n", pos);*/
//
//	rewind(pf);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


