#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	float a1 = 0;
//	float b1 = 0;
//	float a2 = 0;
//	float b2 = 0;
//	scanf("%f %f %f %f", &a1, &b1, &a2, &b2);
//
//	// +
//	
//	if (a1 + a2 <= 0.1 && a1 + a2 >= -0.1 && b1 + b2 <= 0.1 && b1 + b2 >= -0.1)
//		printf("(%.1f+%.1fi) + (%.1f+%.1fi) = 0.0\n", a1, b1, a2, b2);
//	else if (a1 + a2 <= 0.1 && a1 + a2 >= -0.1)
//		printf("(%.1f+%.1fi) + (%.1f+%.1fi) = %.1fi\n", a1, b1, a2, b2, b1 + b2);
//	else if (b1 + b2 <= 0.1 && b1 + b2 >= -0.1)
//		printf("(%.1f+%.1fi) + (%.1f+%.1fi) = %.1f\n", a1, b1, a2, b2, a1 + a2);
//	else
//		printf("(%.1f+%.1fi) + (%.1f+%.1fi) = %.1f+%.1fi\n", a1, b1, a2, b2, a1 + a2, b1 + b2);
//	
//	// -
//	if (a1 - a2 <= 0.1 && a1 - a2 >= -0.1 && b1 - b2 >= -0.1 && b1 - b2 <= 0.1)
//		printf("(%.1f+%.1fi) - (%.1f+%.1fi) = 0.0\n", a1, b1, a2, b2);
//	else if (a1 - a2 <= 0.1 && a1 - a2 >= -0.1)
//		printf("(%.1f+%.1fi) - (%.1f+%.1fi) = %.1fi\n", a1, b1, a2, b2, b1 - b2);
//	else if (b1 - b2 >= -0.1 && b1 - b2 <= 0.1)
//		printf("(%.1f+%.1fi) - (%.1f+%.1fi) = %.1f\n", a1, b1, a2, b2, a1 - a2);
//	else
//		printf("(%.1f+%.1fi) - (%.1f+%.1fi) = %.1f+%.1fi\n", a1, b1, a2, b2, a1 - a2, b1 - b2);
//
//	//*
//	if (a1 * a2 - b1 * b2 <= 0.1 && a1 * a2 - b1 * b2 >= -0.1 && a1 * b2 + b1 * a2 <= 0.1 && a1 * b2 + b1 * a2 >= -0.1)
//		printf("(%.1f+%.1fi) * (%.1f+%.1fi) = 0.0\n", a1, b1, a2, b2);
//	else if (a1 * a2 - b1 * b2 <= 0.1 && a1 * a2 - b1 * b2 >= -0.1)
//		printf("(%.1f+%.1fi) * (%.1f+%.1fi) = %.1fi\n", a1, b1, a2, b2, a1 * b2 + b1 * a2);
//	else if (a1 * b2 + b1 * a2 <= 0.1 && a1 * b2 + b1 * a2 >= -0.1)
//		printf("(%.1f+%.1fi) * (%.1f+%.1fi) = %.1f\n", a1, b1, a2, b2, a1 * a2 - b1 * b2);
//	else
//		printf("(%.1f+%.1fi) * (%.1f+%.1fi) = %.1f+%.1fi\n", a1, b1, a2, b2, a1 * a2 - b1 * b2, a1 * b2 + b1 * a2);
//
//	// /
//	if (a1 * a2 + b1 * b2 >= -0.1 && a1 * a2 + b1 * b2 <= 0.1 && b1 * a2 - a1 * b2 >= -0.1 && b1 * a2 - a1 * b2 <= 0.1)
//		printf("(%.1f+%.1fi) / (%.1f+%.1fi) = 0.0\n", a1, b1, a2, b2);
//	else if (a1 * a2 + b1 * b2 >= -0.1 && a1 * a2 + b1 * b2 <= 0.1)
//		printf("(%.1f+%.1fi) / (%.1f+%.1fi) = %.1fi\n", a1, b1, a2, b2, (b1 * a2 - a1 * b2) / (a2 * a2 + b2 * b2));
//	else if (b1 * a2 - a1 * b2 >= -0.1 && b1 * a2 - a1 * b2 <= 0.1)
//		printf("(%.1f+%.1fi) / (%.1f+%.1fi) = %.1f\n", a1, b1, a2, b2, (a1 * a2 + b1 * b2) / (a2 * a2 + b2 * b2));
//	else
//		printf("(%.1f+%.1fi) / (%.1f+%.1fi) = %.1f+%.1f\n", a1, b1, a2, b2, (a1 * a2 + b1 * b2) / (a2 * a2 + b2 * b2), (b1 * a2 - a1 * b2) / (a2 * a2 + b2 * b2));
//	return 0;
//}


//int main()
//{
//	float a1 = 0.0f, b1 = 0.0f;
//	float a2 = 0.0f, b2 = 0.0f;
//	scanf("%f %f %f %f", &a1, &b1, &a2, &b2);
//
//	float a_sum = a1 + a2, b_sum = b1 + b2;
//	float a_de = a1 - a2, b_de = b1 - b2;
//	float a_mul = a1 * a2 - b1 * b2, b_mul = a1 * b2 + b1 * a2;
//	float a_div = (a1 * a2 + b1 * b2) / (a2 * a2 + b2 * b2), b_div = (b1 * a2 - a1 * b2) / (a2 * a2 + b2 * b2);
//
//	if(a_sum>-0.1&&a_sum<0.1&&b_sum>-0.1&&b_sum<0.1)
//		printf("(%.2f+%)")
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 1;
//	printf("%d%d=%d", +a, +b, a + b);
//	return 0;
//}


int main()
{

	return 0;
}