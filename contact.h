#define _CRT_SECURE_NO_WARNINGS 1

#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
struct Contact
{
	struct PeoInfo data[MAX];
	int size;
};
//初始化通讯录的函数
void InitContact(struct Contact* ps);
//增加一个通讯录信息的函数
void AddContact(struct Contact* ps);
//显示通讯录信息的函数
void ShowContact(const struct Contact* ps);
//删除制定的联系人
void DelContact(struct Contact* ps);
//查找制定人的信息
void SearchContact(const struct Contact* ps);
//修改指定联系人
void ModifyContact(struct Contact* ps);
//排序
void SortContact(struct Contact* ps);