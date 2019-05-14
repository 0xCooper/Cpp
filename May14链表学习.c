#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student//重写结构体数据类型为St
{
	char cName[10];  //数据项:姓名
	int iId;  //数据项:学号
	int iScore;  //数据项:成绩
	struct Student *next;  //指向下一数据元素地址
}St;

St *head = NULL;  //头结点全局变量

St *CreatLink();  //创建新链表并返回链表头部地址的函数
void InsertNode(St *head);  //传入链表头结点地址和准备插入在其后的节点位置
void PrintLink(St *head);  //打印链表
int CountLink(St *head);  //计数数据元素个数

St *CreatLink()  //创建新链表并返回链表头部地址的函数
{
	St *head;  //头节点
	St *left,*right;  //分别指向上一节点和本节点的指针
	char tName[10];  //临时存放姓名
	int tId,tScore;  //临时存放学号和成绩
	head = (St *)malloc(sizeof(St));  //创建头结点
	system("cls");
	left = head;  //将头节点地址赋给当前节点指针
	printf("请依次输入学号姓名和成绩,每项数据间以空格分隔,当输入-1时结束录入\n");  //提示用户输入
	scanf("%d",&tId);
	while(tId != -1)  //若tId不等于-1就持续录入数据
	{
		right = (St *)malloc(sizeof(St));  //创建本节点
		scanf("%s",tName);
		scanf("%d",&tScore);
		getchar();
		right -> iId = tId;  //将临时Id赋值给节点数据项Id
		strcpy(right -> cName,tName);  //将临时姓名赋值给节点数据项姓名
		right -> iScore = tScore;  //将临时成绩赋值给节点数据项成绩
		left -> next = right;  //让上一节点指向本节点
		left = right;  //让上一节点移动到本节点进行下一次录入数据
		scanf("%d",&tId);
	}
	
	left -> next = NULL;  //结束链表信息录入
	fflush(stdin);
	printf("链表创建成功\n");
	getchar();
	fflush(stdin);
	system("cls");
	return head;//返回链表头节点地址
}

void InsertNode(St *head)  //传入链表头结点地址和准备插入在其后的节点位置
{

	int iCount = 0; //用于计算节点位置
	int InsertLocation;  //插入位置
	St *left,*right;  //指向插入节点和下一节点的指针
	St *InsertNode;  //新建所插入的数据节点指针
	if(head == NULL)
	{
		printf("链表尚未创建,按回车返回菜单\n");
		getchar();
		fflush(stdin);
		system("cls");
		menu1();
	}
	system("cls");
	left = head;  //指向头结点
	right = head -> next;  //指向第一个数据节点
	printf("请输入你想要插入在其后的节点\n");
	scanf("%d",&InsertLocation);
	fflush(stdin);
	if(InsertLocation < 0)
	{
		printf("非法插入,即将返回菜单");
		getchar();
		fflush(stdin);
		system("cls");
		menu1();
	}
	InsertNode = (St *)malloc(sizeof(St));  //将新建指针指向新建节点
	while(iCount < InsertLocation && left -> next != NULL)  //判断是否移动到指定节点并判断插入位置是否超出链表长度
	{
		iCount ++; //计数
		left = right;  //指向插入节点
		right = right -> next;  //指向插入节点的下一个节点
	}
	if(iCount < InsertLocation || iCount < 0)
	{
		printf("超出链表范围,插入失败\n");  //判断插入位置是否超出链表范围
		getchar();
		system("cls");
		menu1();
	}
	else if(iCount == 0)	printf("即将插入到第一个位置\n");
	else printf("已找到对应节点,即将进行插入操作\n");
	printf("请依次输入学号姓名和成绩,数据间以空格分隔\n");  //提示用户输入数据
	scanf("%d %s %d",&InsertNode -> iId,InsertNode -> cName,&InsertNode -> iScore);  
	left -> next = InsertNode;  // 将当前节点指向插入节点地址
	InsertNode -> next = right;  //将插入节点指向下一节点地址
	printf("插入成功\n");
	getchar();
	fflush(stdin);
}

void PrintLink(St *head)  //打印链表
{
	if(head == NULL)  
	{
		printf("链表尚未创建,按回车返回菜单\n");
		getchar();
		fflush(stdin);
		system("cls");
		menu1();
	}
	head = head -> next;  //指向第一个数据节点
	while(head != NULL)  //持续循环直到无下一节点
	{
		printf("%d %s %d\n",head -> iId,head -> cName,head -> iScore);  //打印链表数据
		head = head -> next;  //指向下一节点
	}
}

int CountLink(St *head)  //计数数据元素个数
{

	int icount = 0;
	if(head == NULL)
	{
		printf("链表尚未创建,按回车返回菜单\n");
		getchar();
		fflush(stdin);
		system("cls");
		menu1();
	}
	head = head -> next;  //指向第一个数据节点
	while(head != NULL)  //持续循环直到无下一节点
	{
		icount ++;  //计数
		head = head -> next;  //指向下一节点
	}
	return icount;
}

int menu1()  //菜单栏
{
	char choice;
LOOP:
	printf("欢迎使用本程序,请选择你要进行的操作\n");
	printf("1.创建链表\n2.打印链表\n3.插入数据\n4.退出程序\n");  //菜单选项
	choice = getchar();
	fflush(stdin);
	switch(choice)  //执行操作
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
			printf("按回车返回菜单\n");
			getchar();
			fflush(stdin);
			system("cls");
			goto LOOP;
		}
	case '3': 
		{
			system("cls");
			InsertNode(head); 
			printf("按回车返回菜单\n");
			getchar();
			fflush(stdin);
			system("cls");
			goto LOOP;
		}
	case '4': exit(0);
	default : 
		{
			printf("输入错误,请重新输入\n");
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