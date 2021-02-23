/*

类就是带有函数的结构体
*/

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

struct Student
{
    int a;
    int b;
    int c;
    int d;

    int Plus()
{
    return a+b+c+d;

}
};



int main(int argc,char* argv[])
{
    int x =sizeof(Student);//函数不占用结构体的空间，所以x=16  
    Student s = {1,2,3,4};
    int r = s.Plus()；
    return 0;
}