#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//float round(float n)
//{
//	int tmp = 1000*n ;
//	//tmp = (tmp%100)%10.0%1.0%0.1%0.01;
//	//tmp = tmp % 10;
//	tmp = tmp % 10;
//	if (tmp >= 5)
//	{
//		n = +0.01;
//		return n;
//	}
//	else return n;
//}

//int main()
//{
//	double sub1=0.0,sub2=0.0,sub3=0.0;
//	int num;
//
//	scanf("%d;%lf,%lf,%lf", &num, &sub1, &sub2, &sub3);
//
//	/*sub1=round(sub1);
//	sub2=round(sub2);
//	sub3=round(sub3);*/
//
//
//	printf("The each subject score of No. %d is %.2lf, %.2lf, %.2lf.", num, sub1, sub2, sub3);
//	return 0;
//}


//sb提姆
//sb编译器
//
//int main() {
//    float sub1 = 0.0, sub2 = 0.0, sub3 = 0.0;
//    //int sub[3],i;
//    int num;
//    scanf("%d;%f,%f,%f", &num, &sub1, &sub2, &sub3);
//    /*
//    printf("The each subject score of No. %d is ",num);
//    if(sub1 )
//    {
//        int tmp = sub1 *1000;
//        //int i=0;
//        tmp=(tmp%10000)%1000%100%10;
//            if(tmp>=5&&tmp<10)
//            {
//                sub1=+0.01;
//                printf("%.2f, ",sub1);
//            }
//            else if(tmp<5)
//                printf("%.2f, ",sub1);
//
//
//    }
//    if(sub2 )
//    {
//        int tmp = sub2 *1000;
//        //int i=0;
//        tmp=(tmp%10000)%1000%100%10;
//            if(tmp>=5&&tmp<10)
//            {
//                sub2=+0.01;
//                printf("%.2f, ",sub2);
//            }
//            else if(tmp<5)
//                printf("%.2f, ",sub2);
//
//
//    }
//    if(sub3 )
//    {
//        int tmp = sub3 *1000;
//        //int i=0;
//        tmp=(tmp%10000)%1000%100%10;
//
//            if(tmp>=5&&tmp<10)
//            {
//                sub3=+0.01;
//                printf("%.2f.",sub3);
//            }
//            else if(tmp<5)
//                printf("%.2f.",sub3);
//
//
//    }
//    */
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", num, sub1, sub2, sub3);
//    return 0;
//}
//
//int main()
//{
//	char ch;
//	scanf("%c\n", &ch);
//
//	printf("    %c    \n", ch);
//	printf("   %c %c   \n", ch,ch);
//	printf("  %c %c %c  \n", ch,ch,ch);
//	printf(" %c %c %c %c \n", ch,ch,ch,ch);
//	printf("%c %c %c %c %c\n", ch,ch,ch,ch,ch);
//
//	return 0;
// 
//	//%.2f 自然会完成一次在小数点第三位取四舍五入，从而输出 完成的 两位小数
//	//不需要人为判断第三位小数与 5 的关系 再人为取舍
//}

//
//int main()
//{
//	//int time=0;// 20030506
//	//scanf("%d\n", &time);
//	int year,month,date;
//
//	scanf("%4d%2d%2d", &year, &month, &date);
//	//这里有个技巧 
//	//利用它 我可以把几个参数的多次赋值达成一次性赋完的效果
//
//
//
//
//	//data = time % 100;
//	//month = (time % 10000) / 100;
//	//year = (time - data - month) / 10000;
//	////count_ymd()
//	printf("year=%d\nmonth=%02d\ndate=%02d\n", year, month, date);
//	//%2d 如果你输入03 输出结果为" 3" ，3 前面有个空格
//	//%02d 则可以很好的达成目的 输入 03 输出03； 而输入 15 时 ，正常输出 15
//
//	return 0;
//}

//
//
//int main()
//{
//	int a, b;
//	/*printf("a=");
//	scanf("%d", &a);
//	printf(",b=");
//	scanf("%d\n", &b);*/
//	//scanf("%d,d\n", &a, &b);
//	 /*a = a ^ b;
//	 b = a ^ b;
//	 a = a ^ b;*/ // 错了
//	//等下要好好学
//	/*int tmp = a;
//	a = b;
//	b = tmp;*/
//
//	scanf("a=%d,b=%d", &a, &b); // 可以输入 a=1,b=2//这个以往不知道
//	int tmp = a;
//	a = b;
//	b = tmp;
//
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//
//	if (ch >= ' ')
//	{
//		int tmp = ch - ' ';
//		tmp = tmp + 32;
//		printf("%d\n", tmp);
//	}
//	else if (ch = '\n')
//		printf("10");
//	else if (ch = 'NUL')
//		printf("0");
//
//	/*if (ch >= 'A' && ch <= 'Z')
//	{
//		int tmp = ch - 'A';
//		tmp = +65;
//		printf("%d\n", tmp);
//	}
//
//	if (ch >= 'a' && ch <= 'z')
//	{
//		int tmp = ch - 'a';
//		tmp = +97;
//		printf("%d\n", ch);
//	}*/
//
//	return 0;
//}

//int main()
//{
//	int a = 40, c = 212;
//	printf("%d\n", (-8 + 22)*a - 10 + c/2);
//	return 0;
//}

//int main()
//{
//	int num1, num2, num3, num4;
//	scanf("%d%d", &num1, &num2);
//	if (num1 > 0 && num1 < 10000 && num2>0 && num2 < 10000)
//	{
//		num3 = num1 / num2;
//		num4 = num1 % num2;
//	}
//	printf("%d %d\n", num3, num4);
//	return 0;
//}

//int main()
//{
//	int i=1, num1,num2=0;
//	scanf("%d", &num1);
//	for (i = 0; i < 4; i++)
//	{
//		num2 = num2 + num1 % 10;
//		
//		num1 = num1 / 10;
//		if(num1<0)
//			{
//				i++;
//				break;
//			}num2 = num2 * 10;
//	}
//	
//	//输入 1234
//	//4 ; 123 ; 40
//	//43; 12 ;430
//	//432;1;4320
//	//4321;0;break
//	printf("%d", num2);
//	return 0;
//}
//
//int main()
//{
//	int num1;
//	scanf("%d", &num1);
//	while (num1)
//	{
//		printf("%d", num1 % 10);
//		num1 /= 10;
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int num1;
//	scanf("%d", &num1);
//	int i, tmp=0;
//	for (i = 0; i < 4; i++)
//	{
//		tmp = num1 % 10 + tmp*10;
//		num1 /= 10;
//	}
//	//4;123
//	//43;12
//	//432;1
//	//4321;0
//	printf("%d", tmp);
//	return 0;
//}

//int main()
//{
//	int num1, num2;
//	scanf("%d%d", &num1, &num2);
//	if(num1 >= 100)
//		num1 %= 100;
//	if (num2 >= 100)
//		num2 %= 100;
//	int sum = num1 + num2;
//	if (sum >= 100)
//		sum %= 100;
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	double num1=0.0;
//	scanf("%lf", &num1);
//	num1 = num1 - num1 / 1;
//	int i = 0,count=0;
//	while(num1)
//	{
//		count++;
//		num1 *= 10.0;
//		num1 =num1- num1/ 1;
//		if (num1 <= 0)
//			break;
//	}
//	printf("%d\n", count);
//	//13.00001 
//	//0.00001
//	//13.000
//	//0.100
//	return 0;
//}


int main()
{
	double num1;
	scanf("%lf", &num1);

	int tmp = num1 /1;
	tmp %= 10;

	printf("%d\n", tmp);
	return 0;
}