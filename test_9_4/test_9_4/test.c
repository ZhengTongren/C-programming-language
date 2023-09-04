#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//    long long n, k;
//    scanf("%d %d", &n, &k);
//    int count = 0;
//    for (long long y = k + 1; y <= n; y++)
//    {
//        for (long long x = k; x <= n; x++)
//        {
//            int rem =
//        }
//    }
//    return 0;
//}


//int main()
//{
//    long long n, k;
//    scanf("%lld %lld", &n, &k);
//    long long count = 0;
//    for (long long y = k + 1; y <= n; y++)
//    {
//        long long rem = (n % y < k) ? 0 : (n % y - k + 1);
//        count += (n / y) * (y - k) + rem;
//    }
//    printf("%lld\n", count);
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    long long n, k;
//    scanf("%lld %lld", &n, &k);
//    long long count = 0;
//    if (k == 0)
//    {
//        count = n * n;
//    }
//    else
//    {
//        for (long long y = k + 1; y <= n; y++)
//        {
//            long long rem = (n % y < k) ? 0 : (n % y - k + 1);
//            count += (n / y) * (y - k) + rem;
//        }
//    }
//    printf("%lld\n", count);
//    return 0;
//}

//
//int findPeakElement(int* nums, int numsLen) {
//    // write code here
//    int left = 0;
//    int right = numsLen - 1;
//    while (left < right)
//    {
//        int mid = (left + right) / 2;
//        if (nums[mid + 1] > nums[mid])
//        {
//            left = mid + 1;
//        }
//        else if (nums[mid] > nums[mid + 1])
//        {
//            right = mid;
//        }
//    }
//    return left;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int ret = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        int tmp = 0;
//        scanf("%d", &tmp);
//        ret ^= tmp;
//    }
//    printf("%d", ret);
//    return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//
//
//void reverse(char* ch, int len)
//{
//    int left = 0;
//    int right = len - 1;
//    while (left < right)
//    {
//        char tmp = ch[left];
//        ch[left] = ch[right];
//        ch[right] = tmp;
//
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char ch[10001] = { 0 };
//    gets(ch);
//    int len = strlen(ch);
//    reverse(ch, len);
//
//    int start = 0;
//    int end = 0;
//    while (ch[end] != '\0')
//    {
//        while (ch[end] != ' ' && ch[end] != '\0')
//            end++;
//        reverse(ch + start, end - start);
//        if (ch[end] != '\0')
//        {
//            start = end + 1;
//            end = start;
//        }
//    }
//    for (int i = 0; i < len; i++)
//    {
//        if ((ch[i] >= 'A' && ch[i] <= 'Z') ||
//            (ch[i] >= 'a' && ch[i] <= 'z'))
//        {
//            printf("%c", ch[i]);
//        }
//        else
//        {
//            printf(" ");
//        }
//    }
//    return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//
//
//void reverse(char* ch, int len)
//{
//    int left = 0;
//    int right = len - 1;
//    while (left < right)
//    {
//        char tmp = ch[left];
//        ch[left] = ch[right];
//        ch[right] = tmp;
//
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char ch[10001] = { 0 };
//    gets(ch);
//    int len = strlen(ch);
//    reverse(ch, len);
//
//    int start = 0;
//    int end = 0;
//    while (ch[end] != '\0')
//    {
//        while ((ch[end] >= 'A' && ch[end] <= 'Z') || (ch[end] >= 'a' && ch[end] <= 'z'))
//            end++;
//        reverse(ch + start, end - start);
//        if (ch[end] != '\0')
//        {
//            start = end + 1;
//            end = start;
//        }
//    }
//    for (int i = 0; i < len; i++)
//    {
//        if ((ch[i] >= 'A' && ch[i] <= 'Z') ||
//            (ch[i] >= 'a' && ch[i] <= 'z'))
//        {
//            printf("%c", ch[i]);
//        }
//        else
//        {
//            printf(" ");
//        }
//    }
//    return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//
//int fun(char* s)
//{
//	char* t = s;
//	while (*t++);
//	return (t - s);
//}
//
//int main()
//{
//	char ch[20] = "i like beijing.";
//
//	int ret = fun(ch);
//	int len = strlen(ch);
//	return 0;
//}


