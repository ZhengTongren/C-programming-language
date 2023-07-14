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


//���͵�����
typedef struct PeoInfo
{
	char name[MAX_Name];
	int age;
	char sex[MAX_sex];
	char tele[MAX_Tele];
	char addr[MAX_Addr];
}PeoInfo;


//ͨѶ¼
typedef struct Contact
{
	PeoInfo data[MAX];
	int sz;
}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* con);