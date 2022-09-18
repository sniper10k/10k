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
//��ʼ��ͨѶ¼�ĺ���
void InitContact(struct Contact* ps);
//����һ��ͨѶ¼��Ϣ�ĺ���
void AddContact(struct Contact* ps);
//��ʾͨѶ¼��Ϣ�ĺ���
void ShowContact(const struct Contact* ps);
//ɾ���ƶ�����ϵ��
void DelContact(struct Contact* ps);
//�����ƶ��˵���Ϣ
void SearchContact(const struct Contact* ps);
//�޸�ָ����ϵ��
void ModifyContact(struct Contact* ps);
//����
void SortContact(struct Contact* ps);