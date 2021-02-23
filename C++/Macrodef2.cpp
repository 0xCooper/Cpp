/*
 * @Descripttion: ifdef的用法
 * @version: 
 * @Author: sueRimn
 * @Date: 2021-02-01 05:57:02
 * 
 
 * 
    #ifdef  宏名
    程序段1
    #else
    程序段2
    #endif
 */

#include <stdio.h>
#include <stdlib.h>
int main(){
    #ifdef _DEBUG
        printf("正在使用 Debug 模式编译程序...\n");
    #else
        printf("正在使用 Release 模式编译程序...\n");
    #endif
    system("pause");
    return 0;
}