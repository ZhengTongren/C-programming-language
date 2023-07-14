#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct
//{
//    int a;
//    char c;
//    float f;
//}a;
//
//struct
//{
//    int a;
//    char c;
//    float f;
//}*pa;
//
//int main()
//{
//    pa = &a;
//    return 0;
//}


//typedef struct Node
//{
//    int data;
//     struct Node* next;
//}Node;
//
//int main()
//{
//    return 0;
//}


//struct Stu
//{
//    char name[20];
//    char sex[5];
//    int age;
//}s1 = { "ZhangSan","ÄÐ",20 }, s2 = { .age = 30,.sex = "Å®" , .name = "´ä»¨" };


//struct Point
//{
//    int x;
//    int y;
//}p1;
//
//struct Node
//{
//    int data;
//    struct Point p;
//    struct Node* next;
//}n1 = { 20,{1,2},NULL };
//
//
//int main()
//{
//    return 0;
//}


//struct S1
//{
//	char c1;
//	char c2;
//	int a;
//	float f;
//};
//
//struct S2
//{
//	char c1;
//	int a;
//	char c2;
//	float f;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	return;
//}


//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}


//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}


//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}


//enum Color
//{
//	Red,
//	Green,
//	Blue
//};
//
//int main()
//{
//	enum Color col = Red;
//
//	col = 5;
//	return 0;
//}


//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un un;
//	printf("%d", sizeof(un));
//	return 0;
//}\


//union Un
//{
//	char c;
//	int i;
//};

//int main()
//{
//	union Un un;
//	printf("%#x\n", &un.c);
//	printf("%#x\n", &un.i);
//
//
//	return 0;
//}


//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un un;
//	un.i = 0x11223344;
//	un.c = 0x55;
//
//	printf("%#x", un.i);
//	return 0;
//}


//union Un1
//{
//	char c[5];
//	int i;
//};
//union Un2
//{
//	short c[7];
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un1));
//	printf("%d\n", sizeof(union Un2));
//	return 0;
//}


