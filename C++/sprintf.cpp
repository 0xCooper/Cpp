/*
 * @Author: your name
 * @Date: 2021-01-30 22:29:23
 * @LastEditTime: 2021-01-31 14:46:44
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /Python/home/slime/桌面/CodeStation/Cpp/c++(逆向示例)/sprintf.cpp
 */
#include <stdio.h>
int main()
{
   char str[80];
    int i=10;
   sprintf(str, "i 的值 = %d",i );
   puts(str);//puts将字符串输出到屏幕
   return 0;
}