#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//
//int main()
//{
//	printf("Hello world!");
//	return 0;
//}
//
////main����Ϊ��������
////һ������������ֻ����һ��main����

////���� ��������
//
//	short		//������
//	int			//����
//	long		//������
//	long long	//����������



//#include<stdio.h>
//
//int main()
//{
//	char ch = 'W';
//
//	int a = 10;
//
//	float b = 3.14;
//
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//
//	long long b = 10000000000;
//
//
//	return 0;
//}

#include<stdio.h>
int main()
{
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));

	printf("%d\n", sizeof(char));

	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	return 0;
}