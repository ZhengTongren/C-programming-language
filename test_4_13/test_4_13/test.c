#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	
//	return 0;
//}


//int main()
//{
//
//	return 0;
//}


//int main()
//{
//	int h = 0;
//	int m = 0;
//	int k = 0;
//	scanf("%d:%d %d", &h, &m, &k);
//	int h2 = (h + (m + k) / 60) % 24;
//	int m2 = (m + k) % 60;
//
//	printf("%02d:%02d\n", h2, m2);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	printf("%d\n", i);
//	printf("%2d\n", i);
//	printf("%02d\n", i);
//	return 0;
//}


//#include <stdio.h>
//
//
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//
//	printf("%d\n", ch);//�����ϣ��ַ�����ASCII����д洢
//	return 0;
//}


//int main()
//{
//	int n = 10;
//	int arr[n] = { 10 };// ������ ������C99ǰ����C99�� ���Ǵ����
//	//C99��׼�� �����˱䳤����ĸ���
//	//���� �����Զ� �䳤������и�ֵ
//	return 0;
//}

//struct s
//{
//	char name[5];
//	int age;
//	int num;
//};
//
//void print1(struct s t)
//{
//	printf("%s %d %d\n", t.name, t.age, t.num);
//}
//void print2(struct s* t)
//{
//	printf("%s %d %d\n", t->name, t->age, t->num);
//}
//
//int main()
//{
//	struct s s1 = { "�ŷ�",20,20222};
//	print1(s1);
//	print2(&s1);
//	return 0;
//}


//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = max(a, b);
//	printf("%d\n", m);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int min = (n / 12) * 4 + 2;
//	printf("%d\n", min);
//
//	return 0;
//}


//int main()
//{
//	int n = printf("Hello world!");//12
//	int n2 = printf("Hello world!\n");//13
//	//printf �ķ���ֵ Ϊ�ַ����ĳ���  '\n' Ϊһ���ַ�
//	printf("%d\n", n);
//	printf("%d\n", n2);
//	return 0;
//}


int main()
{
	double i, j, k;
	while (scanf("%lf%lf%lf", &i, &j, &k) != EOF)
	{
		if (i + j > k && i + k > j && j + k > i)
		{
			if (i == j && j == k)
				printf("Equilateral triangle!\n");
			else if ((i == j && j != k) || (i == k && k != j) || (j == k && i != k))
				printf("Isosceles triangle!\n");
			else
				printf("Ordinary triangle!\n");
		}
		else
			printf("Not a triangle!\n");

	}
	return 0;
}