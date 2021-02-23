/*
 * @Author: your name
 * @Date: 2021-02-01 05:14:34
 * @LastEditTime: 2021-02-01 05:14:44
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /home/slime/桌面/CodeStation/Cpp/c++(逆向示例)/gets.cpp
 */
# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    char str[20] = "\0";  //字符数组初始化\0
    printf("请输入字符串：");
    gets(str);
    printf("%s\n", str);
    return 0;
}