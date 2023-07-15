#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"


//��̬ 
//void InitContact(Contact* pc)
//{
//	assert(pc);
//	memset(pc->data, 0, sizeof(pc->data));
//	pc->sz = 0;
//}

//��̬
void InitContact(Contact* pc)
{
	assert(pc);
	pc->data = (PeoInfo*)malloc(sizeof(PeoInfo) * DEFAULT_SZ);
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
}


//��̬
//void AddContact(Contact* pc)
//{
//	assert(pc);
//
//	if (pc->sz == MAX)
//	{
//		printf("ͨѶ¼����\n");
//		return;
//	}
//	printf("����������:>");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("����������:>");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("�������Ա�:>");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("������绰:>");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("�������ַ:>");
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


//��̬
void AddContact(Contact* pc)
{
	assert(pc);

	int ret = CheckCapcity(pc);
	if (ret == 0)
	{
		perror("AddContact");
		return;
	}

	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	//��ӡ�б�ǩ
	printf("%-20s\t%s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	//��ӡ����
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
		printf("ͨѶ¼Ϊ�գ�ɾ��ʧ��\n");
		return;
	}

	char name[20] = { 0 };
	printf("������Ҫɾ����ϵ������:>");
	scanf("%s", name);

	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("δ�ҵ�ָ����ϵ��\n");
		return;
	}

	int i = 0;
	for (i = ret; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");
}


void menu2()
{
	printf("��ѡ��Ҫ�޸ĵ�����:>\n");
	printf("    1. ����    2. ����    3. �Ա�    \n");
	printf("    4. �绰    5. ��ַ    0. �˳�    \n");
}


void ModifyPeoInfo(PeoInfo* pc,int input)
{
	if (input == Name)
	{
		printf("����������:>");
		scanf("%s", pc->name);
	}
	else if (input == Age)
	{
		printf("����������:>");
		scanf("%d", &(pc->age));
	}
	else if (input == Sex)
	{
		printf("�������Ա�:>");
		scanf("%s", pc->sex);
	}
	else if (input == Tele)
	{
		printf("������绰:>");
		scanf("%s", pc->tele);
	}
	else if (input == Addr)
	{
		printf("�������ַ:>");
		scanf("%s", pc->addr);
	}
}


void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[20];
	printf("������Ҫ�޸���ϵ�˵�����:>");
	scanf("%s", name);

	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("δ�ҵ�ָ����ϵ��\n");
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
	//��ӡ�б�ǩ
	printf("%-20s\t%s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	//��ӡ����
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
	printf("������Ҫ���ҵ���ϵ������:>");
	scanf("%s", name);

	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("ָ����ϵ�˲�����\n");
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