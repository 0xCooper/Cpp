/*
 * @Descripttion: Control statement 封装一些控制语句 如循环，
 * @version: 
 * @Author: myc
 * @Date: 2021-02-03 02:49:17
 */

//重复执行一个函数多少次

#include<stdio.h>

//重复执行一函数固定次数
int repeat(int ( *ptr)(int ),int n)
{
    int i;
    int num=0;
    for ( i = 0; i < n; i++,num++)
    {
        ptr(num);
    }
    
    
    return 0;
}


//重复打印 (字符串，次数，结束符号)
int repeat(char const* str,int n,char const* end){


    for (int  i = 0; i < n; i++)
    {
        printf("%s",str);
        printf("%s",end);
    }
    printf("\n");
    
    
    return 0;
}


int print(int num){
    printf("hello ");
    printf("%d\n",num);
    return 0;
}


int main(int argc, char const *argv[])
{
    repeat(print,5);
    repeat("ha",5,"!!\n");
    return 0;
}
