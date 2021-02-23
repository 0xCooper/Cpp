/*
 * @Descripttion: 
 * @version: 
 * @Author: myc
 * @Date: 2021-01-22 18:44:12
 */
#include<stdio.h>
void bubblel(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
		for(j=0;j<n-1;j++)
		{
		if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}				
		}

}
void main(void)
{
	int i;
	int a[7]={15,45,25,35,10,2,28};
	bubblel(a,7);
	for(i=0;i<7;i++)
	{
		printf("%d\n",a[i]);
	}
}