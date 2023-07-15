#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>


#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30


#define DEFAULT_SZ 3
#define INC_SZ 2

enum OPTION
{
	Exit,
	Add,
	Del,
	Modify,
	Search,
	Show,
	Sort
};


enum OPTION2
{
	Name = 1,
	Age,
	Sex,
	Tele,
	Addr
};

//定义一个联系人结构
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;


//定义通讯录

//静态 
//typedef struct Contact
//{
//	PeoInfo data[MAX];
//	int sz;
//}Contact;

//动态
typedef struct Contact
{
	PeoInfo* data;
	int sz;
	int capacity;
}Contact;


//初始化通讯录
void InitContact(Contact* pc);

//添加联系人
void AddContact(Contact* pc);

//显示所有联系人
void ShowContact(const Contact* pc);

//删除指定联系人
void DelContact(Contact* pc);

//修改指定联系人
void ModifyContact(Contact* pc);

//查找指定联系人
void SearchContact(const Contact* pc);

//通讯录排序
void SortContact(const Contact* pc);