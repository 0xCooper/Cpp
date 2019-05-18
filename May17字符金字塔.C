#include<stdio.h>
#define n 8//½ğ×ÖËşµÄ²ãÊı
main()
{
	int i,j,k;
for(i=0;i<n;i++)
{
	for(j=0;j<10-i;j++) printf(" ");
	for(k=0;k<i+1;k++) printf("* ");//*+" "
	printf("\n");
}


}