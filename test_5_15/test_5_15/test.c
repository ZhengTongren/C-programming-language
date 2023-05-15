#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((a & (1 << i)) != (b & (1 << i)))
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//
//	return 0;
//}


#include<stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr1[16] = { 0 };
//	int arr2[16] = { 0 };
//	for (int i = 0; i < 32; i++)
//	{
//		if (i % 2 == 0)
//			arr1[i / 2] = n & (1 << i);
//		else
//		{
//			arr2[i / 2] = n & (1 << i);
//		}
//	}
//	for (int i = 0; i < 16; i++)
//		printf("%d ", arr1[i]);
//	printf("\n");
//	for (int i = 0; i < 16; i++)
//		printf("%d ", arr2[i]);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    //
//    return 0;
//}


//unsigned long pulArray[] = { 6,7,8,9,10 };
//unsigned long* pulPtr;//           12
//pulPtr = pulArray;
//*(pulPtr + 3) += 3;
//printf("%d,%d\n", *pulPtr, *(pulPtr + 3));


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

void Rev(char ch[],int len)
{
	int left = 0;
	int right = len - 1;

	while (left <= right)
	{
		char tmp = ch[left];
		ch[left] = ch[right];
		ch[right] = tmp;
		left++;
		right--;
	}
}

int my_strlen(char* ch)
{
	char* p = ch;
	while (*p)
	{
		p++;
	}
	return p - ch;
}

int main()
{
	char ch[20] = { 0 };
	scanf("%s", ch);
	int len = my_strlen(ch);
	//printf("%d", len);
	Rev(ch, len);
	printf("%s\n", ch);
	return 0;
}


