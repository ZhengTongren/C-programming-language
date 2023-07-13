#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//int main()
//{
//	srand(time(NULL));
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", rand() % 2);
//	}
//	return 0;
//}


//int main()
//{
//
//	printf("%d\n", sizeof(short));
//	return 0;
//}



//union Un
//{
//	short s[7];
//	int n;
//};
//
//int main()
//{
//	printf("%d", sizeof(union Un));
//	return 0;
//}


//typedef struct {
//	int a;
//	char b;
//	short c;
//	short d;
//}AA_t;


#include<stdlib.h>

//#define MAX_SIZE 2+3
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//
//int main()
//{
//	struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);
//	printf("%d\n", sizeof(pointer));
//	return 0;
//}


#include <stdio.h>
#include <string.h>

//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	puts(str);
//	return 0;
//}


//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }*pstPimData;
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}


//union Un
//{
//	short s[7];//14 2 8 2
//	int n;//4 4 8 4
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));//14 + 2 = 16 
//	return 0;
//}


////有如下宏定义和结构定义
//
//#define MAX_SIZE 5
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//
//int main()
//{
//	struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);
//
//	return 0;
//}
////当A = 2， B = 3时，pointer分配（ ）个字节的空间。


//在X86下，小端字节序存储，有下列程序

//#include<stdio.h>
//int main()
//{
//    int b = 0x11223344;
//    char* pb = &b;
//    *pb = 0;
//    union
//    {
//        short k;//2 2 8 2 
//        char i[2];//2 1 8 1
//    }*s, a;
//    //
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("%x\n", a.k);
//    return 0;
//}


//输出结果是

//
//int main()
//{
//   
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }*pstPimData;
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;//011
//    pstPimData->ucData1 = 4;//100
//    pstPimData->ucData2 = 5;//101
//    //00101001
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}


