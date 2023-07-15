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

//����һ����ϵ�˽ṹ
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;


//����ͨѶ¼

//��̬ 
//typedef struct Contact
//{
//	PeoInfo data[MAX];
//	int sz;
//}Contact;

//��̬
typedef struct Contact
{
	PeoInfo* data;
	int sz;
	int capacity;
}Contact;


//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//�����ϵ��
void AddContact(Contact* pc);

//��ʾ������ϵ��
void ShowContact(const Contact* pc);

//ɾ��ָ����ϵ��
void DelContact(Contact* pc);

//�޸�ָ����ϵ��
void ModifyContact(Contact* pc);

//����ָ����ϵ��
void SearchContact(const Contact* pc);

//ͨѶ¼����
void SortContact(const Contact* pc);