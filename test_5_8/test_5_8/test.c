#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>



//
//#include <math.h>
//#include <stdio.h>
//
//#define N 3.1415926 
//int main()
//{
//	float r = 0;
//	scanf("%f", &r);
//	double V = 4.0 / 3 * N * r * r * r;
// 
//	// 4/3 计算结果为 1
//	// 4.0/3 计算结果为1.333...
// 
//	printf("%.3f\n", V);
//	return 0;
//}

//
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		getchar();
//		printf("%c\n", ch + 32);
//	}
//
//	return 0;
//}



//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch))
//	{
//		getchar();
//		printf("%c\n", ch + 32);
//		//A 65
//		//a 97
//	}
//	return 0;
//}

//
//int main()
//{
//    int n = 0;
//    //2^2 =4
//    //0000 0001
//    // << 1 *2
//    scanf("%d", &n);
//    int s = 1 << n;
//    printf("%d\n", s);
//
//    return 0;
//}



//int main()
//{
//	int n = 0;
//	int h = 0;
//	int m = 0;
//	int ret = 0;
//	while (scanf("%d %d %d", &n, &h, &m))
//	{
//		ret = n - m / h;
//
//		if (m % h != 0)
//		{
//			ret -= 1;
//		}
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int h = 0;
//	int m = 0;
//	while (scanf("%d %d %d", &n, &h, &m) == 3)
//	{
//		int ret = n - m / h;
//		if (m % h != 0)
//			ret -= 1;
//		printf("%d\n", ret);
//	}
//	return 0;
//}



//
//int main()
//{
//    printf("I lost my cellphone!\n");
//    return 0;
//}


//
//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man\n");
//
//    return 0;
//
//}

//
//int main()
//{
//	int n = 0;
//	int s = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &n);
//		s += n;
//	}
//	float ave = s / 5.0;
//	printf("%.1f\n", ave);
//	return 0;
//}


//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%x %o", &a, &b);
//    printf("%d\n", a + b);
//
//    return 0;
//}

//
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//	return 0;
//}

//
//int main()
//{
//	float w = 0;
//	float h = 0;
//	scanf("%f %f", &w, &h);
//
//	float BMI = w / (h * h);
//	if (BMI >= 18.5 && BMI <= 23.9)
//		printf("Normal\n");
//	else
//		printf("Abnormal\n");
//
//	return 0;
//}

//
//int main()
//{
//	float val = 0;
//	int m = 0;
//	int d = 0;
//	int p = 0;
//	scanf("%f %d %d %d", &val, &m, &d, &p);
//
//	if (11 == m)
//	{
//		val *= 0.7;
//	}
//	else
//	{
//		val *= 0.8;
//	}
//	if (1 == p)
//		val -= 50;
//	if (val > 0)
//		printf("%.2f\n", val);
//	else
//		printf("0.00\n");
//	return 0;
//}

//
//int Lily_Num(int n)
//{
//	int sum = 0;
//	for (int j = 10; j <= 10000; j *= 10)
//	{
//		sum += (n / j) * (n % j);
//	}
//	if (sum == n)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int a = Lily_Num(i);
//		if (a == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//
//void bubble_sort(int* arr, int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n - i - 1; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//}
//int main()
//{
//    int arr[50] = { 0 };
//    int n = 0;
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//
//    bubble_sort(arr, n);
//
//    for (int j = 0; j < 5; j++)
//        printf("%d ", arr[j]);
//    return 0;
//}

//
//int main()
//{
//    char ch[20] = { 0 };
//    scanf("%s", ch);
//    int count_a = 0;
//    int count_b = 0;
//    int len = sizeof(ch) / sizeof(ch[0]);
//
//    for (int i = 0; i < len - 1; i++)
//    {
//        if (ch[i] == 'A')
//            count_a++;
//        else if (ch[i] == 'B')
//            count_b++;
//    }
//
//    if (count_a > count_b)
//        printf("A\n");
//    else if (count_a == count_b)
//        printf("E\n");
//    else
//        printf("B\n");
//
//    return 0;
//}

//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		if (n >= 90 && n <= 100)
//			printf("Perfect\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		if (n >= 60)
//			printf("Pass\n");
//		else
//			printf("Fail\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		if (n % 2 == 0)
//			printf("Even\n");
//		else
//			printf("Odd\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	char ch = 0;
//	char v[10] = { 'A','a','E','e','I','i','O','o','U','u' };
//	while (scanf("%c", &ch) != EOF)
//	{
//		int n = 0;
//		getchar();
//		for (int i = 0; i < 10; i++)
//		{
//			if (ch == v[i])
//			{
//				n = 1;
//				break;
//			}
//		}
//		if (n == 1)
//			printf("Vowel\n");
//		else
//			printf("Consonant\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		getchar();
//		if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
//			printf("%C is an alphabet.\n", ch);
//		else
//			printf("%c is not an alphabet.\n", ch);
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		
//	}
//	return 0;
//}