#include<stdio.h>
#define n 10
int main()
{
	int i,j,temp,a[n];
	printf("input ten data");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
	printf("%5d",a[i]);
	}
	printf("\n");
	return 0;

}