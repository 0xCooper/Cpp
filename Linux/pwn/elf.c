//学习elf的案例
#include <stdio.h>
#include <stdlib.h>

int data[100] ={0};
int bss[100];

int main()
{
	int i=0;
	for(i=0; i<100; i++)
		bss[i] = i;
	printf("the bss[3]= %d\n", bss[3]);
    printf("我就不信了");
    system("readelf -h elfhead");
	return 0;

}