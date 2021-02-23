#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student//��д�ṹ����������ΪSt
{
	char cName[10];  //������:����
	int iId;  //������:ѧ��
	int iScore;  //������:�ɼ�
	struct Student *next;  //ָ����һ����Ԫ�ص�ַ
}St;

St *head = NULL;  //ͷ���ȫ�ֱ���

St *CreatLink();  //������������������ͷ����ַ�ĺ���
void InsertNode(St *head);  //��������ͷ����ַ��׼�����������Ľڵ�λ��
void PrintLink(St *head);  //��ӡ����
int CountLink(St *head);  //��������Ԫ�ظ���

St *CreatLink()  //������������������ͷ����ַ�ĺ���
{
	St *head;  //ͷ�ڵ�
	St *left,*right;  //�ֱ�ָ����һ�ڵ�ͱ��ڵ��ָ��
	char tName[10];  //��ʱ�������
	int tId,tScore;  //��ʱ���ѧ�źͳɼ�
	head = (St *)malloc(sizeof(St));  //����ͷ���
	system("cls");
	left = head;  //��ͷ�ڵ��ַ������ǰ�ڵ�ָ��
	printf("����������ѧ�������ͳɼ�,ÿ�����ݼ��Կո�ָ�,������-1ʱ����¼��\n");  //��ʾ�û�����
	scanf("%d",&tId);
	while(tId != -1)  //��tId������-1�ͳ���¼������
	{
		right = (St *)malloc(sizeof(St));  //�������ڵ�
		scanf("%s",tName);
		scanf("%d",&tScore);
		getchar();
		right -> iId = tId;  //����ʱId��ֵ���ڵ�������Id
		strcpy(right -> cName,tName);  //����ʱ������ֵ���ڵ�����������
		right -> iScore = tScore;  //����ʱ�ɼ���ֵ���ڵ�������ɼ�
		left -> next = right;  //����һ�ڵ�ָ�򱾽ڵ�
		left = right;  //����һ�ڵ��ƶ������ڵ������һ��¼������
		scanf("%d",&tId);
	}
	
	left -> next = NULL;  //����������Ϣ¼��
	fflush(stdin);
	printf("�������ɹ�\n");
	getchar();
	fflush(stdin);
	system("cls");
	return head;//��������ͷ�ڵ��ַ
}

void InsertNode(St *head)  //��������ͷ����ַ��׼�����������Ľڵ�λ��
{

	int iCount = 0; //���ڼ���ڵ�λ��
	int InsertLocation;  //����λ��
	St *left,*right;  //ָ�����ڵ����һ�ڵ��ָ��
	St *InsertNode;  //�½�����������ݽڵ�ָ��
	if(head == NULL)
	{
		printf("������δ����,���س����ز˵�\n");
		getchar();
		fflush(stdin);
		system("cls");
		menu1();
	}
	system("cls");
	left = head;  //ָ��ͷ���
	right = head -> next;  //ָ���һ�����ݽڵ�
	printf("����������Ҫ���������Ľڵ�\n");
	scanf("%d",&InsertLocation);
	fflush(stdin);
	if(InsertLocation < 0)
	{
		printf("�Ƿ�����,�������ز˵�");
		getchar();
		fflush(stdin);
		system("cls");
		menu1();
	}
	InsertNode = (St *)malloc(sizeof(St));  //���½�ָ��ָ���½��ڵ�
	while(iCount < InsertLocation && left -> next != NULL)  //�ж��Ƿ��ƶ���ָ���ڵ㲢�жϲ���λ���Ƿ񳬳�������
	{
		iCount ++; //����
		left = right;  //ָ�����ڵ�
		right = right -> next;  //ָ�����ڵ����һ���ڵ�
	}
	if(iCount < InsertLocation || iCount < 0)
	{
		printf("��������Χ,����ʧ��\n");  //�жϲ���λ���Ƿ񳬳�����Χ
		getchar();
		system("cls");
		menu1();
	}
	else if(iCount == 0)	printf("�������뵽��һ��λ��\n");
	else printf("���ҵ���Ӧ�ڵ�,�������в������\n");
	printf("����������ѧ�������ͳɼ�,���ݼ��Կո�ָ�\n");  //��ʾ�û���������
	scanf("%d %s %d",&InsertNode -> iId,InsertNode -> cName,&InsertNode -> iScore);  
	left -> next = InsertNode;  // ����ǰ�ڵ�ָ�����ڵ��ַ
	InsertNode -> next = right;  //������ڵ�ָ����һ�ڵ��ַ
	printf("����ɹ�\n");
	getchar();
	fflush(stdin);
}

void PrintLink(St *head)  //��ӡ����
{
	if(head == NULL)  
	{
		printf("������δ����,���س����ز˵�\n");
		getchar();
		fflush(stdin);
		system("cls");
		menu1();
	}
	head = head -> next;  //ָ���һ�����ݽڵ�
	while(head != NULL)  //����ѭ��ֱ������һ�ڵ�
	{
		printf("%d %s %d\n",head -> iId,head -> cName,head -> iScore);  //��ӡ��������
		head = head -> next;  //ָ����һ�ڵ�
	}
}

int CountLink(St *head)  //��������Ԫ�ظ���
{

	int icount = 0;
	if(head == NULL)
	{
		printf("������δ����,���س����ز˵�\n");
		getchar();
		fflush(stdin);
		system("cls");
		menu1();
	}
	head = head -> next;  //ָ���һ�����ݽڵ�
	while(head != NULL)  //����ѭ��ֱ������һ�ڵ�
	{
		icount ++;  //����
		head = head -> next;  //ָ����һ�ڵ�
	}
	return icount;
}

int menu1()  //�˵���
{
	char choice;
LOOP:
	printf("��ӭʹ�ñ�����,��ѡ����Ҫ���еĲ���\n");
	printf("1.��������\n2.��ӡ����\n3.��������\n4.�˳�����\n");  //�˵�ѡ��
	choice = getchar();
	fflush(stdin);
	switch(choice)  //ִ�в���
	{
	case '1': 
		{
			head = CreatLink();
			goto LOOP;
		}
	case '2': 
		{
			system("cls");
			PrintLink(head);
			printf("���س����ز˵�\n");
			getchar();
			fflush(stdin);
			system("cls");
			goto LOOP;
		}
	case '3': 
		{
			system("cls");
			InsertNode(head); 
			printf("���س����ز˵�\n");
			getchar();
			fflush(stdin);
			system("cls");
			goto LOOP;
		}
	case '4': exit(0);
	default : 
		{
			printf("�������,����������\n");
			getchar();
			fflush(stdin);
			system("cls");
			goto LOOP;
		}
	}
	return 0;
}

void main()
{
	system("color 1F");
	menu1();	
}