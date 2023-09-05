#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int fun(char* s)
{
	char* t = s;
	while (*t++);
	return (t - s);
}

int main()
{
	char ch[10] = "beijing";
	int ret = fun(ch);
	int sz = sizeof(ch);
	
	return 0;
}

