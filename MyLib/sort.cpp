/*
 * @Descripttion: 
 * @version: 
 * @Author: myc
 * @Date: 2021-02-03 02:33:02
 */

//冒泡排序
void bsort(int a[],int n)
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