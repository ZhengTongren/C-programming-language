#define _CRT_SECURE_NO_WARNINGS 1


//#define INT_PTR int*
//
//INT_PTR a, b;
//
//int* a, b;



//
//#include <math.h>
//#include <stdio.h>
//
//int* printNumbers(int n, int* returnSize)
//{
//    *returnSize = pow(10, n) - 1;
//    int* arr = (int*)malloc(sizeof(int) * (*returnSize));
//
//    for (int i = 1; i <= *returnSize; i++)
//    {
//        arr[i - 1] = i;
//    }
//    return arr;
//}


//#include <stdio.h>
//
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int date = 0;
//    scanf("%d %d %d", &year, &month, &date);
//
//    int days = 0;
//    for (int i = 1; i < month; i++)
//    {
//        switch (i)
//        {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            days += 31;
//            break;
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            days += 30;
//            break;
//        case 2:
//            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//                days += 29;
//            else
//                days += 28;
//            break;
//        }
//    }
//    days += date;
//    printf("%d", days);
//    return 0;
//}


//int main()
//{
//	char ch1[20] = { 0 };
//
//	sprintf
//	return 0;
//}



//#include <stdio.h>
//
//struct S
//{
//	int a;
//	float f;
//};
//
//int main()
//{
//	struct S s = { 20,3.14f };
//	char ch1[20] = { 0 };
//
//	sprintf(ch1, "%d %f", s.a, s.f);
//	printf("%d %f\n", s.a, s.f);
//	return 0;
//}


//#include <stdio.h>
//
//struct S
//{
//	int a;
//	float f;
//};
//
//int main()
//{
//	struct S s = { 20,3.14f };
//	char ch1[20] = { 0 };
//
//	sprintf(ch1, "%d %f", s.a, s.f);
//	printf("%d %f\n", ch1);
//	return 0;
//}


//#include <stdio.h>
//
//
//struct S
//{
//	int a;
//	float f;
//};
//
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//
//	struct S s = { 10,4.14f };
//	fprintf(pf, "%d %f", s.a, s.f);
//	fprintf(stdout, "%d %f", s.a, s.f);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//#include <stdio.h>
//
//
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
//
//	struct S s = { 0 };
//	fscanf(pf, "%d %f", &(s.a), &(s.f));
//	
//	printf("%d %f", s.a, s.f);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//#include <stdio.h>
//
//struct S
//{
//	int a;
//	float f;
//	char c[20];
//};
//
//int main()
//{
//	struct S s = { 20, 3.14f, "abcdef" };
//	char ch1[20] = { 0 };
//	sprintf(ch1, "%d %f %s", s.a, s.f, s.c);
//
//	fprintf(stdout, "%s", ch1);
//	return 0;
//}


//#include <stdio.h>
//
//struct S
//{
//	int a;
//	float f;
//	char c[20];
//};
//
//int main()
//{
//	struct S s = { 20, 3.14f, "abcdef" };
//	char ch1[20] = { 0 };
//	sprintf(ch1, "%d %f %s", s.a, s.f, s.c);
//
//	struct S tmp = { 0 };
//	sscanf(ch1, "%d %f %s", &tmp.a, &tmp.f, tmp.c);
//
//	//fprintf(stdout, "%s", ch1);
//	fprintf(stdout, "%d %f %s", tmp.a, tmp.f, tmp.c);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	//这个思维及其重要
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//
//	return 0;
//}


