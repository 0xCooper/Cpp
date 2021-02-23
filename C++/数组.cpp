#include<stdio.h>
#include<string.h>

int add(int x,int y){
 return x+y;
};

int main(){
	int a=3,b=2;
	int c =0;
	c=add(a,b);
	printf("c: %d",c);
	printf("hello,world");
	char d[10]="hello\n";
	d[8]='a';
	d[9]='a';
	int num=strlen(d);
	printf("\n%d",num);

	return 0;	
}