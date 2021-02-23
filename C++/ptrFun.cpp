/*
 * @Descripttion: 指针函数，可用于反调试与函数回调
 * @version: 
 * @Author: myc
 * @Date: 2021-01-30 03:14:37
 */

 #include<windows.h>

 void main()
 {
     //定义函数指针
     int (__stdcall *pFun){int,int,int,int,int};

     //赋值
     pFun = (int (__stdcall *pFun){int,int,int,int,int})0x--------;

     MessageBox(0,0,0,0);
     MessageBox(0,0,0,0);

     pFun(0,0,0,0,0);


     return ;

 }