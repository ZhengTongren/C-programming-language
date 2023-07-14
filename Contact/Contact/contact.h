#pragma once


#include <stdio.h>
#include <string.h>
#include <assert.h>


#define MAX 100
#define MAX_Name 20
#define MAX_sex 5
#define MAX_Tele 12
#define MAX_Addr 30

enum OPTION
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};


//类型的声明
typedef struct PeoInfo
{
	char name[MAX_Name];
	int age;
	char sex[MAX_sex];
	char tele[MAX_Tele];
	char addr[MAX_Addr];
}PeoInfo;


//通讯录
typedef struct Contact
{
	PeoInfo data[MAX];
	int sz;
}Contact;

//初始化通讯录
void InitContact(Contact* con);