#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
//int main()
//{
//	/*int age;
//	scanf("%d", &age);
//	if (age > 0 && age <= 200)
//	{
//		int s = age * 31560000;
//		printf("%d\n", s);
//	}
//	return 0;*/
//	//�����
//
//	int age,time=3156;
//	scanf("%d", &age);
//
//	if (age > 0 && age <= 200)
//	{
//		time = time * age;
//		printf("%d0000\n", time);
//	}
//	return 0;
//	
//}

//int main()
//{
//	int seconds, hour, min;
//	scanf("%d", &seconds);
//	hour = seconds / 3600;
//	min = (seconds - hour * 3600) / 60;
//	seconds = seconds - hour * 3600 - min * 60;
//
//	printf("%d %d %d\n", hour, min, seconds);
//
//	return 0;
//}

//int main()
//{
//	float score1, score2, score3;
//	scanf("%f%f%f", &score1, &score2, &score3);
//	float sum, average;
//	sum = score1 + score2 + score3;
//	average = sum / 3;
//	printf("%.2f %.2f\n", sum, average);
//	return 0;
//}

//int main()
//{
//	int weight, height;
//	scanf("%d%d", &weight, &height);
//	double BMI;
//	BMI = weight * 1.0 / (height * height) * 10000;
//	printf("%.2f\n", BMI);
//
//	return 0;
//}
#include<math.h>

//int main()
//{
//	float a, b, c;
//	scanf("%f%f%f", &a, &b, &c);
//	float cir = a + b + c;
//	double area,tri_angle;
//	tri_angle = (a * a + b * b - c * c) / (2 * a * b);
//	tri_angle = sqrt(1 - tri_angle * tri_angle);
//	area = 0.5 * a * b * tri_angle;
//	
//	printf("circumference=%.2f area=%.2f\n", cir, area);
//
//
//	return 0;
//}

//#define x 3.1415926*4/3
//int main()
//{
//	double r,V;
//	scanf("%lf", &r);
//
//	if (r >= 0 && r <= 15)
//	{
//		V =x* r * r * r;
//		printf("%.3f\n", V);
//	}
//	return 0;
//}

//int main()
//{
//	//char arr[200] = { 0 };
//	////arr = getchar();
//	////scanf("%c", &arr);
//	//int i = 0,n=0;
//	//while (arr[i])
//	//{
//	//	n++;
//	//	i++;
//	//}
//	//for (i = 0; i < n; i++)
//	//{
//	//	arr[i] += 32;
//	//	printf("%c\n", arr[i]);
//	//}
//
//	char ch = 0;
//	
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)//EOF��Ϊ-1������伴ֻҪ���������ַ����ɴ�ӡ
//    {
//        //��Ϊ�س�Ҳ��һ���ַ��������������һ���ַ����к�getchar���ȡ���еĻس���
//        //���еĻس�����ȡ������ֹ�س�����ȡ��������ǰ����ȡһ�����Ļس�
//        getchar();
//        putchar(ch + 32);
//        printf("\n");
//    }
//    return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		getchar();
//		putchar(ch+32);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n,h,m;
//	scanf("%d%d%d", &n,&h,&m);
//	if (m <= n * h)
//	{
//		//int s;
//		if (m % h > 0)
//			n = n - m / h - 1;
//		else
//			n = n - m / h;
//		printf("%d\n", n);
//	}
//	
//	return 0;
//}

//int f(int x)
//{
//	if (x > 0)
//		return -1;
//	if (x == 0)	// x==0 �� x=0 ��ȫ��ͬ������
//		return 0;
//	if (x < 0)
//		return 1;
//}
//int main()
//{
//	int x, y;
//	scanf("%d", &x);
//	y = f(x);
//	printf("%d\n", y);
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0 };
//	int i = 0,sum=0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	double ave = sum * 1.0 / 5;
//	printf("%.1f\n", ave);
//
//	return 0;
//}

//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	if (ch >= 65 && ch <= 91 || ch >= 97 && ch <= 123)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}

//int main()
//{
//	double wei, hei,BMI;
//	scanf("%lf%lf", &wei, &hei);// ��������� double ����ô %lf ���ǶԵģ�%f�Ǵ��
//	BMI = wei / (hei * hei);
//	if (BMI >= 18.5 && BMI <= 23.9)
//		printf("Normal\n");
//	else
//		printf("Abnormal\n");
//	return 0;
//}


//int main()
//{
//	//int arr[4] = { 0 };//�����������Ƿ���Է��븡������
//	//int i = 0;		 //����ò�Ҫ��ô��
//	double val;
//	int mon, date, tic;
//	scanf("%lf%d%d%d", &val, &mon, &date, &tic);
//	if (mon == 11)
//	{
//		val *= 0.7;
//		if (tic == 1)
//		{
//			val -= 50;
//			if (val > 0)
//				printf("%.2f\n", val);
//			else
//				printf("0.00\n");
//		}
//		else
//			printf("%.2f\n", val);
//	}
//	else if (mon  == 12)
//	{
//		val *= 0.8;
//		if (tic == 1)
//		{
//			val -= 50;
//			if (val > 0)
//				printf("%.2f\n", val);
//			else
//				printf("0.00\n");
//		}
//		else
//			printf("%.2f\n", val);
//	}
//	return 0;
//}

int main()
{
	int i = 10000;
	for (i = 10000; i <= 99999; i++)
	{
		int j = 10,sum=0;
		for (j = 10; j <= 10000; j=j * 10)// j*10 δ��ֵ �� j ���޷��ж��Ƿ� ��������ѭ��
		{
			sum += (i / j) * (i % j);
		}
		if (sum == i)
		{
			printf("%d ", sum);
		}
	}
	return 0;
}