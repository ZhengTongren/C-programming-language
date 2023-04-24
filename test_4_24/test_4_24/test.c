#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//我不太清除 字符串长度 和 sizeof(arr)/sizeof(arr[0]) 的关系了
//字符串长度 不能代表“有效”数组元素个数 '\n' 
//sizeof(arr)/sizeof(arr[0]) 用于计算

#include<string.h>
//
//int main()
//{
//    char arr[8000] = { 0 };
//    scanf("%s", arr);
//
//    long long len = sizeof(arr)/sizeof(arr[0]);
//    long long c = 0;
//    long long ch = 0;
//    long long chn = 0;
//
//    for (int i = 0; i < len; i++)
//    {
//        if (arr[i] == 'C')
//            c++;
//        else if (arr[i] == 'H')
//            ch += c;
//        else if (arr[i] == 'N')
//            chn += ch;
//    }
//    printf("%lld\n", chn);
//
//    return 0;
//}

//
//int main()
//{
//    float a = 0;
//    float b = 0;
//    float c = 0;
//    scanf("%f %f %f", &a, &b, &c);
//    float sum = a + b + c;
//    float ave = sum / 3;
//    printf("%.2f %.2f\n", sum, ave);
//    return 0;
//}


