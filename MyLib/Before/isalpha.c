//C 库函数 void isalpha(int c) 检查所传的字符是否是字母。
#include <stdio.h>
#include <ctype.h>

int main()
{
   char var1 ;
   int var2 = '2';
   int var3 = '\t';
   int var4 = ' ';
    scanf("%c",&var1);
   if( isalpha(var1) )
   {
      printf("var1 = |%c| 是一个字母\n", var1 );
   }
   else
   {
      printf("var1 = |%c| 不是一个字母\n", var1 );
   }
 
   
   return(0);
}