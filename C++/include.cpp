/*
 * @Descripttion: 
 * @version: 
 * @Author: sueRimn
 * @Date: 2021-02-01 22:59:22
 */

//用include包含其他文件
#include "ex2(this).cpp"

#include<stdio.h>


int main(int argc, char const *argv[])
{
    
    Student s={1,2,3,4};
    int r = s.plus();
    printf("%d",r);
    
    return 0;
}
