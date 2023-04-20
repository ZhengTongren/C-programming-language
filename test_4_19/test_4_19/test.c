#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<Windows.h>

//int main()
//{
//	char arr1[] = "Welcome to my world";
//	char arr2[] = "###################";
//
//	int sz = strlen(arr1);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		printf("\a");
//		Sleep(1000);
//		system("cls");
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}




//#include <stdio.h>

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    printf("%d", 1 << n);
//    return 0;
//}

//	i<<n
//	表示i的二进制表示形式，向左移动n位


//#include <stdio.h>
//
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);
//
//    int arr1[100][100] = { 0 };
//    int arr2[100][100] = { 0 };
//
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//            scanf("%d", &arr1[i][j]);
//    }
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//            scanf("%d", &arr2[i][j]);
//    }
//
//    int total = m * n;
//    int count = 0;
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (arr1[i][j] == arr2[i][j])
//                count++;
//        }
//    }
//    float s = count * 1.0 / total;
//    printf("%.2f\n", s * 100);
//    return 0;
//}


//int main()
//{
//    char arr1[20] = { 0 };
//    char arr2[20] = { 0 };
//
//    while (scanf("%s %s", arr1, arr2) != EOF)
//    {
//        if (strcmp(arr1, "admin") == 0 && strcmp(arr2, "admin") == 0)
//            printf("Login Success!\n");
//        else
//            printf("Login Fail!\n");
//    }
//    return 0;
//}


