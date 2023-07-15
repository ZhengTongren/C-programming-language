#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"


//静态 
//void InitContact(Contact* pc)
//{
//	assert(pc);
//	memset(pc->data, 0, sizeof(pc->data));
//	pc->sz = 0;
//}

//动态
void InitContact(Contact* pc)
{
	assert(pc);
	pc->data = (PeoInfo*)malloc(sizeof(PeoInfo) * DEFAULT_SZ);
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
}


//静态
//void AddContact(Contact* pc)
//{
//	assert(pc);
//
//	if (pc->sz == MAX)
//	{
//		printf("通讯录已满\n");
//		return;
//	}
//	printf("请输入姓名:>");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("请输入年龄:>");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("请输入性别:>");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("请输入电话:>");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("请输入地址:>");
//	scanf("%s", pc->data[pc->sz].addr);
//
//	pc->sz++;
//}


int CheckCapcity(Contact* pc)
{
	if (pc->capacity == pc->sz)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		
	}
}


//动态
void AddContact(Contact* pc)
{
	assert(pc);

	int ret = CheckCapcity(pc);
	if (ret == 0)
	{
		perror("AddContact");
		return;
	}

	printf("请输入姓名:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	//打印列标签
	printf("%-20s\t%s\t%-5s\t%-12s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	//打印数据
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%d\t%-5s\t%-12s\t%-30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}


int FindByName(const Contact* pc,const char* name)
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}


void DelContact(Contact* pc)
{
	assert(pc);

	if (pc->sz == 0)
	{
		printf("通讯录为空，删除失败\n");
		return;
	}

	char name[20] = { 0 };
	printf("请输入要删除联系人姓名:>");
	scanf("%s", name);

	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("未找到指定联系人\n");
		return;
	}

	int i = 0;
	for (i = ret; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}


void menu2()
{
	printf("请选择要修改的内容:>\n");
	printf("    1. 姓名    2. 年龄    3. 性别    \n");
	printf("    4. 电话    5. 地址    0. 退出    \n");
}


void ModifyPeoInfo(PeoInfo* pc,int input)
{
	if (input == Name)
	{
		printf("请输入姓名:>");
		scanf("%s", pc->name);
	}
	else if (input == Age)
	{
		printf("请输入年龄:>");
		scanf("%d", &(pc->age));
	}
	else if (input == Sex)
	{
		printf("请输入性别:>");
		scanf("%s", pc->sex);
	}
	else if (input == Tele)
	{
		printf("请输入电话:>");
		scanf("%s", pc->tele);
	}
	else if (input == Addr)
	{
		printf("请输入地址:>");
		scanf("%s", pc->addr);
	}
}


void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[20];
	printf("请输入要修改联系人的姓名:>");
	scanf("%s", name);

	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("未找到指定联系人\n");
		return;
	}

	int input2 = 0;
	do
	{
		menu2();
		scanf("%d", &input2);
		ModifyPeoInfo(&(pc->data[ret]), input2);
	} while (input2);
}


void PrintPeoInfo(const PeoInfo* pc)
{
	//打印列标签
	printf("%-20s\t%s\t%-5s\t%-12s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	//打印数据
	printf("%-20s\t%d\t%-5s\t%-12s\t%-30s\n",
		pc->name,
		pc->age,
		pc->sex,
		pc->tele,
		pc->addr);
 }


void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[20];
	printf("请输入要查找的联系人姓名:>");
	scanf("%s", name);

	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("指定联系人不存在\n");
		return;
	}
	PrintPeoInfo(&(pc->data[ret]));
}


int Compare(PeoInfo data1, PeoInfo data2)
{
	if (strcmp(data1.name, data2.name))
	{
		return 1;
	}
	return 0;
}


void SortContact(Contact* pc)
{
	int i = 0;
	for (i = 0; i < pc->sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < pc->sz - 1 - i; j++)
		{
			int ret = Compare(pc->data[j], pc->data[j + 1]);
			if (ret == 1)
			{
				PeoInfo tmp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = tmp;
			}
		}
	}
}