

#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("F:\\filetest.txt","rt+");
	/*filetest is a test file I create in my computer*/
	if(fp==NULL)
	{
		printf("error on open this file f:\filetext");
		getch();
		exit(1);
	}
	/*getchar one by one*/
	ch=fgetc(fp);
	while(ch!=EOF)
	{
	putchar(ch);
	ch=fgetc(fp);
	}
	fclose(fp);
	return 0;
}