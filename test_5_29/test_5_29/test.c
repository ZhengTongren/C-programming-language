#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<limits.h>

typedef float ElementType;
#define MAX 10

//ElementType Max(ElementType arr[], int n)
//{
//	ElementType max = INT_MIN;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	return max;
//}
//
//int main()
//{
//	ElementType arr[MAX] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%f", &arr[i]);
//	ElementType m = Max(arr, n);
//	printf("%.2f\n", m);
//	return 0;
//}


//int main()
//{
//	long long a = 0;
//	long long b = 0;
//	scanf("%lld %lld", &a, &b);
//	long long s = 0;
//	for (int i = 1;; i++)
//	{
//		if (i * a % b == 0)
//		{
//			s = i * a;
//			break;
//		}
//	}
//	printf("%lld\n", s);
//	return 0;
//}

#include<string.h>

void reverse(char* start, char* cur)
{
	while (start < cur)
	{
		int tmp = *start;
		*start = *cur;
		*cur = tmp;
		start++;
		cur--;
	}
}

int main()
{
	char ch[101] = { 0 };
	fgets(ch, 100, stdin);
	int len = strlen(ch);

	reverse(ch, ch + len - 1);

	char* start = ch;
	char* cur = start;
	while (*cur)
	{
		while (*cur != ' ' && *cur != '\0')
		{
			cur++;
		}
		reverse(start, cur);
		start = cur + 1;
		if (*cur != '\0')
			cur++;
	}
	printf("%s\n", ch);
	return 0;
}