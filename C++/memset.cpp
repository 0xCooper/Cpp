/*
 * @Descripttion: memset函数
 * 
 * 描述
 * C 库函数 void *memset(void *str, int c, size_t n) 复制字符 c（一个无符号字符）到参数 str 所指向的字符串的前 n 个字符。
 * 声明
 * 下面是 memset() 函数的声明。
 * void *memset(void *str, int c, size_t n)
 * @version: 
 * @Author: myc
 * @Date: 2021-02-05 00:30:50
 */
#include <stdio.h>
#include <string.h>
 
int main ()
{
   char str[50];
 
   strcpy(str,"This is string.h library function");
   puts(str);
 
   memset(str,'$',7);
   puts(str);
   
   return(0);
}