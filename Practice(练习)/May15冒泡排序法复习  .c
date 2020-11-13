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
main()
{
	int i;
	int a[4]={15,45,25,35};
	bubblel(a,4);
	for(i=0;i<4;i++)
	{
		printf("%d\n",a[i]);
	}
}