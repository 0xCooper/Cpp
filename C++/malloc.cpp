#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* pInt;				/*定义整型指针*/
	pInt=(int*)malloc(sizeof(int));		/*分配内存*/
	*pInt=100;				/*使用分配内存*/
	printf("数值为:%d\n",*pInt);			/*输出显示数值*/
	free(pInt);				/*释放内存*/
	return 0;
}