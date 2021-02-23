/*
 * @Descripttion: 回调函数的简单列子 /Callback Function
 * @version: 
 * @Author: sueRimn
 * @Date: 2021-02-01 20:41:42
 */
#include<stdio.h>
void fun( int (* fun1)(void)){

	fun1();

}
int fun1(void){

printf("helloworld");
return 0;
}
int fun2(void){

printf("happy new year");
return 0;
}
int main(int argc, char const *argv[])
{
    //可以看到我们可以用一个在一个函数中去调用例外一个函数，通过回调函数可以提高扩展性
    printf("调用函数1   ");
    fun(fun1);
    printf("\n调用函数2   ");
    fun(fun2);
    return 0;
}
