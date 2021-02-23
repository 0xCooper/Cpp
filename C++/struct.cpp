/*

传结构体指针提高效率
传参传入结构体会会传入大量的重复操作
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


};

int Plus(Student* p)
{
    return p->a + p->b + p->c + p->d;

}

int main(int argc,char* argv[])
{
    Student s = {1,2,3,4};
    int r = Plus(&s)；
    return 0;
}