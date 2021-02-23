/*
 * @Descripttion: 宏定义
 * @version: 
 * @Author: sueRimn
 * @Date: 2021-02-01 05:49:00
 * 
 * 
 * 
 * * if的一般用法
 * *  #if 整型常量表达式1
    程序段1
    #elif 整型常量表达式2
    程序段2
    #elif 整型常量表达式3
    程序段3
    #else
    程序段4
    #endif
 */

#include <stdio.h>
int main(){
    #if _WIN32
        system("color 0c");
        printf("using windows32\n");
    #elif __linux__
        printf("using linux\n");
    #else
        printf("not linux and not win32\n");
    #endif

    return 0;
}