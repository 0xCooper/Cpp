/*
该函数以无符号 char 强制转换为 int 的形式返回读取的字符，如果到达文件末尾或发生读错误，则返回 EOF。
*/
#include <stdio.h>

int main ()
{
   char c;
 
   printf("请输入字符：");
   c = getchar();
 
   printf("输入的字符：");
   putchar(c);
   printf("%c",c);
   return(0);
}