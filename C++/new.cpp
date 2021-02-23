/*
 * @Author: slime
 * @Date: 2021-01-30 14:34:35
 * @LastEditTime: 2021-01-31 14:46:15
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Python/home/slime/桌面/CodeStation/Cpp/c++(逆向示例)/new.cpp
 */



#include<stdio.h>
class  Person
{


private:
    /* data */
    int x;
    int y;
public:

    Person(/* args */int x,int y){
        this->x=x;
        this->y=y;
        printf("person 执行了\n");
    }
    ~Person(){
        printf("~person执行了");
    }
};




int main(int argc, char const *argv[])
{
    //在堆中创建对象
    Person* p =new Person(1,2);
    
    //释放对象占用的内存
    delete p;
    return 0;
}