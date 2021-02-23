/*C 库函数 int isupper(int c) 检查所传的字符是否是大写字母。

int isprint(int c)
该函数检查所传的字符是否是可打印的。
int islower(int c)
该函数检查所传的字符是否是小写字母。
int isalnum(int c)
该函数检查所传的字符是否是字母和数字。

*/
#include <stdio.h>
#include <ctype.h>

int main()
{
   char var1;
   scanf("%c",&var1);
   if( isupper(var1) )
   {
      printf("var1 = |%c| 是大写字母\n", var1 );
   }
   else
   {
      printf("var1 = |%c| 不是大写字母\n", var1 );
   }

   
   return(0);
}

