#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>



//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//
//	*pc = 'c';
//	printf("%c\n", ch);
//	return 0;
//}

//
//int main()
//{
//	const char* pc = "abcedf";
//
//	printf("%s\n", pc);
//	printf("%c\n", *pc);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//
//	//str1 str2 Ϊ������ͬ���ַ�����
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//
//	// "hello bit." Ϊһ�������ַ���
//	// str1 �� str2 ��ָ������ַ���
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}
//


//
//// ָ������ģ��ʵ�ֶ�ά����
//
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//
//	int* arr[3] = {arr1, arr2, arr3};
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



// ������ ͨ����ʾ��Ԫ�صĵ�ַ
// �������⣺
// 1. sizeof(������) ��������������Ĵ�С
// 2. &������ ���� ȡ���� ����ĵ�ַ
//
//int main()
//{
//	int arr[10];
//	
//	printf("%p\n", arr); // int*
//	//arr ��ʾ��Ԫ�صĵ�ַ
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr[0]);// int*
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);//int(*)[10]
//	printf("%p\n", &arr + 1);
//	
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//����ָ��//���ͣ� int(*)[10]
//
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//*(&arr) --> arr
//
//	for (int i = 0; i < 10; i++)
//	{
//		//printf("%d ",  * ((*p) + i));
//		printf("%d ", (*p)[i]);
//
//	}
//
//	return 0;
//}
//
//



